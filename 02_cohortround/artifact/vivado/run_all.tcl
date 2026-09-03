# Runs all three matched-control implementations in separate in-memory designs.
set script_dir [file dirname [file normalize [info script]]]
foreach top {NarrowCohortDotProduct24 IndependentRoundDotProduct24 FullPrecisionDotProduct24} {
  set ::env(TOP) $top
  source [file join $script_dir run_vivado.tcl]
  close_design
}
