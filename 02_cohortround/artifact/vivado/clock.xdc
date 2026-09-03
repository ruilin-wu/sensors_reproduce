# First timing target: 200 MHz.  Board-pin constraints are intentionally not
# included because this is an out-of-context DSP-kernel PPA experiment.
create_clock -name kernel_clk -period 5.000 [get_ports clock]
set_input_delay  0.500 -clock kernel_clk [remove_from_collection [all_inputs] [get_ports clock]]
set_output_delay 0.500 -clock kernel_clk [all_outputs]
