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
    CData/*0:0*/ svsimTestbench__DOT__clock;
    CData/*0:0*/ svsimTestbench__DOT__reset;
    CData/*2:0*/ svsimTestbench__DOT__io_prefix_0;
    CData/*2:0*/ svsimTestbench__DOT__io_prefix_1;
    CData/*2:0*/ svsimTestbench__DOT__io_prefix_2;
    CData/*2:0*/ svsimTestbench__DOT__io_prefix_3;
    CData/*0:0*/ svsimTestbench__DOT__io_inValid;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__io_outValid_REG;
    CData/*2:0*/ svsimTestbench__DOT__dut__DOT__io_upCount_r;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__maskReg_0;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__maskReg_1;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__maskReg_2;
    CData/*0:0*/ svsimTestbench__DOT__dut__DOT__maskReg_3;
    CData/*6:0*/ svsimTestbench__DOT__dut__DOT__core__DOT___GEN;
    CData/*7:0*/ svsimTestbench__DOT__dut__DOT__core__DOT__rounded;
    CData/*0:0*/ __Vdpi_export_trigger;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__svsimTestbench__DOT__clock__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ svsimTestbench__DOT__simulationState;
    IData/*31:0*/ __Vtrigprevexpr___TOP__svsimTestbench__DOT__simulationState__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VnbaTriggered;

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
