module svsimTestbench;
  reg  [$bits(dut.clock)-1:0] clock = '0;
  reg  [$bits(dut.reset)-1:0] reset = '0;
  wire [$bits(dut.io_upMask_0)-1:0] io_upMask_0;
  wire [$bits(dut.io_upMask_1)-1:0] io_upMask_1;
  wire [$bits(dut.io_upMask_2)-1:0] io_upMask_2;
  wire [$bits(dut.io_upMask_3)-1:0] io_upMask_3;
  wire [$bits(dut.io_upCount)-1:0] io_upCount;
  wire [$bits(dut.io_outValid)-1:0] io_outValid;
  reg  [$bits(dut.io_prefix_0)-1:0] io_prefix_0 = '0;
  reg  [$bits(dut.io_prefix_1)-1:0] io_prefix_1 = '0;
  reg  [$bits(dut.io_prefix_2)-1:0] io_prefix_2 = '0;
  reg  [$bits(dut.io_prefix_3)-1:0] io_prefix_3 = '0;
  reg  [$bits(dut.io_inValid)-1:0] io_inValid = '0;

CohortRound4Selector dut (
    .clock(clock),
    .reset(reset),
    .io_upMask_0(io_upMask_0),
    .io_upMask_1(io_upMask_1),
    .io_upMask_2(io_upMask_2),
    .io_upMask_3(io_upMask_3),
    .io_upCount(io_upCount),
    .io_outValid(io_outValid),
    .io_prefix_0(io_prefix_0),
    .io_prefix_1(io_prefix_1),
    .io_prefix_2(io_prefix_2),
    .io_prefix_3(io_prefix_3),
    .io_inValid(io_inValid)
);

  import "DPI-C" context function void initTestBenchScope();
  initial
    initTestBenchScope();
  // Port 0: clock
  export "DPI-C" function getBitWidthImpl_clock;
  function void getBitWidthImpl_clock;
    output int value;
    value = $bits(dut.clock);
  endfunction
  export "DPI-C" function setBitsImpl_clock;
  function void setBitsImpl_clock;
    input bit [$bits(dut.clock)-1:0] value_clock;
    clock = value_clock;
  endfunction
  export "DPI-C" function getBitsImpl_clock;
  function void getBitsImpl_clock;
    output bit [$bits(dut.clock)-1:0] value_clock;
    value_clock = clock;
  endfunction

  // Port 1: reset
  export "DPI-C" function getBitWidthImpl_reset;
  function void getBitWidthImpl_reset;
    output int value;
    value = $bits(dut.reset);
  endfunction
  export "DPI-C" function setBitsImpl_reset;
  function void setBitsImpl_reset;
    input bit [$bits(dut.reset)-1:0] value_reset;
    reset = value_reset;
  endfunction
  export "DPI-C" function getBitsImpl_reset;
  function void getBitsImpl_reset;
    output bit [$bits(dut.reset)-1:0] value_reset;
    value_reset = reset;
  endfunction

  // Port 2: io_upMask_0
  export "DPI-C" function getBitWidthImpl_io_upMask_0;
  function void getBitWidthImpl_io_upMask_0;
    output int value;
    value = $bits(dut.io_upMask_0);
  endfunction
  export "DPI-C" function getBitsImpl_io_upMask_0;
  function void getBitsImpl_io_upMask_0;
    output bit [$bits(dut.io_upMask_0)-1:0] value_io_upMask_0;
    value_io_upMask_0 = io_upMask_0;
  endfunction

  // Port 3: io_upMask_1
  export "DPI-C" function getBitWidthImpl_io_upMask_1;
  function void getBitWidthImpl_io_upMask_1;
    output int value;
    value = $bits(dut.io_upMask_1);
  endfunction
  export "DPI-C" function getBitsImpl_io_upMask_1;
  function void getBitsImpl_io_upMask_1;
    output bit [$bits(dut.io_upMask_1)-1:0] value_io_upMask_1;
    value_io_upMask_1 = io_upMask_1;
  endfunction

  // Port 4: io_upMask_2
  export "DPI-C" function getBitWidthImpl_io_upMask_2;
  function void getBitWidthImpl_io_upMask_2;
    output int value;
    value = $bits(dut.io_upMask_2);
  endfunction
  export "DPI-C" function getBitsImpl_io_upMask_2;
  function void getBitsImpl_io_upMask_2;
    output bit [$bits(dut.io_upMask_2)-1:0] value_io_upMask_2;
    value_io_upMask_2 = io_upMask_2;
  endfunction

  // Port 5: io_upMask_3
  export "DPI-C" function getBitWidthImpl_io_upMask_3;
  function void getBitWidthImpl_io_upMask_3;
    output int value;
    value = $bits(dut.io_upMask_3);
  endfunction
  export "DPI-C" function getBitsImpl_io_upMask_3;
  function void getBitsImpl_io_upMask_3;
    output bit [$bits(dut.io_upMask_3)-1:0] value_io_upMask_3;
    value_io_upMask_3 = io_upMask_3;
  endfunction

  // Port 6: io_upCount
  export "DPI-C" function getBitWidthImpl_io_upCount;
  function void getBitWidthImpl_io_upCount;
    output int value;
    value = $bits(dut.io_upCount);
  endfunction
  export "DPI-C" function getBitsImpl_io_upCount;
  function void getBitsImpl_io_upCount;
    output bit [$bits(dut.io_upCount)-1:0] value_io_upCount;
    value_io_upCount = io_upCount;
  endfunction

  // Port 7: io_outValid
  export "DPI-C" function getBitWidthImpl_io_outValid;
  function void getBitWidthImpl_io_outValid;
    output int value;
    value = $bits(dut.io_outValid);
  endfunction
  export "DPI-C" function getBitsImpl_io_outValid;
  function void getBitsImpl_io_outValid;
    output bit [$bits(dut.io_outValid)-1:0] value_io_outValid;
    value_io_outValid = io_outValid;
  endfunction

  // Port 8: io_prefix_0
  export "DPI-C" function getBitWidthImpl_io_prefix_0;
  function void getBitWidthImpl_io_prefix_0;
    output int value;
    value = $bits(dut.io_prefix_0);
  endfunction
  export "DPI-C" function setBitsImpl_io_prefix_0;
  function void setBitsImpl_io_prefix_0;
    input bit [$bits(dut.io_prefix_0)-1:0] value_io_prefix_0;
    io_prefix_0 = value_io_prefix_0;
  endfunction
  export "DPI-C" function getBitsImpl_io_prefix_0;
  function void getBitsImpl_io_prefix_0;
    output bit [$bits(dut.io_prefix_0)-1:0] value_io_prefix_0;
    value_io_prefix_0 = io_prefix_0;
  endfunction

  // Port 9: io_prefix_1
  export "DPI-C" function getBitWidthImpl_io_prefix_1;
  function void getBitWidthImpl_io_prefix_1;
    output int value;
    value = $bits(dut.io_prefix_1);
  endfunction
  export "DPI-C" function setBitsImpl_io_prefix_1;
  function void setBitsImpl_io_prefix_1;
    input bit [$bits(dut.io_prefix_1)-1:0] value_io_prefix_1;
    io_prefix_1 = value_io_prefix_1;
  endfunction
  export "DPI-C" function getBitsImpl_io_prefix_1;
  function void getBitsImpl_io_prefix_1;
    output bit [$bits(dut.io_prefix_1)-1:0] value_io_prefix_1;
    value_io_prefix_1 = io_prefix_1;
  endfunction

  // Port a: io_prefix_2
  export "DPI-C" function getBitWidthImpl_io_prefix_2;
  function void getBitWidthImpl_io_prefix_2;
    output int value;
    value = $bits(dut.io_prefix_2);
  endfunction
  export "DPI-C" function setBitsImpl_io_prefix_2;
  function void setBitsImpl_io_prefix_2;
    input bit [$bits(dut.io_prefix_2)-1:0] value_io_prefix_2;
    io_prefix_2 = value_io_prefix_2;
  endfunction
  export "DPI-C" function getBitsImpl_io_prefix_2;
  function void getBitsImpl_io_prefix_2;
    output bit [$bits(dut.io_prefix_2)-1:0] value_io_prefix_2;
    value_io_prefix_2 = io_prefix_2;
  endfunction

  // Port b: io_prefix_3
  export "DPI-C" function getBitWidthImpl_io_prefix_3;
  function void getBitWidthImpl_io_prefix_3;
    output int value;
    value = $bits(dut.io_prefix_3);
  endfunction
  export "DPI-C" function setBitsImpl_io_prefix_3;
  function void setBitsImpl_io_prefix_3;
    input bit [$bits(dut.io_prefix_3)-1:0] value_io_prefix_3;
    io_prefix_3 = value_io_prefix_3;
  endfunction
  export "DPI-C" function getBitsImpl_io_prefix_3;
  function void getBitsImpl_io_prefix_3;
    output bit [$bits(dut.io_prefix_3)-1:0] value_io_prefix_3;
    value_io_prefix_3 = io_prefix_3;
  endfunction

  // Port c: io_inValid
  export "DPI-C" function getBitWidthImpl_io_inValid;
  function void getBitWidthImpl_io_inValid;
    output int value;
    value = $bits(dut.io_inValid);
  endfunction
  export "DPI-C" function setBitsImpl_io_inValid;
  function void setBitsImpl_io_inValid;
    input bit [$bits(dut.io_inValid)-1:0] value_io_inValid;
    io_inValid = value_io_inValid;
  endfunction
  export "DPI-C" function getBitsImpl_io_inValid;
  function void getBitsImpl_io_inValid;
    output bit [$bits(dut.io_inValid)-1:0] value_io_inValid;
    value_io_inValid = io_inValid;
  endfunction

  // Simulation
  import "DPI-C" context task simulation_body();
  enum {INIT, RUN, DONE} simulationState = INIT;
  initial
    simulationState = RUN;
  always @(simulationState) begin
    if (simulationState == RUN) begin
      simulation_body();
      simulationState = DONE;
    end
  end
  import "DPI-C" context task simulation_final();
  final
    simulation_final();
  `ifdef SVSIM_BACKEND_SUPPORTS_DELAY_IN_PUBLIC_FUNCTIONS
  export "DPI-C" task run_simulation;
  task run_simulation;
    input int timesteps;
    output int finish;
    #(timesteps*0.1);
    finish = 0;
  endtask
  `else
  import "DPI-C" function void run_simulation(input int timesteps, output int done);
  `endif

  // Tracing
  int traceSupported = 0;
  export "DPI-C" function simulation_initializeTrace;
  function void simulation_initializeTrace;
    input string traceFilePath;
    `ifdef SVSIM_ENABLE_FST_TRACING_SUPPORT
      $dumpfile({traceFilePath,".fst"});
      $dumpvars(0, dut);
      traceSupported = 1;
    `elsif SVSIM_ENABLE_VCD_TRACING_SUPPORT
      $dumpfile({traceFilePath,".vcd"});
      $dumpvars(0, dut);
      traceSupported = 1;
    `endif
    `ifdef SVSIM_ENABLE_VPD_TRACING_SUPPORT
      $vcdplusfile({traceFilePath,".vpd"});
      $dumpvars(0, dut);
      $vcdpluson(0, dut);
      traceSupported = 1;
    `endif
    `ifdef SVSIM_ENABLE_FSDB_TRACING_SUPPORT
      $fsdbDumpfile({traceFilePath,".fsdb"});
      $fsdbDumpvars(0, dut, "+all");
      traceSupported = 1;
    `endif
  endfunction
  export "DPI-C" function simulation_enableTrace;
  function void simulation_enableTrace;
    output int success;
    success = traceSupported;
    `ifdef SVSIM_ENABLE_VCD_TRACING_SUPPORT
    $dumpon;
    `elsif SVSIM_ENABLE_FST_TRACING_SUPPORT
    $dumpon;
    `elsif SVSIM_ENABLE_VPD_TRACING_SUPPORT
    $dumpon;
    `endif
    `ifdef SVSIM_ENABLE_FSDB_TRACING_SUPPORT
    $fsdbDumpon;
    `endif
  endfunction
  export "DPI-C" function simulation_disableTrace;
  function void simulation_disableTrace;
    output int success;
    success = traceSupported;
    `ifdef SVSIM_ENABLE_VCD_TRACING_SUPPORT
    $dumpoff;
    `elsif SVSIM_ENABLE_FST_TRACING_SUPPORT
    $dumpoff;
    `elsif SVSIM_ENABLE_VPD_TRACING_SUPPORT
    $dumpoff;
    `endif
    `ifdef SVSIM_ENABLE_FSDB_TRACING_SUPPORT
    $fsdbDumpoff;
    `endif
  endfunction

endmodule
