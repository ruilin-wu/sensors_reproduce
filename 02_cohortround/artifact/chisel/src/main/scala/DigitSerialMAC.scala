import chisel3._
import chisel3.util._

/** Digit-serial multiply-accumulate (MAC) unit.
  *
  * One operand (`a`) is loaded in parallel and held stationary for the whole
  * multiply. The other operand is streamed in `digitWidth`-bit "digits",
  * least-significant digit first, one digit per valid cycle. After
  * `numDigits` digits have been consumed, the full product a*b is formed
  * and added into an internal accumulator.
  *
  * Protocol:
  *   1. Wait for io.ready.
  *   2. Assert io.start for one cycle with io.a driven to the stationary
  *      operand. This loads `a` and resets the internal digit counter.
  *   3. Over the following cycles, present the digits of `b` on io.digitIn
  *      (LSB digit first) with io.digitValid asserted (you may insert
  *      bubbles by deasserting io.digitValid; the module simply waits).
  *      If `width` is not an exact multiple of `digitWidth`, zero-pad the
  *      unused high bits of the final digit.
  *   4. After the numDigits-th valid digit is consumed, io.macValid pulses
  *      for one cycle, io.acc reflects the updated accumulator, and
  *      io.ready is reasserted so a new start/a/b sequence can begin.
  *
  * io.clearAcc synchronously zeros the accumulator whenever asserted,
  * taking priority over any in-flight accumulate on the same cycle.
  *
  * @param width       bit-width of each operand (a and b)
  * @param digitWidth  bit-width of one digit of the serially-fed operand b
  *                    (compile-time parameter)
  * @param accWidth    bit-width of the accumulator. Must be >= the full
  *                    product width (width + numDigits*digitWidth).
  *                    Defaults to product width + 8 guard bits.
  */
class DigitSerialMAC(val width: Int, val digitWidth: Int, accWidth: Int = -1) extends Module {

  require(width > 0, "width must be positive")
  require(digitWidth > 0, "digitWidth must be positive")

  // Number of digits needed to cover `width` bits of the serial operand.
  val numDigits = (width + digitWidth - 1) / digitWidth
  // b is effectively zero-extended to a whole number of digits.
  val padWidth  = numDigits * digitWidth
  // Max width of the full product a * b_padded.
  val prodWidth = width + padWidth
  val accW      = if (accWidth > 0) accWidth else prodWidth + 8

  require(accW >= prodWidth,
    s"accWidth ($accW) must be >= product width ($prodWidth)")

  val io = IO(new Bundle {
    // Stationary operand load / control
    val a          = Input(UInt(width.W))
    val start      = Input(Bool()) // pulse: load `a`, reset digit counter

    // Serially-streamed operand (LSB digit first)
    val digitIn    = Input(UInt(digitWidth.W))
    val digitValid = Input(Bool())

    // Accumulator control
    val clearAcc   = Input(Bool()) // synchronous clear, priority over add

    // Status / results
    val ready      = Output(Bool()) // safe to assert start
    val macValid   = Output(Bool()) // pulses when acc has just been updated
    val acc        = Output(UInt(accW.W))
  })

  val sIdle :: sRun :: Nil = Enum(2)
  val state = RegInit(sIdle)

  val regA     = Reg(UInt(width.W))
  val digitCnt = RegInit(0.U(log2Ceil(numDigits).W))

  // Running "top part" of the partial product. Sized width+1 bits: after
  // each add-then-shift-right-by-digitWidth step, exactly width+1 bits of
  // headroom are needed to hold the carry-safe top portion (see below).
  val pReg = RegInit(0.U((width + 1).W))

  // Finalized low-order digitWidth-bit chunks of the product, collected one
  // per cycle. Once a chunk is produced it never changes (later digits of b
  // only affect higher-order bits), so this doubles as an LSB-first
  // accumulation of the low `padWidth` bits of the final product.
  val lowChunks = Reg(Vec(numDigits, UInt(digitWidth.W)))

  val accReg      = RegInit(0.U(accW.W))
  val macValidReg = RegInit(false.B)

  io.ready    := state === sIdle
  io.acc      := accReg
  io.macValid := macValidReg

  macValidReg := false.B // default; pulsed for exactly one cycle on completion

  switch(state) {
    is(sIdle) {
      when(io.start) {
        regA     := io.a
        digitCnt := 0.U(log2Ceil(numDigits).W)
        pReg     := 0.U
        state    := sRun
      }
    }
    is(sRun) {
      when(io.digitValid) {
        // a * current digit: (width + digitWidth) bits
        val prod = regA * io.digitIn
        // add previous top part (pReg) in; +& grows the width by 1 bit to
        // safely absorb the carry. Result width = width + digitWidth + 1.
        val sum = pReg +& prod

        // Low digitWidth bits of `sum` are final output bits of the
        // product: no future digit (which only affects higher-order bit
        // positions) can ever change them.
        val curLow = sum(digitWidth - 1, 0)
        // Shift right by digitWidth to get the new top part. Resulting
        // width = (width + digitWidth + 1) - digitWidth = width + 1,
        // matching pReg's declared width.
        val curTop = sum >> digitWidth

        lowChunks(digitCnt) := curLow
        pReg                := curTop

        val isLast = digitCnt === (numDigits - 1).U

        when(isLast) {
          // NOTE: curLow/curTop are the values *this* cycle just computed;
          // the registers lowChunks(digitCnt)/pReg won't reflect them until
          // the next clock edge, so we must use curLow/curTop directly here
          // rather than reading back the (still-stale) registers.
          //
          // The digit being finished on this cycle is always chunk index
          // (numDigits - 1). All earlier chunks (0 .. numDigits-2) are
          // already correctly latched in lowChunks from prior cycles.
          val priorChunksMSBFirst = lowChunks.slice(0, numDigits - 1).reverse
          val lowPart: UInt =
            if (priorChunksMSBFirst.isEmpty) curLow
            else Cat(curLow +: priorChunksMSBFirst)

          // Full product = {curTop (top, width+1 bits), lowPart (padWidth
          // bits)}. Total width is prodWidth + 1; the extra top bit is
          // mathematically guaranteed to be zero (a * b_padded < 2^prodWidth),
          // so it is dropped.
          val fullProduct = Cat(curTop, lowPart)(prodWidth - 1, 0)

          accReg      := accReg + fullProduct
          macValidReg := true.B
          state       := sIdle
          // digitCnt is reset to 0 by the next `start`; no need to touch it here.
        }.otherwise {
          // Only emitted when numDigits > 1: digitCnt is declared with
          // log2Ceil(numDigits) bits, which is exactly 0 when
          // numDigits==1 (the whole value fits in a single digit-serial
          // iteration) -- and isLast above is provably always true in
          // that case (digitCnt, a 0-bit register, always reads 0, and
          // numDigits-1 is also 0), so this branch is unreachable dead
          // code for numDigits==1 regardless. Guarding it at the Scala
          // (elaboration-time) level avoids ever generating a
          // width-mismatched increment into a 0-bit register in the
          // first place, rather than relying on Chisel's implicit
          // (now-warned) truncation for hardware that would never
          // actually run.
          if (numDigits > 1) {
            digitCnt := digitCnt + 1.U
          }
        }
      }
    }
  }

  // clearAcc always has the final word: if asserted this cycle, the
  // accumulator is zero at the end of the cycle regardless of any
  // just-computed accumulate above (last-connect semantics).
  when(io.clearAcc) {
    accReg := 0.U
  }
}

/** Example elaboration entry point (Chisel 6.x, CIRCT-based flow). */
object DigitSerialMACMain extends App {
  // width = 32-bit operands, digitWidth = 8 bits/digit -> 4 digits per multiply
  _root_.circt.stage.ChiselStage.emitSystemVerilogFile(new DigitSerialMAC(32, 8))
}
