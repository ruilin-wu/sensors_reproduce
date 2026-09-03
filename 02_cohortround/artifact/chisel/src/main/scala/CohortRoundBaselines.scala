import chisel3._
import chisel3.util._

/** Matched-control baselines for the Vivado PPA experiment.
  *
  * Both use the same serial multiplier, input interface, output format and
  * one-product-at-a-time schedule as NarrowCohortDotProduct24.  The only
  * changed factor is the rounding/reduction mechanism:
  *   - independent=true: RNE every product, then use a narrow accumulator;
  *   - independent=false: use a full-precision accumulator, then RNE once.
  */
class RoundedDotProduct24Baseline(val independent: Boolean) extends Module {
  private val n = 24
  private val width = 16
  private val digitWidth = 4
  private val shiftAmt = 15
  private val outWidth = 20
  private val prodWidth = 32
  private val termWidth = prodWidth - shiftAmt
  private val accWidth = if (independent) termWidth + log2Ceil(n) + 1
                         else prodWidth + log2Ceil(n) + 1

  val io = IO(new Bundle {
    val a = Input(Vec(n, SInt(width.W)))
    val b = Input(Vec(n, SInt(width.W)))
    val start = Input(Bool())
    val ready = Output(Bool())
    val done = Output(Bool())
    val result = Output(SInt(outWidth.W))
  })

  private def roundShiftEven(x: SInt, sourceWidth: Int): SInt = {
    val floor = (x >> shiftAmt).asSInt
    val remainder = x(shiftAmt - 1, 0)
    val half = (1 << (shiftAmt - 1)).U(shiftAmt.W)
    val increment = (remainder > half) || ((remainder === half) && floor(0))
    (floor +& increment.asUInt.zext).asSInt
  }

  val mult = Module(new SignedDigitSerialMultiplier(width, digitWidth))
  val sIdle :: sRun :: Nil = Enum(2)
  val state = RegInit(sIdle)
  val idx = RegInit(0.U(log2Ceil(n).W))
  val fired = RegInit(false.B)
  val acc = RegInit(0.S(accWidth.W))
  val doneReg = RegInit(false.B)
  val resultReg = RegInit(0.S(outWidth.W))

  io.ready := state === sIdle
  io.done := doneReg
  io.result := resultReg
  doneReg := false.B
  mult.io.a := io.a(idx)
  mult.io.b := io.b(idx)
  mult.io.start := false.B

  switch(state) {
    is(sIdle) {
      when(io.start) {
        idx := 0.U; fired := false.B; acc := 0.S; state := sRun
      }
    }
    is(sRun) {
      when(!fired) { mult.io.start := true.B; fired := true.B }
      when(mult.io.done) {
        val product = mult.io.result(prodWidth - 1, 0).asSInt
        val contribution = if (independent) roundShiftEven(product, prodWidth) else product
        val nextAcc = (acc +& contribution.pad(accWidth))(accWidth - 1, 0).asSInt
        val isLast = idx === (n - 1).U
        when(isLast) {
          val finalValue = if (independent) nextAcc else roundShiftEven(nextAcc, accWidth)
          resultReg := finalValue.pad(outWidth)(outWidth - 1, 0).asSInt
          doneReg := true.B
          state := sIdle
        }.otherwise {
          acc := nextAcc
          idx := idx + 1.U
          fired := false.B
        }
      }
    }
  }
}

class IndependentRoundDotProduct24 extends RoundedDotProduct24Baseline(true)
class FullPrecisionDotProduct24 extends RoundedDotProduct24Baseline(false)

object EmitCohortRoundBaselines extends App {
  _root_.circt.stage.ChiselStage.emitSystemVerilogFile(
    new IndependentRoundDotProduct24,
    args = Array("--target-dir", "generated/cohortround/independent"),
    firtoolOpts = Array("-disable-all-randomization", "-strip-debug-info"))
  _root_.circt.stage.ChiselStage.emitSystemVerilogFile(
    new FullPrecisionDotProduct24,
    args = Array("--target-dir", "generated/cohortround/full_precision"),
    firtoolOpts = Array("-disable-all-randomization", "-strip-debug-info"))
}
