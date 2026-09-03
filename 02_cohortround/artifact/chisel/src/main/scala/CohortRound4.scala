import chisel3._
import chisel3.util._

/** Four-term CohortRound selector.
  *
  * Each input is the p most-significant bits of a discarded fixed-point
  * residue.  The selector reconstructs the sum of the four residue
  * midpoints and chooses exactly k of the four narrow products to round up,
  * where k is the round-to-nearest-even integer for that midpoint sum.
  * The first k lanes are selected because all lanes have equal sensitivity
  * in a dot-product reduction; no sorting network is needed.
  */
class CohortRound4Combinational(val prefixBits: Int = 3) extends Module {
  require(prefixBits > 0)

  val io = IO(new Bundle {
    val prefix = Input(Vec(4, UInt(prefixBits.W)))
    val upCount = Output(UInt(3.W))
    val upMask = Output(Vec(4, Bool()))
  })

  // In units of 1/2^p, the four midpoint residues sum to
  // sum(prefix_i) + 4*0.5 = sum(prefix_i) + 2.
  val sumWidth = prefixBits + 3
  val prefixSum = io.prefix.map(_.pad(sumWidth)).reduce(_ +& _)
  val numerator = prefixSum +& 2.U
  val base = numerator >> prefixBits
  val remainder = numerator(prefixBits - 1, 0)
  val half = (1 << (prefixBits - 1)).U(prefixBits.W)
  val increment = (remainder > half) || ((remainder === half) && base(0))
  val rounded = base +& increment.asUInt

  io.upCount := rounded(2, 0)
  for (i <- 0 until 4) {
    io.upMask(i) := i.U < rounded
  }
}

/** One-cycle registered selector, suitable as a pipeline boundary. */
class CohortRound4Selector(val prefixBits: Int = 3) extends Module {
  val io = IO(new Bundle {
    val inValid = Input(Bool())
    val prefix = Input(Vec(4, UInt(prefixBits.W)))
    val outValid = Output(Bool())
    val upCount = Output(UInt(3.W))
    val upMask = Output(Vec(4, Bool()))
  })

  val core = Module(new CohortRound4Combinational(prefixBits))
  core.io.prefix := io.prefix
  io.outValid := RegNext(io.inValid, false.B)
  io.upCount := RegEnable(core.io.upCount, 0.U, io.inValid)
  val maskReg = RegEnable(core.io.upMask, VecInit(Seq.fill(4)(false.B)), io.inValid)
  io.upMask := maskReg
}

/** Vivado-facing proof-of-concept narrow-product dot product.
  *
  * Products are generated exactly, but only `termFrac` fractional bits are
  * retained in the reduction.  Four products form one cohort.  Their floor
  * values are accumulated and the CohortRound selector contributes a shared
  * integer correction in [0,4].  This is the intended compiler lowering for
  * `cohort_mac_reduce`, and exposes the real narrow accumulator/interconnect
  * that a post-route PPA experiment must measure.
  */
class NarrowCohortDotProduct(
    val n: Int = 24,
    val width: Int = 16,
    val inputFrac: Int = 14,
    val termFrac: Int = 13,
    val prefixBits: Int = 3,
    val outWidth: Int = 20,
    val digitWidth: Int = 4) extends Module {
  require(n > 0 && n % 4 == 0, "n must be a positive multiple of four")
  require(width > 0 && inputFrac >= 0 && termFrac >= 0)
  require(2 * inputFrac >= termFrac + prefixBits,
    "discarded product field must contain all requested prefix bits")

  private val prodWidth = 2 * width
  private val shiftAmt = 2 * inputFrac - termFrac
  private val termWidth = prodWidth - shiftAmt
  private val groupWidth = termWidth + 2
  private val accWidth = termWidth + log2Ceil(n) + 1
  private val idxWidth = math.max(1, log2Ceil(n))

  val io = IO(new Bundle {
    val a = Input(Vec(n, SInt(width.W)))
    val b = Input(Vec(n, SInt(width.W)))
    val start = Input(Bool())
    val ready = Output(Bool())
    val done = Output(Bool())
    val result = Output(SInt(outWidth.W))
  })

  val mult = Module(new SignedDigitSerialMultiplier(width, digitWidth))
  val selector = Module(new CohortRound4Combinational(prefixBits))

  val sIdle :: sRun :: Nil = Enum(2)
  val state = RegInit(sIdle)
  val idx = RegInit(0.U(idxWidth.W))
  val groupPos = RegInit(0.U(2.W))
  val fired = RegInit(false.B)
  val groupFloor = RegInit(0.S(groupWidth.W))
  val acc = RegInit(0.S(accWidth.W))
  val prefixRegs = RegInit(VecInit(Seq.fill(4)(0.U(prefixBits.W))))
  val doneReg = RegInit(false.B)
  val resultReg = RegInit(0.S(outWidth.W))

  io.ready := state === sIdle
  io.done := doneReg
  io.result := resultReg
  doneReg := false.B

  mult.io.a := io.a(idx)
  mult.io.b := io.b(idx)
  mult.io.start := false.B

  // For the completing lane, bypass the prefix register so the selector
  // sees all four members in the same cycle as mult.io.done.
  val prefixForRound = Wire(Vec(4, UInt(prefixBits.W)))
  prefixForRound := prefixRegs
  val trueProduct = mult.io.result(prodWidth - 1, 0).asSInt
  val productFloor = (trueProduct >> shiftAmt).asSInt
  val residuePrefix = trueProduct(shiftAmt - 1, shiftAmt - prefixBits)
  when(mult.io.done) {
    prefixForRound(groupPos) := residuePrefix
  }
  selector.io.prefix := prefixForRound

  switch(state) {
    is(sIdle) {
      when(io.start) {
        idx := 0.U
        groupPos := 0.U
        fired := false.B
        groupFloor := 0.S
        acc := 0.S
        prefixRegs := VecInit(Seq.fill(4)(0.U(prefixBits.W)))
        state := sRun
      }
    }
    is(sRun) {
      when(!fired) {
        mult.io.start := true.B
        fired := true.B
      }
      when(mult.io.done) {
        val floorExtended = productFloor.pad(groupWidth)
        val nextGroupFloor = (groupFloor +& floorExtended)(groupWidth - 1, 0).asSInt
        val closesGroup = groupPos === 3.U
        val isLast = idx === (n - 1).U

        when(closesGroup) {
          val correctedGroup = nextGroupFloor.pad(accWidth) +& selector.io.upCount.zext.pad(accWidth)
          val nextAcc = (acc +& correctedGroup)(accWidth - 1, 0).asSInt
          when(isLast) {
            resultReg := nextAcc.pad(outWidth)(outWidth - 1, 0).asSInt
            doneReg := true.B
            state := sIdle
          }.otherwise {
            acc := nextAcc
            groupFloor := 0.S
            groupPos := 0.U
            idx := idx + 1.U
            fired := false.B
          }
        }.otherwise {
          groupFloor := nextGroupFloor
          prefixRegs(groupPos) := residuePrefix
          groupPos := groupPos + 1.U
          idx := idx + 1.U
          fired := false.B
        }
      }
    }
  }
}

/** Stable top-level name and parameters for the first Vivado experiment. */
class NarrowCohortDotProduct24 extends NarrowCohortDotProduct()

object EmitCohortRound4 extends App {
  _root_.circt.stage.ChiselStage.emitSystemVerilogFile(
    new NarrowCohortDotProduct24,
    args = Array("--target-dir", "generated/cohortround"),
    firtoolOpts = Array("-disable-all-randomization", "-strip-debug-info")
  )
}
