import chisel3._
import chisel3.util._

/** Computes a single signed product `a * b` by converting both operands to
  * sign+magnitude, streaming the magnitude of `b` through an internal
  * (unsigned) [[DigitSerialMAC]], and re-applying the sign to the result.
  *
  * The internal unsigned datapath is built one bit wider than `width`
  * (i.e. `DigitSerialMAC(width + 1, digitWidth)`), specifically so that
  * negating the most-negative representable `width`-bit value (e.g. -128
  * for width=8) -- which does not fit back into `width`-bit two's
  * complement -- is computed exactly rather than silently wrapping.
  *
  * Protocol mirrors DigitSerialMAC: assert `start` for one cycle with `a`
  * and `b` both driven and held stable that cycle; `done` pulses one cycle
  * when `result` is valid; `ready` indicates idle.
  */
class SignedDigitSerialMultiplier(val width: Int, val digitWidth: Int) extends Module {
  require(width > 0, "width must be positive")
  require(digitWidth > 0, "digitWidth must be positive")

  // One extra bit of headroom in the internal unsigned datapath; see class doc.
  val inner = Module(new DigitSerialMAC(width + 1, digitWidth))
  val resultWidth = inner.accW + 1 // +1 bit for sign

  val io = IO(new Bundle {
    val a      = Input(SInt(width.W))
    val b      = Input(SInt(width.W))
    val start  = Input(Bool())
    val ready  = Output(Bool())
    val done   = Output(Bool())
    val result = Output(SInt(resultWidth.W))
  })

  val sIdle :: sStream :: Nil = Enum(2)
  val state = RegInit(sIdle)

  val shiftWidth = math.max(width + 1, digitWidth)
  val magBShift  = Reg(UInt(shiftWidth.W))
  val signReg    = Reg(Bool())
  val resultReg  = RegInit(0.S(resultWidth.W))
  val doneReg    = RegInit(false.B)

  val signA = io.a(width - 1)
  val signB = io.b(width - 1)
  // Sign-extend to width+1 bits first so that negating the most-negative
  // width-bit value doesn't itself overflow (see class doc).
  val aExt = io.a.pad(width + 1)
  val bExt = io.b.pad(width + 1)
  val magA: UInt = Mux(signA, (-aExt).asUInt, aExt.asUInt)(width, 0)
  val magB: UInt = Mux(signB, (-bExt).asUInt, bExt.asUInt)(width, 0)

  io.ready  := state === sIdle
  io.done   := doneReg
  io.result := resultReg

  doneReg := false.B // default; pulsed for exactly one cycle on completion

  inner.io.a          := magA
  inner.io.digitIn    := magBShift(digitWidth - 1, 0)
  inner.io.digitValid := false.B
  inner.io.start      := false.B
  inner.io.clearAcc   := false.B

  switch(state) {
    is(sIdle) {
      when(io.start) {
        inner.io.start := true.B
        magBShift      := magB
        signReg        := signA ^ signB
        state          := sStream
      }
    }
    is(sStream) {
      inner.io.digitValid := true.B
      magBShift            := magBShift >> digitWidth

      when(inner.io.macValid) {
        val mag = inner.io.acc.zext // non-negative, resultWidth bits
        resultReg         := Mux(signReg, -mag, mag)
        doneReg           := true.B
        inner.io.clearAcc := true.B
        state             := sIdle
      }
    }
  }
}
