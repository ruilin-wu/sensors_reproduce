// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsvsimTestbench.h for the primary calling header

#include "VsvsimTestbench__pch.h"

extern "C" void initTestBenchScope();

void VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__initTestBenchScope_TOP(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__initTestBenchScope_TOP\n"); );
    // Body
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    initTestBenchScope();
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_clock_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_clock_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_clock_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_clock) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_clock_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__clock = value_clock;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_clock_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_clock) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_clock_TOP\n"); );
    // Body
    value_clock = vlSymsp->TOP.svsimTestbench__DOT__clock;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_reset_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_reset_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_reset_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_reset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_reset_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__reset = value_reset;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_reset_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_reset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_reset_TOP\n"); );
    // Body
    value_reset = vlSymsp->TOP.svsimTestbench__DOT__reset;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_upMask_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_upMask_0_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_upMask_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_io_upMask_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_upMask_0_TOP\n"); );
    // Body
    value_io_upMask_0 = (0U != (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__rounded));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_upMask_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_upMask_1_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_upMask_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_io_upMask_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_upMask_1_TOP\n"); );
    // Body
    value_io_upMask_1 = (0U != (0x0000007fU & ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__rounded) 
                                               >> 1U)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_upMask_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_upMask_2_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_upMask_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_io_upMask_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_upMask_2_TOP\n"); );
    // Body
    value_io_upMask_2 = (2U < (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__rounded));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_upMask_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_upMask_3_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_upMask_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_io_upMask_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_upMask_3_TOP\n"); );
    // Body
    value_io_upMask_3 = (0U != (0x0000003fU & ((IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__rounded) 
                                               >> 2U)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_upCount_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_upCount_TOP\n"); );
    // Body
    value = 3U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_upCount_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*2:0*/ &value_io_upCount) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_upCount_TOP\n"); );
    // Body
    value_io_upCount = (7U & (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__rounded));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_prefix_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_prefix_0_TOP\n"); );
    // Body
    value = 3U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_prefix_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*2:0*/ value_io_prefix_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_prefix_0_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_prefix_0 = value_io_prefix_0;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_prefix_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*2:0*/ &value_io_prefix_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_prefix_0_TOP\n"); );
    // Body
    value_io_prefix_0 = vlSymsp->TOP.svsimTestbench__DOT__io_prefix_0;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_prefix_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_prefix_1_TOP\n"); );
    // Body
    value = 3U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_prefix_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*2:0*/ value_io_prefix_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_prefix_1_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_prefix_1 = value_io_prefix_1;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_prefix_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*2:0*/ &value_io_prefix_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_prefix_1_TOP\n"); );
    // Body
    value_io_prefix_1 = vlSymsp->TOP.svsimTestbench__DOT__io_prefix_1;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_prefix_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_prefix_2_TOP\n"); );
    // Body
    value = 3U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_prefix_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*2:0*/ value_io_prefix_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_prefix_2_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_prefix_2 = value_io_prefix_2;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_prefix_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*2:0*/ &value_io_prefix_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_prefix_2_TOP\n"); );
    // Body
    value_io_prefix_2 = vlSymsp->TOP.svsimTestbench__DOT__io_prefix_2;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_prefix_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_prefix_3_TOP\n"); );
    // Body
    value = 3U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_prefix_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*2:0*/ value_io_prefix_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_prefix_3_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_prefix_3 = value_io_prefix_3;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_prefix_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*2:0*/ &value_io_prefix_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_prefix_3_TOP\n"); );
    // Body
    value_io_prefix_3 = vlSymsp->TOP.svsimTestbench__DOT__io_prefix_3;
}

extern "C" int simulation_body();

void VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__simulation_body_TOP(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__simulation_body_TOP\n"); );
    // Body
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    simulation_body();
}

extern "C" int simulation_final();

void VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__simulation_final_TOP(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__simulation_final_TOP\n"); );
    // Body
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    simulation_final();
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__simulation_initializeTrace_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, std::string traceFilePath) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__simulation_initializeTrace_TOP\n"); );
    // Body
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__simulation_enableTrace_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &success) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__simulation_enableTrace_TOP\n"); );
    // Body
    success = 0U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__simulation_disableTrace_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &success) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__simulation_disableTrace_TOP\n"); );
    // Body
    success = 0U;
}

bool VsvsimTestbench___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsvsimTestbench___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VsvsimTestbench___024root___eval_phase__ico(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_phase__ico\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffdULL 
                                          & vlSelfRef.__VicoTriggered[0U]) 
                                         | ((QData)((IData)(vlSelfRef.__Vdpi_export_trigger)) 
                                            << 1U));
        vlSelfRef.__Vdpi_export_trigger = 0U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VsvsimTestbench___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = VsvsimTestbench___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_ico
            if ((2ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__0
                    CData/*6:0*/ __Vinline_0__eval_ico___Vinline_1__ico_sequent__TOP__0_svsimTestbench__DOT__dut__DOT___GEN;
                    __Vinline_0__eval_ico___Vinline_1__ico_sequent__TOP__0_svsimTestbench__DOT__dut__DOT___GEN = 0;
                    __Vinline_0__eval_ico___Vinline_1__ico_sequent__TOP__0_svsimTestbench__DOT__dut__DOT___GEN 
                        = (0x0000007fU & ((IData)(2U) 
                                          + (0x0000003fU 
                                             & ((0x0000001fU 
                                                 & ((0x0000000fU 
                                                     & ((IData)(vlSelfRef.svsimTestbench__DOT__io_prefix_0) 
                                                        + (IData)(vlSelfRef.svsimTestbench__DOT__io_prefix_1))) 
                                                    + (IData)(vlSelfRef.svsimTestbench__DOT__io_prefix_2))) 
                                                + (IData)(vlSelfRef.svsimTestbench__DOT__io_prefix_3)))));
                    vlSelfRef.svsimTestbench__DOT__dut__DOT__rounded 
                        = (0x000000ffU & (((4U < (7U 
                                                  & __Vinline_0__eval_ico___Vinline_1__ico_sequent__TOP__0_svsimTestbench__DOT__dut__DOT___GEN)) 
                                           | (IData)(
                                                     (0x0cU 
                                                      == 
                                                      (0x0fU 
                                                       & __Vinline_0__eval_ico___Vinline_1__ico_sequent__TOP__0_svsimTestbench__DOT__dut__DOT___GEN)))) 
                                          + (0x0000000fU 
                                             & (__Vinline_0__eval_ico___Vinline_1__ico_sequent__TOP__0_svsimTestbench__DOT__dut__DOT___GEN 
                                                >> 3U))));
                }
            }
        }
    }
    return (__VicoExecute);
}

bool VsvsimTestbench___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void VsvsimTestbench___024root___act_sequent__TOP__0(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___act_sequent__TOP__0\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U == vlSelfRef.svsimTestbench__DOT__simulationState)) {
        VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__simulation_body_TOP(
                                                                                (vlSymsp->__Vscopep_svsimTestbench), 
                                                                                "/home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-46-55.636752/workdir-verilator/../generated-sources/testbench.sv", 0x000000c8U);
        vlSelfRef.svsimTestbench__DOT__simulationState = 2U;
    }
}

void VsvsimTestbench___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 2> &out, const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsvsimTestbench___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VsvsimTestbench___024root___eval_phase__act(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_phase__act\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VactTriggered[1U]) 
                                         | (IData)((IData)(vlSelfRef.__Vdpi_export_trigger)));
        vlSelfRef.__Vdpi_export_trigger = 0U;
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        (vlSelfRef.svsimTestbench__DOT__simulationState 
                                                         != vlSelfRef.__Vtrigprevexpr___TOP__svsimTestbench__DOT__simulationState__0)));
        vlSelfRef.__Vtrigprevexpr___TOP__svsimTestbench__DOT__simulationState__0 
            = vlSelfRef.svsimTestbench__DOT__simulationState;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
            vlSelfRef.__VactDidInit = 1U;
            vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VsvsimTestbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VsvsimTestbench___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = VsvsimTestbench___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        {
            // Inlined CFunc: _eval_act
            if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
                VsvsimTestbench___024root___act_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VactExecute);
}

void VsvsimTestbench___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 2> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

bool VsvsimTestbench___024root___eval_phase__nba(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_phase__nba\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VsvsimTestbench___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[1U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__0
                    CData/*6:0*/ __Vinline_0__eval_nba___Vinline_2__ico_sequent__TOP__0_svsimTestbench__DOT__dut__DOT___GEN;
                    __Vinline_0__eval_nba___Vinline_2__ico_sequent__TOP__0_svsimTestbench__DOT__dut__DOT___GEN = 0;
                    __Vinline_0__eval_nba___Vinline_2__ico_sequent__TOP__0_svsimTestbench__DOT__dut__DOT___GEN 
                        = (0x0000007fU & ((IData)(2U) 
                                          + (0x0000003fU 
                                             & ((0x0000001fU 
                                                 & ((0x0000000fU 
                                                     & ((IData)(vlSelfRef.svsimTestbench__DOT__io_prefix_0) 
                                                        + (IData)(vlSelfRef.svsimTestbench__DOT__io_prefix_1))) 
                                                    + (IData)(vlSelfRef.svsimTestbench__DOT__io_prefix_2))) 
                                                + (IData)(vlSelfRef.svsimTestbench__DOT__io_prefix_3)))));
                    vlSelfRef.svsimTestbench__DOT__dut__DOT__rounded 
                        = (0x000000ffU & (((4U < (7U 
                                                  & __Vinline_0__eval_nba___Vinline_2__ico_sequent__TOP__0_svsimTestbench__DOT__dut__DOT___GEN)) 
                                           | (IData)(
                                                     (0x0cU 
                                                      == 
                                                      (0x0fU 
                                                       & __Vinline_0__eval_nba___Vinline_2__ico_sequent__TOP__0_svsimTestbench__DOT__dut__DOT___GEN)))) 
                                          + (0x0000000fU 
                                             & (__Vinline_0__eval_nba___Vinline_2__ico_sequent__TOP__0_svsimTestbench__DOT__dut__DOT___GEN 
                                                >> 3U))));
                }
            }
        }
        VsvsimTestbench___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VsvsimTestbench___024root___eval(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VsvsimTestbench___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-46-55.636752/workdir-verilator/../generated-sources/testbench.sv", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = VsvsimTestbench___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VsvsimTestbench___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-46-55.636752/workdir-verilator/../generated-sources/testbench.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VsvsimTestbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-46-55.636752/workdir-verilator/../generated-sources/testbench.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = VsvsimTestbench___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = VsvsimTestbench___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void VsvsimTestbench___024root___eval_debug_assertions(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_debug_assertions\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
