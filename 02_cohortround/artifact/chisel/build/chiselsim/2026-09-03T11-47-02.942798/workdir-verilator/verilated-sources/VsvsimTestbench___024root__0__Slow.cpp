// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsvsimTestbench.h for the primary calling header

#include "VsvsimTestbench__pch.h"

VL_ATTR_COLD void VsvsimTestbench___024root___eval_static(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_static\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.svsimTestbench__DOT__clock = 0U;
        vlSelfRef.svsimTestbench__DOT__reset = 0U;
        vlSelfRef.svsimTestbench__DOT__io_prefix_0 = 0U;
        vlSelfRef.svsimTestbench__DOT__io_prefix_1 = 0U;
        vlSelfRef.svsimTestbench__DOT__io_prefix_2 = 0U;
        vlSelfRef.svsimTestbench__DOT__io_prefix_3 = 0U;
        vlSelfRef.svsimTestbench__DOT__io_inValid = 0U;
        vlSelfRef.svsimTestbench__DOT__simulationState = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__svsimTestbench__DOT__simulationState__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__svsimTestbench__DOT__clock__0 
        = vlSelfRef.svsimTestbench__DOT__clock;
}

VL_ATTR_COLD void VsvsimTestbench___024root___eval_initial__TOP(VsvsimTestbench___024root* vlSelf);

VL_ATTR_COLD void VsvsimTestbench___024root___eval_initial(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_initial\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VsvsimTestbench___024root___eval_initial__TOP(vlSelf);
}

void VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__initTestBenchScope_TOP(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno);

VL_ATTR_COLD void VsvsimTestbench___024root___eval_initial__TOP(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_initial__TOP\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<IData/*31:0*/, 1> svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___RANDOM;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___RANDOM[__Vi0] = 0;
    }
    // Body
    VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__initTestBenchScope_TOP(
                                                                                (vlSymsp->__Vscopep_svsimTestbench), 
                                                                                "/home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv", 0x00000022U);
    vlSelfRef.svsimTestbench__DOT__simulationState = 1U;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___RANDOM[__Vi0] = 0;
    }
    svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelfRef.svsimTestbench__DOT__dut__DOT__io_outValid_REG 
        = (1U & svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___RANDOM[0U]);
    vlSelfRef.svsimTestbench__DOT__dut__DOT__io_upCount_r 
        = (7U & (svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___RANDOM[0U] 
                 >> 1U));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__maskReg_0 
        = (1U & (svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___RANDOM[0U] 
                 >> 4U));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__maskReg_1 
        = (1U & (svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___RANDOM[0U] 
                 >> 5U));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__maskReg_2 
        = (1U & (svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___RANDOM[0U] 
                 >> 6U));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__maskReg_3 
        = (1U & (svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___RANDOM[0U] 
                 >> 7U));
}

VL_ATTR_COLD void VsvsimTestbench___024root___eval_final__TOP(VsvsimTestbench___024root* vlSelf);

VL_ATTR_COLD void VsvsimTestbench___024root___eval_final(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_final\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VsvsimTestbench___024root___eval_final__TOP(vlSelf);
}

void VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__simulation_final_TOP(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno);

VL_ATTR_COLD void VsvsimTestbench___024root___eval_final__TOP(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_final__TOP\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__simulation_final_TOP(
                                                                                (vlSymsp->__Vscopep_svsimTestbench), 
                                                                                "/home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv", 0x000000efU);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsvsimTestbench___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VsvsimTestbench___024root___eval_phase__stl(VsvsimTestbench___024root* vlSelf);

VL_ATTR_COLD void VsvsimTestbench___024root___eval_settle(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_settle\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VsvsimTestbench___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = VsvsimTestbench___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool VsvsimTestbench___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VsvsimTestbench___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VsvsimTestbench___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VsvsimTestbench___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD bool VsvsimTestbench___024root___eval_phase__stl(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_phase__stl\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VsvsimTestbench___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VsvsimTestbench___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__0
                    vlSelfRef.svsimTestbench__DOT__dut__DOT__core__DOT___GEN 
                        = (0x0000007fU & ((IData)(2U) 
                                          + (0x0000003fU 
                                             & ((0x0000001fU 
                                                 & ((0x0000000fU 
                                                     & ((IData)(vlSelfRef.svsimTestbench__DOT__io_prefix_0) 
                                                        + (IData)(vlSelfRef.svsimTestbench__DOT__io_prefix_1))) 
                                                    + (IData)(vlSelfRef.svsimTestbench__DOT__io_prefix_2))) 
                                                + (IData)(vlSelfRef.svsimTestbench__DOT__io_prefix_3)))));
                    vlSelfRef.svsimTestbench__DOT__dut__DOT__core__DOT__rounded 
                        = (0x000000ffU & (((4U < (7U 
                                                  & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__core__DOT___GEN))) 
                                           | (IData)(
                                                     (0x0cU 
                                                      == 
                                                      (0x0fU 
                                                       & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__core__DOT___GEN))))) 
                                          + (0x0000000fU 
                                             & ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__core__DOT___GEN) 
                                                >> 3U))));
                }
            }
        }
    }
    return (__VstlExecute);
}

bool VsvsimTestbench___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VsvsimTestbench___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(VsvsimTestbench___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: Internal 'ico' trigger - DPI export trigger\n");
    }
}
#endif  // VL_DEBUG

bool VsvsimTestbench___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VsvsimTestbench___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VsvsimTestbench___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( svsimTestbench.simulationState)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge svsimTestbench.clock)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'act' trigger - DPI export trigger\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VsvsimTestbench___024root___ctor_var_reset(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___ctor_var_reset\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->svsimTestbench__DOT__dut__DOT__io_outValid_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8815895422018260768ull);
    vlSelf->svsimTestbench__DOT__dut__DOT__io_upCount_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14780606341980017911ull);
    vlSelf->svsimTestbench__DOT__dut__DOT__maskReg_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4868669550044864501ull);
    vlSelf->svsimTestbench__DOT__dut__DOT__maskReg_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6783560630113987572ull);
    vlSelf->svsimTestbench__DOT__dut__DOT__maskReg_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9921764969824447206ull);
    vlSelf->svsimTestbench__DOT__dut__DOT__maskReg_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3015871958090739810ull);
    vlSelf->svsimTestbench__DOT__dut__DOT__core__DOT___GEN = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14932453455167820116ull);
    vlSelf->svsimTestbench__DOT__dut__DOT__core__DOT__rounded = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11356334917950777192ull);
    vlSelf->__Vdpi_export_trigger = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__svsimTestbench__DOT__simulationState__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__svsimTestbench__DOT__clock__0 = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
