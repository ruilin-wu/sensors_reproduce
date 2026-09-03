import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import org.scalatest.matchers.should.Matchers
import scala.util.Random

class CohortRoundBaselineSpec extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "CohortRound matched baselines"

  private def wrap(v: BigInt, width: Int): BigInt = {
    val m = BigInt(1) << width
    val u = ((v % m) + m) % m
    if (u.testBit(width - 1)) u - m else u
  }

  private def rneShift(v: BigInt, shift: Int): BigInt = {
    val floor = v >> shift
    val rem = v & ((BigInt(1) << shift) - 1)
    val half = BigInt(1) << (shift - 1)
    floor + (if (rem > half || (rem == half && floor.testBit(0))) 1 else 0)
  }

  private def run(dut: RoundedDotProduct24Baseline, a: Seq[Int], b: Seq[Int]): BigInt = {
    a.indices.foreach { i =>
      dut.io.a(i).poke(a(i).S(16.W)); dut.io.b(i).poke(b(i).S(16.W))
    }
    dut.io.start.poke(true.B); dut.clock.step(); dut.io.start.poke(false.B)
    var guard = 0
    while (!dut.io.done.peek().litToBoolean) {
      dut.clock.step(); guard += 1; require(guard < 20000)
    }
    dut.io.result.peek().litValue
  }

  private val rng = new Random(0xBA5E)
  private val cases = Seq(
    (Seq.fill(24)(-32768), Seq.fill(24)(32767)),
    (Seq.fill(24)(1), Seq.fill(24)(-1))
  ) ++ Seq.fill(20) {
    (Seq.fill(24)(rng.nextInt(65536) - 32768),
      Seq.fill(24)(rng.nextInt(65536) - 32768))
  }

  it should "match independent per-product RNE" in {
    test(new IndependentRoundDotProduct24) { dut =>
      dut.clock.setTimeout(0)
      cases.foreach { case (a, b) =>
        val expected = wrap(a.zip(b).map { case (x, y) => rneShift(BigInt(x) * y, 15) }.sum, 20)
        run(dut, a, b) shouldBe expected
      }
    }
  }

  it should "match full-precision accumulation followed by one RNE" in {
    test(new FullPrecisionDotProduct24) { dut =>
      dut.clock.setTimeout(0)
      cases.foreach { case (a, b) =>
        val expected = wrap(rneShift(a.zip(b).map { case (x, y) => BigInt(x) * y }.sum, 15), 20)
        run(dut, a, b) shouldBe expected
      }
    }
  }
}
