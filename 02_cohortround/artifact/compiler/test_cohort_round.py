"""Pre-Vivado semantic gates for CohortRound's compiler lowering."""

from itertools import product
from random import Random

from cohort_codegen import recognize, generate_chisel, CohortCodegenError
from boundary_checker import check_kernel
from dsk_types import FixedType
from interpreter import HWValue, run_kernel, wrap_int

PASSED = 0
FAILED = 0


def check(name, condition, detail=""):
    global PASSED, FAILED
    if condition:
        PASSED += 1
        print(f"[ ok ] {name}")
    else:
        FAILED += 1
        print(f"[FAIL] {name}: {detail}")


def rne(numerator, denominator):
    q, r = divmod(numerator, denominator)
    return q + int(2 * r > denominator or (2 * r == denominator and q & 1))


# Exhaustive selector domain: all 8^4 inputs, including every tie.
for prefixes in product(range(8), repeat=4):
    got = rne(sum(prefixes) + 2, 8)
    exact_midpoint = sum(2 * p + 1 for p in prefixes)
    expected = rne(exact_midpoint, 16)
    if got != expected:
        FAILED += 1
        print("[FAIL] exhaustive selector", prefixes, got, expected)
        break
else:
    PASSED += 1
    print("[ ok ] exhaustive 4-term/p=3 selector: 4096 cases")


SRC = """
@kernel(digit_width=4, parallelism=1)
def cohort_dot(a: Array[Fixed[16,14], 24], b: Array[Fixed[16,14], 24]) -> Fixed[20,13]:
    return cohort_mac_reduce(24, lambda i: a[i] * b[i], term_frac=13, cohort_size=4, prefix_bits=3)
"""


def oracle(a, b):
    shift, p = 15, 3
    mask = (1 << shift) - 1
    total = 0
    for start in range(0, 24, 4):
        prods = [a[i] * b[i] for i in range(start, start + 4)]
        prefixes = [((x & mask) >> (shift - p)) for x in prods]
        total += sum(x >> shift for x in prods) + rne(sum(prefixes) + 2, 1 << p)
    return wrap_int(total, 20, True)


def run_case(a, b):
    t = FixedType(16, 14)
    got = run_kernel(SRC,
                     a=[HWValue(t, raw=x) for x in a],
                     b=[HWValue(t, raw=x) for x in b])
    return got.raw


edge = [-32768, -32767, -1, 0, 1, 32766, 32767]
directed = [
    ([0] * 24, [32767] * 24),
    ([-32768] * 24, [32767] * 24),
    ([edge[i % len(edge)] for i in range(24)],
     [edge[(5 * i + 1) % len(edge)] for i in range(24)]),
]
rng = Random(0xC0A0)
random_cases = [([rng.randrange(-32768, 32768) for _ in range(24)],
                 [rng.randrange(-32768, 32768) for _ in range(24)])
                for _ in range(2000)]
mismatches = sum(run_case(a, b) != oracle(a, b) for a, b in directed + random_cases)
check("interpreter matches independent oracle: directed + 2000 random", mismatches == 0,
      f"mismatches={mismatches}")

# Quantitative bound at the original unit delta: joint p=3 error <= 0.75,
# while four independent RTN errors can sum to 2.0.
max_error = 0.0
for prefixes in product(range(8), repeat=4):
    # Check both endpoints of every prefix cell. The linear error reaches
    # its extrema there; epsilon keeps the upper endpoint inside the cell.
    k = rne(sum(prefixes) + 2, 8)
    for upper in (False, True):
        residues = [(p + (1.0 if upper else 0.0)) / 8.0 for p in prefixes]
        max_error = max(max_error, abs(k - sum(residues)))
check("formal cell-endpoint selector bound <= 0.75 delta", max_error <= 0.7500001,
      f"max={max_error}")

k = recognize(SRC, class_name="GeneratedCohortDot24")
scala = generate_chisel(k)
check("meta/kernel boundary checker accepts the new hardware intrinsic",
      check_kernel(SRC) == [])
check("compiler recognizes the canonical DSK kernel", k.n == 24 and k.term_frac == 13)
check("lowering instantiates the narrow CohortRound RTL",
      "extends NarrowCohortDotProduct" in scala and "termFrac = 13" in scala)

try:
    recognize(SRC.replace("cohort_size=4", "cohort_size=3"))
except CohortCodegenError:
    PASSED += 1
    print("[ ok ] unsupported cohort shape fails closed")
else:
    FAILED += 1
    print("[FAIL] unsupported cohort shape was silently accepted")

print(f"\nCohortRound pre-Vivado gates: {PASSED} passed, {FAILED} failed")
raise SystemExit(1 if FAILED else 0)
