# CohortRound Validation and Vivado Handoff

This directory now contains the complete CohortRound material produced so far:
the original idea description, numerical studies, boundary-condition studies,
compiler prototype, Chisel RTL, RTL tests, generated SystemVerilog, matched
baselines, Vivado scripts, and validation reports.

The self-contained implementation snapshot is under [`artifact/`](artifact/).
The earlier broad Python studies remain under [`validation/`](validation/).
Nothing in this package depends on modifying the original `flexbe-main` tree.

## Current verdict

The numerical, compiler, elaboration, simulation, and lint gates pass. The
current status is therefore **pre-Vivado gate passed; post-route PPA pending**,
not an RTL/compiler failure.

The prototype proves that CohortRound has precise executable semantics and can
be lowered into synthesizable hardware. It does not yet prove a publishable FPGA
area or energy improvement, because Vivado is unavailable on this machine and
the current serial multiplier still computes a full 32-bit product. The proven
hardware reduction is downstream: the reduction accumulator is narrowed from
38 bits to 23 bits, with a 19-bit four-term group accumulator.

## Validation summary

| Gate | Result | Coverage |
|---|---:|---|
| Earlier feasibility suite | Passed | Accuracy, bias, cross-term cancellation, candidate search |
| Earlier boundary suite | Passed with documented limitations | Ties, signed values, correlation, adversarial residues, overflow |
| Compiler/Python gate | 7 passed, 0 failed | 4,096 selector states; directed cases; 2,000 random 24-term reductions |
| Chisel/Verilator gate | 5 passed, 0 failed | Selector, protocol, target datapath, two matched baselines |
| CIRCT elaboration | Passed | Three synthesizable SystemVerilog tops generated |
| Verilator 5.050 lint | Passed | All three generated RTL designs; expected unused guard/residue warnings only |
| Vivado implementation | Pending | Vivado executable is not installed on this machine |

The original interpreter regression produced 34 passes and one pre-existing
integration failure caused by the absent
`precision_analysis/reference_and_fixed.py` module. That test script exits with
code zero despite printing the missing-module case as a failure; it is not
counted as a CohortRound pass.

## Package layout

```text
02_cohortround/
├── COHORTROUND_VALIDATION_EN.md       # this index
├── cohortround_intro.tex/pdf          # paper-style Chinese introduction
├── references.bib                     # cited prior work
├── validation/                        # original software feasibility studies
│   └── vivado_precheck/               # detailed pre-Vivado reports
└── artifact/                          # self-contained compiler-to-Vivado snapshot
    ├── compiler/                      # DSK intrinsic, interpreter, recognizer, tests
    ├── chisel/                        # RTL sources, dependencies, and Scala tests
    ├── generated_rtl/                 # target plus two matched-control designs
    ├── vivado/                        # XDC and batch-mode implementation scripts
    └── results/                       # frozen command results and manifest
```

## Mechanism represented by this artifact

For four product residues, each represented by a `p`-bit prefix `q_i`, the
selector estimates the group residue using cell midpoints:

```text
R_hat = sum_i (q_i + 0.5) / 2^p
k     = round-to-nearest-even(R_hat)
```

The reduction emits the sum of the four product floors plus `k`. For the
implemented `p=3`, four-term selector, exhaustive enumeration covers all
`8^4 = 4,096` input states. The cell-endpoint test confirms the expected maximum
group error of `0.75` output LSB, compared with a worst-case `2.0` LSB sum for
four independently rounded terms.

The representative lowering is:

- inputs: `Fixed[16,14]`;
- exact product: 32 bits with 28 fractional bits;
- retained term: 17 bits with 13 fractional bits;
- group accumulator: 19 bits;
- global narrow accumulator: 23 bits;
- full-precision matched baseline accumulator: 38 bits;
- output: `Fixed[20,13]`.

## Reproduce from the self-contained snapshot

Compiler and numerical tests:

```bash
cd artifact/compiler
python3 test_cohort_round.py
```

Chisel tests and SystemVerilog generation:

```bash
cd artifact/chisel
java -jar /tmp/sbt-launch-1.10.7.jar compile
PATH=/tmp/cohort-verilator/bin:$PATH \
  java -jar /tmp/sbt-launch-1.10.7.jar \
  'testOnly CohortRound4Spec CohortRoundBaselineSpec'
java -jar /tmp/sbt-launch-1.10.7.jar 'runMain EmitCohortRound4'
java -jar /tmp/sbt-launch-1.10.7.jar 'runMain EmitCohortRoundBaselines'
```

Lint the checked-in target RTL:

```bash
cd artifact/generated_rtl
/tmp/cohort-verilator/bin/verilator --lint-only --timing -Wall -Wno-fatal \
  --top-module NarrowCohortDotProduct24 -f filelist.f
```

Run all three matched designs in Vivado:

```bash
cd artifact/vivado
vivado -mode batch -source run_all.tcl
```

The default target is the ZCU104 part `xczu7ev-ffvc1156-2-e` at 200 MHz. Use
`FPGA_PART=<part>` to select another device. The Tcl flow creates separate
post-synthesis and post-route utilization, timing, power, DRC, and checkpoint
outputs for CohortRound, independent per-product RNE, and full-precision late
RNE. Vectorless power is only a smoke-test estimate; publication results must
use representative SAIF/VCD switching activity.

## Remaining research gate

The first Vivado result must be interpreted conservatively. In this serial
prototype the shared multiplier is likely to dominate area, so narrowing only
the reduction network may produce a small top-level improvement. If that occurs,
the next required compiler/backend mechanism is a truncated-product or
high-product-plus-residue-prefix multiplier lowering. Changing devices or timing
constraints would not address the underlying architectural limitation.
