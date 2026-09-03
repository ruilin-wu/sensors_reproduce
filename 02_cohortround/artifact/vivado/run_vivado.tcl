# Batch out-of-context implementation for the CohortRound pre-generated RTL.
# Usage:
#   vivado -mode batch -source run_vivado.tcl
# Optional environment overrides:
#   FPGA_PART=xc7z020clg400-1 TOP=NarrowCohortDotProduct24 vivado ...

set script_dir [file dirname [file normalize [info script]]]
set rtl_root [file normalize [file join $script_dir .. generated_rtl]]

if {[info exists ::env(FPGA_PART)]} {
  set part $::env(FPGA_PART)
} else {
  # Default to ZCU104; change FPGA_PART for the paper's actual evaluation board.
  set part "xczu7ev-ffvc1156-2-e"
}
if {[info exists ::env(TOP)]} {
  set top $::env(TOP)
} else {
  set top "NarrowCohortDotProduct24"
}

if {$top eq "IndependentRoundDotProduct24"} {
  set rtl_dir [file join $rtl_root independent]
} elseif {$top eq "FullPrecisionDotProduct24"} {
  set rtl_dir [file join $rtl_root full_precision]
} else {
  set rtl_dir $rtl_root
}
set out_dir [file normalize [file join $script_dir reports $top]]
file mkdir $out_dir

read_verilog -sv [file join $rtl_dir DigitSerialMAC.sv]
read_verilog -sv [file join $rtl_dir SignedDigitSerialMultiplier.sv]
if {$top eq "NarrowCohortDotProduct24"} {
  read_verilog -sv [file join $rtl_dir CohortRound4Combinational.sv]
  read_verilog -sv [file join $rtl_dir NarrowCohortDotProduct24.sv]
} else {
  read_verilog -sv [file join $rtl_dir ${top}.sv]
}
read_xdc [file join $script_dir clock.xdc]

synth_design -top $top -part $part -mode out_of_context -flatten_hierarchy rebuilt
write_checkpoint -force [file join $out_dir post_synth.dcp]
report_utilization -hierarchical -file [file join $out_dir utilization_synth.rpt]
report_timing_summary -delay_type max -max_paths 20 -file [file join $out_dir timing_synth.rpt]

opt_design
place_design
phys_opt_design
route_design
write_checkpoint -force [file join $out_dir post_route.dcp]
report_utilization -hierarchical -file [file join $out_dir utilization_route.rpt]
report_timing_summary -delay_type min_max -max_paths 20 -file [file join $out_dir timing_route.rpt]
report_power -file [file join $out_dir power_route.rpt]
report_drc -file [file join $out_dir drc_route.rpt]

set timing_ok [expr {[get_property SLACK [get_timing_paths -delay_type max -max_paths 1]] >= 0.0}]
puts "COHORTROUND_RESULT top=$top part=$part timing_met=$timing_ok reports=$out_dir"
