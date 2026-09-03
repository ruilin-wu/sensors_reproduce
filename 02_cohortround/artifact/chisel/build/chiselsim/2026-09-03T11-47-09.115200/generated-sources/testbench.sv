module svsimTestbench;
  reg  [$bits(dut.clock)-1:0] clock = '0;
  reg  [$bits(dut.reset)-1:0] reset = '0;
  wire [$bits(dut.io_result)-1:0] io_result;
  wire [$bits(dut.io_done)-1:0] io_done;
  wire [$bits(dut.io_ready)-1:0] io_ready;
  reg  [$bits(dut.io_start)-1:0] io_start = '0;
  reg  [$bits(dut.io_b_0)-1:0] io_b_0 = '0;
  reg  [$bits(dut.io_b_1)-1:0] io_b_1 = '0;
  reg  [$bits(dut.io_b_2)-1:0] io_b_2 = '0;
  reg  [$bits(dut.io_b_3)-1:0] io_b_3 = '0;
  reg  [$bits(dut.io_b_4)-1:0] io_b_4 = '0;
  reg  [$bits(dut.io_b_5)-1:0] io_b_5 = '0;
  reg  [$bits(dut.io_b_6)-1:0] io_b_6 = '0;
  reg  [$bits(dut.io_b_7)-1:0] io_b_7 = '0;
  reg  [$bits(dut.io_b_8)-1:0] io_b_8 = '0;
  reg  [$bits(dut.io_b_9)-1:0] io_b_9 = '0;
  reg  [$bits(dut.io_b_10)-1:0] io_b_10 = '0;
  reg  [$bits(dut.io_b_11)-1:0] io_b_11 = '0;
  reg  [$bits(dut.io_b_12)-1:0] io_b_12 = '0;
  reg  [$bits(dut.io_b_13)-1:0] io_b_13 = '0;
  reg  [$bits(dut.io_b_14)-1:0] io_b_14 = '0;
  reg  [$bits(dut.io_b_15)-1:0] io_b_15 = '0;
  reg  [$bits(dut.io_b_16)-1:0] io_b_16 = '0;
  reg  [$bits(dut.io_b_17)-1:0] io_b_17 = '0;
  reg  [$bits(dut.io_b_18)-1:0] io_b_18 = '0;
  reg  [$bits(dut.io_b_19)-1:0] io_b_19 = '0;
  reg  [$bits(dut.io_b_20)-1:0] io_b_20 = '0;
  reg  [$bits(dut.io_b_21)-1:0] io_b_21 = '0;
  reg  [$bits(dut.io_b_22)-1:0] io_b_22 = '0;
  reg  [$bits(dut.io_b_23)-1:0] io_b_23 = '0;
  reg  [$bits(dut.io_a_0)-1:0] io_a_0 = '0;
  reg  [$bits(dut.io_a_1)-1:0] io_a_1 = '0;
  reg  [$bits(dut.io_a_2)-1:0] io_a_2 = '0;
  reg  [$bits(dut.io_a_3)-1:0] io_a_3 = '0;
  reg  [$bits(dut.io_a_4)-1:0] io_a_4 = '0;
  reg  [$bits(dut.io_a_5)-1:0] io_a_5 = '0;
  reg  [$bits(dut.io_a_6)-1:0] io_a_6 = '0;
  reg  [$bits(dut.io_a_7)-1:0] io_a_7 = '0;
  reg  [$bits(dut.io_a_8)-1:0] io_a_8 = '0;
  reg  [$bits(dut.io_a_9)-1:0] io_a_9 = '0;
  reg  [$bits(dut.io_a_10)-1:0] io_a_10 = '0;
  reg  [$bits(dut.io_a_11)-1:0] io_a_11 = '0;
  reg  [$bits(dut.io_a_12)-1:0] io_a_12 = '0;
  reg  [$bits(dut.io_a_13)-1:0] io_a_13 = '0;
  reg  [$bits(dut.io_a_14)-1:0] io_a_14 = '0;
  reg  [$bits(dut.io_a_15)-1:0] io_a_15 = '0;
  reg  [$bits(dut.io_a_16)-1:0] io_a_16 = '0;
  reg  [$bits(dut.io_a_17)-1:0] io_a_17 = '0;
  reg  [$bits(dut.io_a_18)-1:0] io_a_18 = '0;
  reg  [$bits(dut.io_a_19)-1:0] io_a_19 = '0;
  reg  [$bits(dut.io_a_20)-1:0] io_a_20 = '0;
  reg  [$bits(dut.io_a_21)-1:0] io_a_21 = '0;
  reg  [$bits(dut.io_a_22)-1:0] io_a_22 = '0;
  reg  [$bits(dut.io_a_23)-1:0] io_a_23 = '0;

NarrowCohortDotProduct24 dut (
    .clock(clock),
    .reset(reset),
    .io_result(io_result),
    .io_done(io_done),
    .io_ready(io_ready),
    .io_start(io_start),
    .io_b_0(io_b_0),
    .io_b_1(io_b_1),
    .io_b_2(io_b_2),
    .io_b_3(io_b_3),
    .io_b_4(io_b_4),
    .io_b_5(io_b_5),
    .io_b_6(io_b_6),
    .io_b_7(io_b_7),
    .io_b_8(io_b_8),
    .io_b_9(io_b_9),
    .io_b_10(io_b_10),
    .io_b_11(io_b_11),
    .io_b_12(io_b_12),
    .io_b_13(io_b_13),
    .io_b_14(io_b_14),
    .io_b_15(io_b_15),
    .io_b_16(io_b_16),
    .io_b_17(io_b_17),
    .io_b_18(io_b_18),
    .io_b_19(io_b_19),
    .io_b_20(io_b_20),
    .io_b_21(io_b_21),
    .io_b_22(io_b_22),
    .io_b_23(io_b_23),
    .io_a_0(io_a_0),
    .io_a_1(io_a_1),
    .io_a_2(io_a_2),
    .io_a_3(io_a_3),
    .io_a_4(io_a_4),
    .io_a_5(io_a_5),
    .io_a_6(io_a_6),
    .io_a_7(io_a_7),
    .io_a_8(io_a_8),
    .io_a_9(io_a_9),
    .io_a_10(io_a_10),
    .io_a_11(io_a_11),
    .io_a_12(io_a_12),
    .io_a_13(io_a_13),
    .io_a_14(io_a_14),
    .io_a_15(io_a_15),
    .io_a_16(io_a_16),
    .io_a_17(io_a_17),
    .io_a_18(io_a_18),
    .io_a_19(io_a_19),
    .io_a_20(io_a_20),
    .io_a_21(io_a_21),
    .io_a_22(io_a_22),
    .io_a_23(io_a_23)
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

  // Port 2: io_result
  export "DPI-C" function getBitWidthImpl_io_result;
  function void getBitWidthImpl_io_result;
    output int value;
    value = $bits(dut.io_result);
  endfunction
  export "DPI-C" function getBitsImpl_io_result;
  function void getBitsImpl_io_result;
    output bit [$bits(dut.io_result)-1:0] value_io_result;
    value_io_result = io_result;
  endfunction

  // Port 3: io_done
  export "DPI-C" function getBitWidthImpl_io_done;
  function void getBitWidthImpl_io_done;
    output int value;
    value = $bits(dut.io_done);
  endfunction
  export "DPI-C" function getBitsImpl_io_done;
  function void getBitsImpl_io_done;
    output bit [$bits(dut.io_done)-1:0] value_io_done;
    value_io_done = io_done;
  endfunction

  // Port 4: io_ready
  export "DPI-C" function getBitWidthImpl_io_ready;
  function void getBitWidthImpl_io_ready;
    output int value;
    value = $bits(dut.io_ready);
  endfunction
  export "DPI-C" function getBitsImpl_io_ready;
  function void getBitsImpl_io_ready;
    output bit [$bits(dut.io_ready)-1:0] value_io_ready;
    value_io_ready = io_ready;
  endfunction

  // Port 5: io_start
  export "DPI-C" function getBitWidthImpl_io_start;
  function void getBitWidthImpl_io_start;
    output int value;
    value = $bits(dut.io_start);
  endfunction
  export "DPI-C" function setBitsImpl_io_start;
  function void setBitsImpl_io_start;
    input bit [$bits(dut.io_start)-1:0] value_io_start;
    io_start = value_io_start;
  endfunction
  export "DPI-C" function getBitsImpl_io_start;
  function void getBitsImpl_io_start;
    output bit [$bits(dut.io_start)-1:0] value_io_start;
    value_io_start = io_start;
  endfunction

  // Port 6: io_b_0
  export "DPI-C" function getBitWidthImpl_io_b_0;
  function void getBitWidthImpl_io_b_0;
    output int value;
    value = $bits(dut.io_b_0);
  endfunction
  export "DPI-C" function setBitsImpl_io_b_0;
  function void setBitsImpl_io_b_0;
    input bit [$bits(dut.io_b_0)-1:0] value_io_b_0;
    io_b_0 = value_io_b_0;
  endfunction
  export "DPI-C" function getBitsImpl_io_b_0;
  function void getBitsImpl_io_b_0;
    output bit [$bits(dut.io_b_0)-1:0] value_io_b_0;
    value_io_b_0 = io_b_0;
  endfunction

  // Port 7: io_b_1
  export "DPI-C" function getBitWidthImpl_io_b_1;
  function void getBitWidthImpl_io_b_1;
    output int value;
    value = $bits(dut.io_b_1);
  endfunction
  export "DPI-C" function setBitsImpl_io_b_1;
  function void setBitsImpl_io_b_1;
    input bit [$bits(dut.io_b_1)-1:0] value_io_b_1;
    io_b_1 = value_io_b_1;
  endfunction
  export "DPI-C" function getBitsImpl_io_b_1;
  function void getBitsImpl_io_b_1;
    output bit [$bits(dut.io_b_1)-1:0] value_io_b_1;
    value_io_b_1 = io_b_1;
  endfunction

  // Port 8: io_b_2
  export "DPI-C" function getBitWidthImpl_io_b_2;
  function void getBitWidthImpl_io_b_2;
    output int value;
    value = $bits(dut.io_b_2);
  endfunction
  export "DPI-C" function setBitsImpl_io_b_2;
  function void setBitsImpl_io_b_2;
    input bit [$bits(dut.io_b_2)-1:0] value_io_b_2;
    io_b_2 = value_io_b_2;
  endfunction
  export "DPI-C" function getBitsImpl_io_b_2;
  function void getBitsImpl_io_b_2;
    output bit [$bits(dut.io_b_2)-1:0] value_io_b_2;
    value_io_b_2 = io_b_2;
  endfunction

  // Port 9: io_b_3
  export "DPI-C" function getBitWidthImpl_io_b_3;
  function void getBitWidthImpl_io_b_3;
    output int value;
    value = $bits(dut.io_b_3);
  endfunction
  export "DPI-C" function setBitsImpl_io_b_3;
  function void setBitsImpl_io_b_3;
    input bit [$bits(dut.io_b_3)-1:0] value_io_b_3;
    io_b_3 = value_io_b_3;
  endfunction
  export "DPI-C" function getBitsImpl_io_b_3;
  function void getBitsImpl_io_b_3;
    output bit [$bits(dut.io_b_3)-1:0] value_io_b_3;
    value_io_b_3 = io_b_3;
  endfunction

  // Port a: io_b_4
  export "DPI-C" function getBitWidthImpl_io_b_4;
  function void getBitWidthImpl_io_b_4;
    output int value;
    value = $bits(dut.io_b_4);
  endfunction
  export "DPI-C" function setBitsImpl_io_b_4;
  function void setBitsImpl_io_b_4;
    input bit [$bits(dut.io_b_4)-1:0] value_io_b_4;
    io_b_4 = value_io_b_4;
  endfunction
  export "DPI-C" function getBitsImpl_io_b_4;
  function void getBitsImpl_io_b_4;
    output bit [$bits(dut.io_b_4)-1:0] value_io_b_4;
    value_io_b_4 = io_b_4;
  endfunction

  // Port b: io_b_5
  export "DPI-C" function getBitWidthImpl_io_b_5;
  function void getBitWidthImpl_io_b_5;
    output int value;
    value = $bits(dut.io_b_5);
  endfunction
  export "DPI-C" function setBitsImpl_io_b_5;
  function void setBitsImpl_io_b_5;
    input bit [$bits(dut.io_b_5)-1:0] value_io_b_5;
    io_b_5 = value_io_b_5;
  endfunction
  export "DPI-C" function getBitsImpl_io_b_5;
  function void getBitsImpl_io_b_5;
    output bit [$bits(dut.io_b_5)-1:0] value_io_b_5;
    value_io_b_5 = io_b_5;
  endfunction

  // Port c: io_b_6
  export "DPI-C" function getBitWidthImpl_io_b_6;
  function void getBitWidthImpl_io_b_6;
    output int value;
    value = $bits(dut.io_b_6);
  endfunction
  export "DPI-C" function setBitsImpl_io_b_6;
  function void setBitsImpl_io_b_6;
    input bit [$bits(dut.io_b_6)-1:0] value_io_b_6;
    io_b_6 = value_io_b_6;
  endfunction
  export "DPI-C" function getBitsImpl_io_b_6;
  function void getBitsImpl_io_b_6;
    output bit [$bits(dut.io_b_6)-1:0] value_io_b_6;
    value_io_b_6 = io_b_6;
  endfunction

  // Port d: io_b_7
  export "DPI-C" function getBitWidthImpl_io_b_7;
  function void getBitWidthImpl_io_b_7;
    output int value;
    value = $bits(dut.io_b_7);
  endfunction
  export "DPI-C" function setBitsImpl_io_b_7;
  function void setBitsImpl_io_b_7;
    input bit [$bits(dut.io_b_7)-1:0] value_io_b_7;
    io_b_7 = value_io_b_7;
  endfunction
  export "DPI-C" function getBitsImpl_io_b_7;
  function void getBitsImpl_io_b_7;
    output bit [$bits(dut.io_b_7)-1:0] value_io_b_7;
    value_io_b_7 = io_b_7;
  endfunction

  // Port e: io_b_8
  export "DPI-C" function getBitWidthImpl_io_b_8;
  function void getBitWidthImpl_io_b_8;
    output int value;
    value = $bits(dut.io_b_8);
  endfunction
  export "DPI-C" function setBitsImpl_io_b_8;
  function void setBitsImpl_io_b_8;
    input bit [$bits(dut.io_b_8)-1:0] value_io_b_8;
    io_b_8 = value_io_b_8;
  endfunction
  export "DPI-C" function getBitsImpl_io_b_8;
  function void getBitsImpl_io_b_8;
    output bit [$bits(dut.io_b_8)-1:0] value_io_b_8;
    value_io_b_8 = io_b_8;
  endfunction

  // Port f: io_b_9
  export "DPI-C" function getBitWidthImpl_io_b_9;
  function void getBitWidthImpl_io_b_9;
    output int value;
    value = $bits(dut.io_b_9);
  endfunction
  export "DPI-C" function setBitsImpl_io_b_9;
  function void setBitsImpl_io_b_9;
    input bit [$bits(dut.io_b_9)-1:0] value_io_b_9;
    io_b_9 = value_io_b_9;
  endfunction
  export "DPI-C" function getBitsImpl_io_b_9;
  function void getBitsImpl_io_b_9;
    output bit [$bits(dut.io_b_9)-1:0] value_io_b_9;
    value_io_b_9 = io_b_9;
  endfunction

  // Port 10: io_b_10
  export "DPI-C" function getBitWidthImpl_io_b_10;
  function void getBitWidthImpl_io_b_10;
    output int value;
    value = $bits(dut.io_b_10);
  endfunction
  export "DPI-C" function setBitsImpl_io_b_10;
  function void setBitsImpl_io_b_10;
    input bit [$bits(dut.io_b_10)-1:0] value_io_b_10;
    io_b_10 = value_io_b_10;
  endfunction
  export "DPI-C" function getBitsImpl_io_b_10;
  function void getBitsImpl_io_b_10;
    output bit [$bits(dut.io_b_10)-1:0] value_io_b_10;
    value_io_b_10 = io_b_10;
  endfunction

  // Port 11: io_b_11
  export "DPI-C" function getBitWidthImpl_io_b_11;
  function void getBitWidthImpl_io_b_11;
    output int value;
    value = $bits(dut.io_b_11);
  endfunction
  export "DPI-C" function setBitsImpl_io_b_11;
  function void setBitsImpl_io_b_11;
    input bit [$bits(dut.io_b_11)-1:0] value_io_b_11;
    io_b_11 = value_io_b_11;
  endfunction
  export "DPI-C" function getBitsImpl_io_b_11;
  function void getBitsImpl_io_b_11;
    output bit [$bits(dut.io_b_11)-1:0] value_io_b_11;
    value_io_b_11 = io_b_11;
  endfunction

  // Port 12: io_b_12
  export "DPI-C" function getBitWidthImpl_io_b_12;
  function void getBitWidthImpl_io_b_12;
    output int value;
    value = $bits(dut.io_b_12);
  endfunction
  export "DPI-C" function setBitsImpl_io_b_12;
  function void setBitsImpl_io_b_12;
    input bit [$bits(dut.io_b_12)-1:0] value_io_b_12;
    io_b_12 = value_io_b_12;
  endfunction
  export "DPI-C" function getBitsImpl_io_b_12;
  function void getBitsImpl_io_b_12;
    output bit [$bits(dut.io_b_12)-1:0] value_io_b_12;
    value_io_b_12 = io_b_12;
  endfunction

  // Port 13: io_b_13
  export "DPI-C" function getBitWidthImpl_io_b_13;
  function void getBitWidthImpl_io_b_13;
    output int value;
    value = $bits(dut.io_b_13);
  endfunction
  export "DPI-C" function setBitsImpl_io_b_13;
  function void setBitsImpl_io_b_13;
    input bit [$bits(dut.io_b_13)-1:0] value_io_b_13;
    io_b_13 = value_io_b_13;
  endfunction
  export "DPI-C" function getBitsImpl_io_b_13;
  function void getBitsImpl_io_b_13;
    output bit [$bits(dut.io_b_13)-1:0] value_io_b_13;
    value_io_b_13 = io_b_13;
  endfunction

  // Port 14: io_b_14
  export "DPI-C" function getBitWidthImpl_io_b_14;
  function void getBitWidthImpl_io_b_14;
    output int value;
    value = $bits(dut.io_b_14);
  endfunction
  export "DPI-C" function setBitsImpl_io_b_14;
  function void setBitsImpl_io_b_14;
    input bit [$bits(dut.io_b_14)-1:0] value_io_b_14;
    io_b_14 = value_io_b_14;
  endfunction
  export "DPI-C" function getBitsImpl_io_b_14;
  function void getBitsImpl_io_b_14;
    output bit [$bits(dut.io_b_14)-1:0] value_io_b_14;
    value_io_b_14 = io_b_14;
  endfunction

  // Port 15: io_b_15
  export "DPI-C" function getBitWidthImpl_io_b_15;
  function void getBitWidthImpl_io_b_15;
    output int value;
    value = $bits(dut.io_b_15);
  endfunction
  export "DPI-C" function setBitsImpl_io_b_15;
  function void setBitsImpl_io_b_15;
    input bit [$bits(dut.io_b_15)-1:0] value_io_b_15;
    io_b_15 = value_io_b_15;
  endfunction
  export "DPI-C" function getBitsImpl_io_b_15;
  function void getBitsImpl_io_b_15;
    output bit [$bits(dut.io_b_15)-1:0] value_io_b_15;
    value_io_b_15 = io_b_15;
  endfunction

  // Port 16: io_b_16
  export "DPI-C" function getBitWidthImpl_io_b_16;
  function void getBitWidthImpl_io_b_16;
    output int value;
    value = $bits(dut.io_b_16);
  endfunction
  export "DPI-C" function setBitsImpl_io_b_16;
  function void setBitsImpl_io_b_16;
    input bit [$bits(dut.io_b_16)-1:0] value_io_b_16;
    io_b_16 = value_io_b_16;
  endfunction
  export "DPI-C" function getBitsImpl_io_b_16;
  function void getBitsImpl_io_b_16;
    output bit [$bits(dut.io_b_16)-1:0] value_io_b_16;
    value_io_b_16 = io_b_16;
  endfunction

  // Port 17: io_b_17
  export "DPI-C" function getBitWidthImpl_io_b_17;
  function void getBitWidthImpl_io_b_17;
    output int value;
    value = $bits(dut.io_b_17);
  endfunction
  export "DPI-C" function setBitsImpl_io_b_17;
  function void setBitsImpl_io_b_17;
    input bit [$bits(dut.io_b_17)-1:0] value_io_b_17;
    io_b_17 = value_io_b_17;
  endfunction
  export "DPI-C" function getBitsImpl_io_b_17;
  function void getBitsImpl_io_b_17;
    output bit [$bits(dut.io_b_17)-1:0] value_io_b_17;
    value_io_b_17 = io_b_17;
  endfunction

  // Port 18: io_b_18
  export "DPI-C" function getBitWidthImpl_io_b_18;
  function void getBitWidthImpl_io_b_18;
    output int value;
    value = $bits(dut.io_b_18);
  endfunction
  export "DPI-C" function setBitsImpl_io_b_18;
  function void setBitsImpl_io_b_18;
    input bit [$bits(dut.io_b_18)-1:0] value_io_b_18;
    io_b_18 = value_io_b_18;
  endfunction
  export "DPI-C" function getBitsImpl_io_b_18;
  function void getBitsImpl_io_b_18;
    output bit [$bits(dut.io_b_18)-1:0] value_io_b_18;
    value_io_b_18 = io_b_18;
  endfunction

  // Port 19: io_b_19
  export "DPI-C" function getBitWidthImpl_io_b_19;
  function void getBitWidthImpl_io_b_19;
    output int value;
    value = $bits(dut.io_b_19);
  endfunction
  export "DPI-C" function setBitsImpl_io_b_19;
  function void setBitsImpl_io_b_19;
    input bit [$bits(dut.io_b_19)-1:0] value_io_b_19;
    io_b_19 = value_io_b_19;
  endfunction
  export "DPI-C" function getBitsImpl_io_b_19;
  function void getBitsImpl_io_b_19;
    output bit [$bits(dut.io_b_19)-1:0] value_io_b_19;
    value_io_b_19 = io_b_19;
  endfunction

  // Port 1a: io_b_20
  export "DPI-C" function getBitWidthImpl_io_b_20;
  function void getBitWidthImpl_io_b_20;
    output int value;
    value = $bits(dut.io_b_20);
  endfunction
  export "DPI-C" function setBitsImpl_io_b_20;
  function void setBitsImpl_io_b_20;
    input bit [$bits(dut.io_b_20)-1:0] value_io_b_20;
    io_b_20 = value_io_b_20;
  endfunction
  export "DPI-C" function getBitsImpl_io_b_20;
  function void getBitsImpl_io_b_20;
    output bit [$bits(dut.io_b_20)-1:0] value_io_b_20;
    value_io_b_20 = io_b_20;
  endfunction

  // Port 1b: io_b_21
  export "DPI-C" function getBitWidthImpl_io_b_21;
  function void getBitWidthImpl_io_b_21;
    output int value;
    value = $bits(dut.io_b_21);
  endfunction
  export "DPI-C" function setBitsImpl_io_b_21;
  function void setBitsImpl_io_b_21;
    input bit [$bits(dut.io_b_21)-1:0] value_io_b_21;
    io_b_21 = value_io_b_21;
  endfunction
  export "DPI-C" function getBitsImpl_io_b_21;
  function void getBitsImpl_io_b_21;
    output bit [$bits(dut.io_b_21)-1:0] value_io_b_21;
    value_io_b_21 = io_b_21;
  endfunction

  // Port 1c: io_b_22
  export "DPI-C" function getBitWidthImpl_io_b_22;
  function void getBitWidthImpl_io_b_22;
    output int value;
    value = $bits(dut.io_b_22);
  endfunction
  export "DPI-C" function setBitsImpl_io_b_22;
  function void setBitsImpl_io_b_22;
    input bit [$bits(dut.io_b_22)-1:0] value_io_b_22;
    io_b_22 = value_io_b_22;
  endfunction
  export "DPI-C" function getBitsImpl_io_b_22;
  function void getBitsImpl_io_b_22;
    output bit [$bits(dut.io_b_22)-1:0] value_io_b_22;
    value_io_b_22 = io_b_22;
  endfunction

  // Port 1d: io_b_23
  export "DPI-C" function getBitWidthImpl_io_b_23;
  function void getBitWidthImpl_io_b_23;
    output int value;
    value = $bits(dut.io_b_23);
  endfunction
  export "DPI-C" function setBitsImpl_io_b_23;
  function void setBitsImpl_io_b_23;
    input bit [$bits(dut.io_b_23)-1:0] value_io_b_23;
    io_b_23 = value_io_b_23;
  endfunction
  export "DPI-C" function getBitsImpl_io_b_23;
  function void getBitsImpl_io_b_23;
    output bit [$bits(dut.io_b_23)-1:0] value_io_b_23;
    value_io_b_23 = io_b_23;
  endfunction

  // Port 1e: io_a_0
  export "DPI-C" function getBitWidthImpl_io_a_0;
  function void getBitWidthImpl_io_a_0;
    output int value;
    value = $bits(dut.io_a_0);
  endfunction
  export "DPI-C" function setBitsImpl_io_a_0;
  function void setBitsImpl_io_a_0;
    input bit [$bits(dut.io_a_0)-1:0] value_io_a_0;
    io_a_0 = value_io_a_0;
  endfunction
  export "DPI-C" function getBitsImpl_io_a_0;
  function void getBitsImpl_io_a_0;
    output bit [$bits(dut.io_a_0)-1:0] value_io_a_0;
    value_io_a_0 = io_a_0;
  endfunction

  // Port 1f: io_a_1
  export "DPI-C" function getBitWidthImpl_io_a_1;
  function void getBitWidthImpl_io_a_1;
    output int value;
    value = $bits(dut.io_a_1);
  endfunction
  export "DPI-C" function setBitsImpl_io_a_1;
  function void setBitsImpl_io_a_1;
    input bit [$bits(dut.io_a_1)-1:0] value_io_a_1;
    io_a_1 = value_io_a_1;
  endfunction
  export "DPI-C" function getBitsImpl_io_a_1;
  function void getBitsImpl_io_a_1;
    output bit [$bits(dut.io_a_1)-1:0] value_io_a_1;
    value_io_a_1 = io_a_1;
  endfunction

  // Port 20: io_a_2
  export "DPI-C" function getBitWidthImpl_io_a_2;
  function void getBitWidthImpl_io_a_2;
    output int value;
    value = $bits(dut.io_a_2);
  endfunction
  export "DPI-C" function setBitsImpl_io_a_2;
  function void setBitsImpl_io_a_2;
    input bit [$bits(dut.io_a_2)-1:0] value_io_a_2;
    io_a_2 = value_io_a_2;
  endfunction
  export "DPI-C" function getBitsImpl_io_a_2;
  function void getBitsImpl_io_a_2;
    output bit [$bits(dut.io_a_2)-1:0] value_io_a_2;
    value_io_a_2 = io_a_2;
  endfunction

  // Port 21: io_a_3
  export "DPI-C" function getBitWidthImpl_io_a_3;
  function void getBitWidthImpl_io_a_3;
    output int value;
    value = $bits(dut.io_a_3);
  endfunction
  export "DPI-C" function setBitsImpl_io_a_3;
  function void setBitsImpl_io_a_3;
    input bit [$bits(dut.io_a_3)-1:0] value_io_a_3;
    io_a_3 = value_io_a_3;
  endfunction
  export "DPI-C" function getBitsImpl_io_a_3;
  function void getBitsImpl_io_a_3;
    output bit [$bits(dut.io_a_3)-1:0] value_io_a_3;
    value_io_a_3 = io_a_3;
  endfunction

  // Port 22: io_a_4
  export "DPI-C" function getBitWidthImpl_io_a_4;
  function void getBitWidthImpl_io_a_4;
    output int value;
    value = $bits(dut.io_a_4);
  endfunction
  export "DPI-C" function setBitsImpl_io_a_4;
  function void setBitsImpl_io_a_4;
    input bit [$bits(dut.io_a_4)-1:0] value_io_a_4;
    io_a_4 = value_io_a_4;
  endfunction
  export "DPI-C" function getBitsImpl_io_a_4;
  function void getBitsImpl_io_a_4;
    output bit [$bits(dut.io_a_4)-1:0] value_io_a_4;
    value_io_a_4 = io_a_4;
  endfunction

  // Port 23: io_a_5
  export "DPI-C" function getBitWidthImpl_io_a_5;
  function void getBitWidthImpl_io_a_5;
    output int value;
    value = $bits(dut.io_a_5);
  endfunction
  export "DPI-C" function setBitsImpl_io_a_5;
  function void setBitsImpl_io_a_5;
    input bit [$bits(dut.io_a_5)-1:0] value_io_a_5;
    io_a_5 = value_io_a_5;
  endfunction
  export "DPI-C" function getBitsImpl_io_a_5;
  function void getBitsImpl_io_a_5;
    output bit [$bits(dut.io_a_5)-1:0] value_io_a_5;
    value_io_a_5 = io_a_5;
  endfunction

  // Port 24: io_a_6
  export "DPI-C" function getBitWidthImpl_io_a_6;
  function void getBitWidthImpl_io_a_6;
    output int value;
    value = $bits(dut.io_a_6);
  endfunction
  export "DPI-C" function setBitsImpl_io_a_6;
  function void setBitsImpl_io_a_6;
    input bit [$bits(dut.io_a_6)-1:0] value_io_a_6;
    io_a_6 = value_io_a_6;
  endfunction
  export "DPI-C" function getBitsImpl_io_a_6;
  function void getBitsImpl_io_a_6;
    output bit [$bits(dut.io_a_6)-1:0] value_io_a_6;
    value_io_a_6 = io_a_6;
  endfunction

  // Port 25: io_a_7
  export "DPI-C" function getBitWidthImpl_io_a_7;
  function void getBitWidthImpl_io_a_7;
    output int value;
    value = $bits(dut.io_a_7);
  endfunction
  export "DPI-C" function setBitsImpl_io_a_7;
  function void setBitsImpl_io_a_7;
    input bit [$bits(dut.io_a_7)-1:0] value_io_a_7;
    io_a_7 = value_io_a_7;
  endfunction
  export "DPI-C" function getBitsImpl_io_a_7;
  function void getBitsImpl_io_a_7;
    output bit [$bits(dut.io_a_7)-1:0] value_io_a_7;
    value_io_a_7 = io_a_7;
  endfunction

  // Port 26: io_a_8
  export "DPI-C" function getBitWidthImpl_io_a_8;
  function void getBitWidthImpl_io_a_8;
    output int value;
    value = $bits(dut.io_a_8);
  endfunction
  export "DPI-C" function setBitsImpl_io_a_8;
  function void setBitsImpl_io_a_8;
    input bit [$bits(dut.io_a_8)-1:0] value_io_a_8;
    io_a_8 = value_io_a_8;
  endfunction
  export "DPI-C" function getBitsImpl_io_a_8;
  function void getBitsImpl_io_a_8;
    output bit [$bits(dut.io_a_8)-1:0] value_io_a_8;
    value_io_a_8 = io_a_8;
  endfunction

  // Port 27: io_a_9
  export "DPI-C" function getBitWidthImpl_io_a_9;
  function void getBitWidthImpl_io_a_9;
    output int value;
    value = $bits(dut.io_a_9);
  endfunction
  export "DPI-C" function setBitsImpl_io_a_9;
  function void setBitsImpl_io_a_9;
    input bit [$bits(dut.io_a_9)-1:0] value_io_a_9;
    io_a_9 = value_io_a_9;
  endfunction
  export "DPI-C" function getBitsImpl_io_a_9;
  function void getBitsImpl_io_a_9;
    output bit [$bits(dut.io_a_9)-1:0] value_io_a_9;
    value_io_a_9 = io_a_9;
  endfunction

  // Port 28: io_a_10
  export "DPI-C" function getBitWidthImpl_io_a_10;
  function void getBitWidthImpl_io_a_10;
    output int value;
    value = $bits(dut.io_a_10);
  endfunction
  export "DPI-C" function setBitsImpl_io_a_10;
  function void setBitsImpl_io_a_10;
    input bit [$bits(dut.io_a_10)-1:0] value_io_a_10;
    io_a_10 = value_io_a_10;
  endfunction
  export "DPI-C" function getBitsImpl_io_a_10;
  function void getBitsImpl_io_a_10;
    output bit [$bits(dut.io_a_10)-1:0] value_io_a_10;
    value_io_a_10 = io_a_10;
  endfunction

  // Port 29: io_a_11
  export "DPI-C" function getBitWidthImpl_io_a_11;
  function void getBitWidthImpl_io_a_11;
    output int value;
    value = $bits(dut.io_a_11);
  endfunction
  export "DPI-C" function setBitsImpl_io_a_11;
  function void setBitsImpl_io_a_11;
    input bit [$bits(dut.io_a_11)-1:0] value_io_a_11;
    io_a_11 = value_io_a_11;
  endfunction
  export "DPI-C" function getBitsImpl_io_a_11;
  function void getBitsImpl_io_a_11;
    output bit [$bits(dut.io_a_11)-1:0] value_io_a_11;
    value_io_a_11 = io_a_11;
  endfunction

  // Port 2a: io_a_12
  export "DPI-C" function getBitWidthImpl_io_a_12;
  function void getBitWidthImpl_io_a_12;
    output int value;
    value = $bits(dut.io_a_12);
  endfunction
  export "DPI-C" function setBitsImpl_io_a_12;
  function void setBitsImpl_io_a_12;
    input bit [$bits(dut.io_a_12)-1:0] value_io_a_12;
    io_a_12 = value_io_a_12;
  endfunction
  export "DPI-C" function getBitsImpl_io_a_12;
  function void getBitsImpl_io_a_12;
    output bit [$bits(dut.io_a_12)-1:0] value_io_a_12;
    value_io_a_12 = io_a_12;
  endfunction

  // Port 2b: io_a_13
  export "DPI-C" function getBitWidthImpl_io_a_13;
  function void getBitWidthImpl_io_a_13;
    output int value;
    value = $bits(dut.io_a_13);
  endfunction
  export "DPI-C" function setBitsImpl_io_a_13;
  function void setBitsImpl_io_a_13;
    input bit [$bits(dut.io_a_13)-1:0] value_io_a_13;
    io_a_13 = value_io_a_13;
  endfunction
  export "DPI-C" function getBitsImpl_io_a_13;
  function void getBitsImpl_io_a_13;
    output bit [$bits(dut.io_a_13)-1:0] value_io_a_13;
    value_io_a_13 = io_a_13;
  endfunction

  // Port 2c: io_a_14
  export "DPI-C" function getBitWidthImpl_io_a_14;
  function void getBitWidthImpl_io_a_14;
    output int value;
    value = $bits(dut.io_a_14);
  endfunction
  export "DPI-C" function setBitsImpl_io_a_14;
  function void setBitsImpl_io_a_14;
    input bit [$bits(dut.io_a_14)-1:0] value_io_a_14;
    io_a_14 = value_io_a_14;
  endfunction
  export "DPI-C" function getBitsImpl_io_a_14;
  function void getBitsImpl_io_a_14;
    output bit [$bits(dut.io_a_14)-1:0] value_io_a_14;
    value_io_a_14 = io_a_14;
  endfunction

  // Port 2d: io_a_15
  export "DPI-C" function getBitWidthImpl_io_a_15;
  function void getBitWidthImpl_io_a_15;
    output int value;
    value = $bits(dut.io_a_15);
  endfunction
  export "DPI-C" function setBitsImpl_io_a_15;
  function void setBitsImpl_io_a_15;
    input bit [$bits(dut.io_a_15)-1:0] value_io_a_15;
    io_a_15 = value_io_a_15;
  endfunction
  export "DPI-C" function getBitsImpl_io_a_15;
  function void getBitsImpl_io_a_15;
    output bit [$bits(dut.io_a_15)-1:0] value_io_a_15;
    value_io_a_15 = io_a_15;
  endfunction

  // Port 2e: io_a_16
  export "DPI-C" function getBitWidthImpl_io_a_16;
  function void getBitWidthImpl_io_a_16;
    output int value;
    value = $bits(dut.io_a_16);
  endfunction
  export "DPI-C" function setBitsImpl_io_a_16;
  function void setBitsImpl_io_a_16;
    input bit [$bits(dut.io_a_16)-1:0] value_io_a_16;
    io_a_16 = value_io_a_16;
  endfunction
  export "DPI-C" function getBitsImpl_io_a_16;
  function void getBitsImpl_io_a_16;
    output bit [$bits(dut.io_a_16)-1:0] value_io_a_16;
    value_io_a_16 = io_a_16;
  endfunction

  // Port 2f: io_a_17
  export "DPI-C" function getBitWidthImpl_io_a_17;
  function void getBitWidthImpl_io_a_17;
    output int value;
    value = $bits(dut.io_a_17);
  endfunction
  export "DPI-C" function setBitsImpl_io_a_17;
  function void setBitsImpl_io_a_17;
    input bit [$bits(dut.io_a_17)-1:0] value_io_a_17;
    io_a_17 = value_io_a_17;
  endfunction
  export "DPI-C" function getBitsImpl_io_a_17;
  function void getBitsImpl_io_a_17;
    output bit [$bits(dut.io_a_17)-1:0] value_io_a_17;
    value_io_a_17 = io_a_17;
  endfunction

  // Port 30: io_a_18
  export "DPI-C" function getBitWidthImpl_io_a_18;
  function void getBitWidthImpl_io_a_18;
    output int value;
    value = $bits(dut.io_a_18);
  endfunction
  export "DPI-C" function setBitsImpl_io_a_18;
  function void setBitsImpl_io_a_18;
    input bit [$bits(dut.io_a_18)-1:0] value_io_a_18;
    io_a_18 = value_io_a_18;
  endfunction
  export "DPI-C" function getBitsImpl_io_a_18;
  function void getBitsImpl_io_a_18;
    output bit [$bits(dut.io_a_18)-1:0] value_io_a_18;
    value_io_a_18 = io_a_18;
  endfunction

  // Port 31: io_a_19
  export "DPI-C" function getBitWidthImpl_io_a_19;
  function void getBitWidthImpl_io_a_19;
    output int value;
    value = $bits(dut.io_a_19);
  endfunction
  export "DPI-C" function setBitsImpl_io_a_19;
  function void setBitsImpl_io_a_19;
    input bit [$bits(dut.io_a_19)-1:0] value_io_a_19;
    io_a_19 = value_io_a_19;
  endfunction
  export "DPI-C" function getBitsImpl_io_a_19;
  function void getBitsImpl_io_a_19;
    output bit [$bits(dut.io_a_19)-1:0] value_io_a_19;
    value_io_a_19 = io_a_19;
  endfunction

  // Port 32: io_a_20
  export "DPI-C" function getBitWidthImpl_io_a_20;
  function void getBitWidthImpl_io_a_20;
    output int value;
    value = $bits(dut.io_a_20);
  endfunction
  export "DPI-C" function setBitsImpl_io_a_20;
  function void setBitsImpl_io_a_20;
    input bit [$bits(dut.io_a_20)-1:0] value_io_a_20;
    io_a_20 = value_io_a_20;
  endfunction
  export "DPI-C" function getBitsImpl_io_a_20;
  function void getBitsImpl_io_a_20;
    output bit [$bits(dut.io_a_20)-1:0] value_io_a_20;
    value_io_a_20 = io_a_20;
  endfunction

  // Port 33: io_a_21
  export "DPI-C" function getBitWidthImpl_io_a_21;
  function void getBitWidthImpl_io_a_21;
    output int value;
    value = $bits(dut.io_a_21);
  endfunction
  export "DPI-C" function setBitsImpl_io_a_21;
  function void setBitsImpl_io_a_21;
    input bit [$bits(dut.io_a_21)-1:0] value_io_a_21;
    io_a_21 = value_io_a_21;
  endfunction
  export "DPI-C" function getBitsImpl_io_a_21;
  function void getBitsImpl_io_a_21;
    output bit [$bits(dut.io_a_21)-1:0] value_io_a_21;
    value_io_a_21 = io_a_21;
  endfunction

  // Port 34: io_a_22
  export "DPI-C" function getBitWidthImpl_io_a_22;
  function void getBitWidthImpl_io_a_22;
    output int value;
    value = $bits(dut.io_a_22);
  endfunction
  export "DPI-C" function setBitsImpl_io_a_22;
  function void setBitsImpl_io_a_22;
    input bit [$bits(dut.io_a_22)-1:0] value_io_a_22;
    io_a_22 = value_io_a_22;
  endfunction
  export "DPI-C" function getBitsImpl_io_a_22;
  function void getBitsImpl_io_a_22;
    output bit [$bits(dut.io_a_22)-1:0] value_io_a_22;
    value_io_a_22 = io_a_22;
  endfunction

  // Port 35: io_a_23
  export "DPI-C" function getBitWidthImpl_io_a_23;
  function void getBitWidthImpl_io_a_23;
    output int value;
    value = $bits(dut.io_a_23);
  endfunction
  export "DPI-C" function setBitsImpl_io_a_23;
  function void setBitsImpl_io_a_23;
    input bit [$bits(dut.io_a_23)-1:0] value_io_a_23;
    io_a_23 = value_io_a_23;
  endfunction
  export "DPI-C" function getBitsImpl_io_a_23;
  function void getBitsImpl_io_a_23;
    output bit [$bits(dut.io_a_23)-1:0] value_io_a_23;
    value_io_a_23 = io_a_23;
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
