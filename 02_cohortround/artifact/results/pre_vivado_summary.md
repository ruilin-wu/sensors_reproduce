# CohortRound pre-Vivado gate

This gate turns the earlier numerical observation into a compiler-to-RTL
prototype before spending time on Vivado place-and-route.

## Implemented path

1. DSK intrinsic: `cohort_mac_reduce` in `compiler/interpreter.py`.
2. Fail-closed pattern recognizer and Chisel lowering in
   `compiler/cohort_codegen.py`.
3. Four-term, 3-prefix-bit midpoint selector and a 24-term narrow-product
   reduction in `digit-serial-mac/src/main/scala/CohortRound4.scala`.
4. CIRCT-emitted SystemVerilog and a Vivado OOC batch script.

## Actual results on 2026-09-03

- Python gates: **7 passed, 0 failed**.
- Selector software domain: **4096/4096** prefix combinations matched.
- Datapath software cross-check: directed boundaries plus **2000/2000** random
  signed 24-term cases matched an independently written integer oracle.
- Chisel/Verilator: **5 passed, 0 failed** across target and baselines.
- Selector RTL domain: **4096/4096** combinations matched.
- Registered-selector valid/bubble protocol passed.
- Full 24-term RTL datapath passed directed signed extremes and 40 random
  vectors against the independent Scala oracle.
- Two matched-control RTLs are included: independent per-product RNE and
  full-precision accumulation followed by one RNE. They keep the same serial
  multiplier, control protocol, I/O format, and operation count.
- Both baselines passed signed extremes plus 20 random vectors against their
  independent integer definitions.
- CIRCT SystemVerilog elaboration succeeded.
- Verilator 5.050 lint exited 0. The one unused-signal warning concerns
  multiplier guard bits and deliberately discarded low residue bits.

## What this does and does not establish

It establishes executable numerical semantics, signed/tie behavior, compiler
recognition, an actual narrow accumulator/interconnect lowering, synthesizable
RTL, and a reproducible Vivado entry point. It does **not** establish FPGA PPA:
Vivado is not installed on this machine, so LUT/FF/DSP/Fmax/post-route power are
still unmeasured. The Vivado run is configured as a three-way matched
comparison, but its actual post-route numbers remain pending because Vivado is
unavailable here.

## Reproduction

```bash
cd /home/ruilin/SPL_Surreal/DAC/flexbe-main/compiler
python3 test_cohort_round.py

cd /home/ruilin/SPL_Surreal/DAC/flexbe-main/digit-serial-mac
java -jar /tmp/sbt-launch-1.10.7.jar 'runMain EmitCohortRound4'
java -jar /tmp/sbt-launch-1.10.7.jar 'runMain EmitCohortRoundBaselines'
PATH=/tmp/cohort-verilator/bin:$PATH \
  java -jar /tmp/sbt-launch-1.10.7.jar \
  'testOnly CohortRound4Spec CohortRoundBaselineSpec'

cd generated/cohortround
/tmp/cohort-verilator/bin/verilator --lint-only --timing -Wall -Wno-fatal \
  --top-module NarrowCohortDotProduct24 -f filelist.f
```
