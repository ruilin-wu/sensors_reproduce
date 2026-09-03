# Artifact manifest

## Compiler

- `compiler/interpreter.py`: DSK fixed-point interpreter, including
  `cohort_mac_reduce` semantics.
- `compiler/boundary_checker.py`: phase checker updated for the new intrinsic.
- `compiler/cohort_codegen.py`: fail-closed canonical-pattern recognizer and
  Chisel lowering.
- `compiler/dsk_types.py`: type-system dependency needed by the snapshot.
- `compiler/test_cohort_round.py`: exhaustive, randomized, bound, checker, and
  code-generation gates.

## Chisel RTL

- `chisel/src/main/scala/CohortRound4.scala`: selector, registered selector,
  narrow 24-term reduction, and CIRCT emitter.
- `chisel/src/main/scala/CohortRoundBaselines.scala`: matched independent-RNE
  and full-precision-late-RNE designs.
- `chisel/src/main/scala/GeneratedCohortDot24.scala`: representative generated
  compiler wrapper.
- `SignedDigitSerialMultiplier.scala` and `DigitSerialMAC.scala`: required
  arithmetic dependencies.
- `chisel/src/test/scala/`: target and baseline RTL tests.
- `chisel/build.sbt` and `chisel/project/build.properties`: reproducible build
  definition using Chisel 7.14.0, Scala 2.13.18, and sbt 1.10.7.

## Generated RTL

- `generated_rtl/`: checked-in CIRCT SystemVerilog for CohortRound and both
  matched baselines, including each `filelist.f`.

## Vivado handoff

- `vivado/clock.xdc`: 200 MHz out-of-context clock and I/O delays.
- `vivado/run_vivado.tcl`: one-top synthesis, implementation, and reports.
- `vivado/run_all.tcl`: matched three-top experiment driver.

## Results

- `results/python_gate.txt`: frozen 7/7 compiler/Python result.
- `results/rtl_gate.txt`: frozen 5/5 Chisel/Verilator result.
- `results/rtl_lint.txt`: three-top lint result and warning disposition.
- `results/tcl_control_flow.txt`: mocked three-top Tcl path/control check.
- `results/software_feasibility.md`: earlier numerical feasibility study.
- `results/boundary_results.md`: earlier adversarial/boundary study.
- `results/kernel_results.md`: earlier representative-kernel study.
- `results/pre_vivado_summary.md`: pre-Vivado summary.
- `results/pre_vivado_report_zh.md`: detailed Chinese gate report.
- `chisel/target/test-reports/*.xml`: machine-readable ScalaTest reports from
  the self-contained rerun.

Vivado report files are intentionally absent: Vivado is not installed, so no
post-synthesis or post-route measurement has been fabricated or inferred.
