// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VsvsimTestbench.h for the primary calling header

#ifndef VERILATED_VSVSIMTESTBENCH___024ROOT_H_
#define VERILATED_VSVSIMTESTBENCH___024ROOT_H_  // guard

#include "verilated.h"


class VsvsimTestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) VsvsimTestbench___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ svsimTestbench__DOT__clock;
        CData/*0:0*/ svsimTestbench__DOT__reset;
        CData/*0:0*/ svsimTestbench__DOT__io_start;
        CData/*0:0*/ svsimTestbench__DOT__dut__DOT__state;
        CData/*4:0*/ svsimTestbench__DOT__dut__DOT__idx;
        CData/*0:0*/ svsimTestbench__DOT__dut__DOT__fired;
        CData/*0:0*/ svsimTestbench__DOT__dut__DOT__doneReg;
        CData/*0:0*/ svsimTestbench__DOT__dut__DOT____Vcellinp__mult__io_start;
        CData/*0:0*/ svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT__isLast;
        CData/*0:0*/ svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___GEN_1;
        CData/*0:0*/ svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___GEN_2;
        CData/*0:0*/ svsimTestbench__DOT__dut__DOT__mult__DOT__state;
        CData/*0:0*/ svsimTestbench__DOT__dut__DOT__mult__DOT__signReg;
        CData/*0:0*/ svsimTestbench__DOT__dut__DOT__mult__DOT__doneReg;
        CData/*0:0*/ svsimTestbench__DOT__dut__DOT__mult__DOT__inner_io_clearAcc;
        CData/*0:0*/ svsimTestbench__DOT__dut__DOT__mult__DOT____Vcellinp__inner__io_start;
        CData/*0:0*/ svsimTestbench__DOT__dut__DOT__mult__DOT__unnamedblk1__DOT___GEN_0;
        CData/*0:0*/ svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__state;
        CData/*2:0*/ svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__digitCnt;
        CData/*3:0*/ svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__lowChunks_0;
        CData/*3:0*/ svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__lowChunks_1;
        CData/*3:0*/ svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__lowChunks_2;
        CData/*3:0*/ svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__lowChunks_3;
        CData/*0:0*/ svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__macValidReg;
        CData/*0:0*/ svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN;
        CData/*0:0*/ svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__unnamedblk1__DOT__unnamedblk2__DOT__isLast;
        CData/*0:0*/ svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0;
        CData/*0:0*/ __Vdpi_export_trigger;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__svsimTestbench__DOT__clock__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*15:0*/ svsimTestbench__DOT__io_b_0;
        SData/*15:0*/ svsimTestbench__DOT__io_b_1;
        SData/*15:0*/ svsimTestbench__DOT__io_b_2;
        SData/*15:0*/ svsimTestbench__DOT__io_b_3;
        SData/*15:0*/ svsimTestbench__DOT__io_b_4;
        SData/*15:0*/ svsimTestbench__DOT__io_b_5;
        SData/*15:0*/ svsimTestbench__DOT__io_b_6;
        SData/*15:0*/ svsimTestbench__DOT__io_b_7;
        SData/*15:0*/ svsimTestbench__DOT__io_b_8;
        SData/*15:0*/ svsimTestbench__DOT__io_b_9;
        SData/*15:0*/ svsimTestbench__DOT__io_b_10;
        SData/*15:0*/ svsimTestbench__DOT__io_b_11;
        SData/*15:0*/ svsimTestbench__DOT__io_b_12;
        SData/*15:0*/ svsimTestbench__DOT__io_b_13;
        SData/*15:0*/ svsimTestbench__DOT__io_b_14;
        SData/*15:0*/ svsimTestbench__DOT__io_b_15;
        SData/*15:0*/ svsimTestbench__DOT__io_b_16;
        SData/*15:0*/ svsimTestbench__DOT__io_b_17;
        SData/*15:0*/ svsimTestbench__DOT__io_b_18;
        SData/*15:0*/ svsimTestbench__DOT__io_b_19;
        SData/*15:0*/ svsimTestbench__DOT__io_b_20;
        SData/*15:0*/ svsimTestbench__DOT__io_b_21;
        SData/*15:0*/ svsimTestbench__DOT__io_b_22;
        SData/*15:0*/ svsimTestbench__DOT__io_b_23;
        SData/*15:0*/ svsimTestbench__DOT__io_a_0;
        SData/*15:0*/ svsimTestbench__DOT__io_a_1;
        SData/*15:0*/ svsimTestbench__DOT__io_a_2;
        SData/*15:0*/ svsimTestbench__DOT__io_a_3;
        SData/*15:0*/ svsimTestbench__DOT__io_a_4;
    };
    struct {
        SData/*15:0*/ svsimTestbench__DOT__io_a_5;
        SData/*15:0*/ svsimTestbench__DOT__io_a_6;
        SData/*15:0*/ svsimTestbench__DOT__io_a_7;
        SData/*15:0*/ svsimTestbench__DOT__io_a_8;
        SData/*15:0*/ svsimTestbench__DOT__io_a_9;
        SData/*15:0*/ svsimTestbench__DOT__io_a_10;
        SData/*15:0*/ svsimTestbench__DOT__io_a_11;
        SData/*15:0*/ svsimTestbench__DOT__io_a_12;
        SData/*15:0*/ svsimTestbench__DOT__io_a_13;
        SData/*15:0*/ svsimTestbench__DOT__io_a_14;
        SData/*15:0*/ svsimTestbench__DOT__io_a_15;
        SData/*15:0*/ svsimTestbench__DOT__io_a_16;
        SData/*15:0*/ svsimTestbench__DOT__io_a_17;
        SData/*15:0*/ svsimTestbench__DOT__io_a_18;
        SData/*15:0*/ svsimTestbench__DOT__io_a_19;
        SData/*15:0*/ svsimTestbench__DOT__io_a_20;
        SData/*15:0*/ svsimTestbench__DOT__io_a_21;
        SData/*15:0*/ svsimTestbench__DOT__io_a_22;
        SData/*15:0*/ svsimTestbench__DOT__io_a_23;
        SData/*15:0*/ svsimTestbench__DOT__dut__DOT____Vcellinp__mult__io_b;
        SData/*15:0*/ svsimTestbench__DOT__dut__DOT____Vcellinp__mult__io_a;
        IData/*31:0*/ svsimTestbench__DOT__simulationState;
        IData/*19:0*/ svsimTestbench__DOT__dut__DOT__resultReg;
        IData/*16:0*/ svsimTestbench__DOT__dut__DOT__mult__DOT__magBShift;
        IData/*16:0*/ svsimTestbench__DOT__dut__DOT__mult__DOT___GEN;
        IData/*16:0*/ svsimTestbench__DOT__dut__DOT__mult__DOT__unnamedblk3__DOT___GEN_2;
        IData/*16:0*/ svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__regA;
        IData/*17:0*/ svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__pReg;
        IData/*31:0*/ __Vtrigprevexpr___TOP__svsimTestbench__DOT__simulationState__0;
        IData/*31:0*/ __VactIterCount;
        QData/*37:0*/ svsimTestbench__DOT__dut__DOT__acc;
        QData/*37:0*/ svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___nextAcc_T_1;
        QData/*45:0*/ svsimTestbench__DOT__dut__DOT__mult__DOT__resultReg;
        QData/*45:0*/ svsimTestbench__DOT__dut__DOT__mult__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_1;
        QData/*44:0*/ svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__accReg;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 2> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 2> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    VsvsimTestbench__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VsvsimTestbench___024root(VsvsimTestbench__Syms* symsp, const char* namep);
    ~VsvsimTestbench___024root();
    VL_UNCOPYABLE(VsvsimTestbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
