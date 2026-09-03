import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import org.scalatest.matchers.should.Matchers
import scala.util.Random

class CohortRound4Spec extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "CohortRound4"

  private def roundTiesEven(numerator: Int, denominator: Int): Int = {
    val q = numerator / denominator
    val r = numerator % denominator
    if (2 * r > denominator || (2 * r == denominator && (q & 1) == 1)) q + 1 else q
  }

  it should "exhaustively implement the p=3 midpoint-count oracle" in {
    test(new CohortRound4Combinational(3)) { dut =>
      for (a <- 0 until 8; b <- 0 until 8; c <- 0 until 8; d <- 0 until 8) {
        val values = Seq(a, b, c, d)
        values.indices.foreach(i => dut.io.prefix(i).poke(values(i).U))
        val expected = roundTiesEven(values.sum + 2, 8)
        dut.io.upCount.expect(expected.U)
        values.indices.foreach(i => dut.io.upMask(i).expect((i < expected).B))
      }
    }
  }

  it should "have exactly one registered cycle of latency and preserve bubbles" in {
    test(new CohortRound4Selector(3)) { dut =>
      dut.io.inValid.poke(false.B)
      dut.clock.step()
      dut.io.outValid.expect(false.B)
      Seq((Seq(0, 0, 0, 0), true), (Seq(7, 7, 7, 7), false),
          (Seq(1, 2, 3, 4), true)).foreach { case (v, valid) =>
        v.indices.foreach(i => dut.io.prefix(i).poke(v(i).U))
        dut.io.inValid.poke(valid.B)
        dut.clock.step()
        dut.io.outValid.expect(valid.B)
        if (valid) dut.io.upCount.expect(roundTiesEven(v.sum + 2, 8).U)
      }
    }
  }

  private def wrap(v: BigInt, width: Int): BigInt = {
    val modulus = BigInt(1) << width
    val u = ((v % modulus) + modulus) % modulus
    if (u.testBit(width - 1)) u - modulus else u
  }

  private def reference(a: Seq[Int], b: Seq[Int], prefixBits: Int = 3): BigInt = {
    val shift = 15 // 2*inputFrac(14) - termFrac(13)
    val mask = (BigInt(1) << shift) - 1
    val prefixShift = shift - prefixBits
    val groups: Seq[BigInt] = a.zip(b).grouped(4).map { group =>
      val products = group.map { case (x, y) => BigInt(x) * BigInt(y) }
      val floors = products.map(_ >> shift)
      val prefixes = products.map(p => ((p & mask) >> prefixShift).toInt)
      floors.sum + BigInt(roundTiesEven(prefixes.sum + 2, 1 << prefixBits))
    }.toSeq
    wrap(groups.sum, 20)
  }

  private def runDot(dut: NarrowCohortDotProduct24, a: Seq[Int], b: Seq[Int]): BigInt = {
    a.indices.foreach { i =>
      dut.io.a(i).poke(a(i).S(16.W)); dut.io.b(i).poke(b(i).S(16.W))
    }
    dut.io.start.poke(true.B); dut.clock.step(); dut.io.start.poke(false.B)
    var guard = 0
    while (!dut.io.done.peek().litToBoolean) {
      dut.clock.step(); guard += 1
      require(guard < 20000, "NarrowCohortDotProduct timed out")
    }
    dut.io.result.peek().litValue
  }

  it should "match the independent integer oracle on random and signed boundary products" in {
    test(new NarrowCohortDotProduct24) { dut =>
      dut.clock.setTimeout(0)
      val edge = Seq(Int.MinValue >> 16, -32767, -1, 0, 1, 32767)
      val directed = Seq(
        (Seq.fill(24)(-32768), Seq.fill(24)(32767)),
        ((0 until 24).map(i => edge(i % edge.size)),
          (0 until 24).map(i => edge((i * 5 + 1) % edge.size)))
      )
      val rng = new Random(0xC0A0)
      val random = Seq.fill(40) {
        (Seq.fill(24)(rng.nextInt(65536) - 32768),
          Seq.fill(24)(rng.nextInt(65536) - 32768))
      }
      (directed ++ random).foreach { case (a, b) =>
        runDot(dut, a, b) shouldBe reference(a, b)
      }
    }
  }
}
