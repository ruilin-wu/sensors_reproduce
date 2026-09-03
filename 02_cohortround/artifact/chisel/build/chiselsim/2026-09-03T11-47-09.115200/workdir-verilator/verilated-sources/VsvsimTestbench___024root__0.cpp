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

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_result_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_result_TOP\n"); );
    // Body
    value = 0x00000014U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_result_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*19:0*/ &value_io_result) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_result_TOP\n"); );
    // Body
    value_io_result = vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__resultReg;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_done_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_done_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_done_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_io_done) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_done_TOP\n"); );
    // Body
    value_io_done = vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__doneReg;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_ready_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_ready_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_ready_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_io_ready) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_ready_TOP\n"); );
    // Body
    value_io_ready = (1U & (~ (IData)(vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__state)));
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_start_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_start_TOP\n"); );
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_start_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_io_start) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_start_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_start = value_io_start;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_start_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_io_start) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_start_TOP\n"); );
    // Body
    value_io_start = vlSymsp->TOP.svsimTestbench__DOT__io_start;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_0_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_b_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_0_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_b_0 = value_io_b_0;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_b_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_0_TOP\n"); );
    // Body
    value_io_b_0 = vlSymsp->TOP.svsimTestbench__DOT__io_b_0;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_1_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_b_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_1_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_b_1 = value_io_b_1;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_b_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_1_TOP\n"); );
    // Body
    value_io_b_1 = vlSymsp->TOP.svsimTestbench__DOT__io_b_1;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_2_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_b_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_2_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_b_2 = value_io_b_2;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_b_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_2_TOP\n"); );
    // Body
    value_io_b_2 = vlSymsp->TOP.svsimTestbench__DOT__io_b_2;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_3_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_b_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_3_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_b_3 = value_io_b_3;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_b_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_3_TOP\n"); );
    // Body
    value_io_b_3 = vlSymsp->TOP.svsimTestbench__DOT__io_b_3;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_4_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_b_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_4_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_b_4 = value_io_b_4;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_b_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_4_TOP\n"); );
    // Body
    value_io_b_4 = vlSymsp->TOP.svsimTestbench__DOT__io_b_4;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_5_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_b_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_5_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_b_5 = value_io_b_5;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_b_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_5_TOP\n"); );
    // Body
    value_io_b_5 = vlSymsp->TOP.svsimTestbench__DOT__io_b_5;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_6_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_b_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_6_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_b_6 = value_io_b_6;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_b_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_6_TOP\n"); );
    // Body
    value_io_b_6 = vlSymsp->TOP.svsimTestbench__DOT__io_b_6;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_7_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_b_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_7_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_b_7 = value_io_b_7;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_b_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_7_TOP\n"); );
    // Body
    value_io_b_7 = vlSymsp->TOP.svsimTestbench__DOT__io_b_7;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_8_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_b_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_8_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_b_8 = value_io_b_8;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_b_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_8_TOP\n"); );
    // Body
    value_io_b_8 = vlSymsp->TOP.svsimTestbench__DOT__io_b_8;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_9_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_b_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_9_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_b_9 = value_io_b_9;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_b_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_9_TOP\n"); );
    // Body
    value_io_b_9 = vlSymsp->TOP.svsimTestbench__DOT__io_b_9;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_10_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_b_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_10_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_b_10 = value_io_b_10;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_b_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_10_TOP\n"); );
    // Body
    value_io_b_10 = vlSymsp->TOP.svsimTestbench__DOT__io_b_10;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_11_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_b_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_11_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_b_11 = value_io_b_11;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_b_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_11_TOP\n"); );
    // Body
    value_io_b_11 = vlSymsp->TOP.svsimTestbench__DOT__io_b_11;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_12_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_b_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_12_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_b_12 = value_io_b_12;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_b_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_12_TOP\n"); );
    // Body
    value_io_b_12 = vlSymsp->TOP.svsimTestbench__DOT__io_b_12;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_13_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_b_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_13_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_b_13 = value_io_b_13;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_b_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_13_TOP\n"); );
    // Body
    value_io_b_13 = vlSymsp->TOP.svsimTestbench__DOT__io_b_13;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_14_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_b_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_14_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_b_14 = value_io_b_14;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_b_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_14_TOP\n"); );
    // Body
    value_io_b_14 = vlSymsp->TOP.svsimTestbench__DOT__io_b_14;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_15_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_b_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_15_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_b_15 = value_io_b_15;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_b_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_15_TOP\n"); );
    // Body
    value_io_b_15 = vlSymsp->TOP.svsimTestbench__DOT__io_b_15;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_16_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_b_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_16_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_b_16 = value_io_b_16;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_b_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_16_TOP\n"); );
    // Body
    value_io_b_16 = vlSymsp->TOP.svsimTestbench__DOT__io_b_16;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_17_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_b_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_17_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_b_17 = value_io_b_17;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_b_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_17_TOP\n"); );
    // Body
    value_io_b_17 = vlSymsp->TOP.svsimTestbench__DOT__io_b_17;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_18_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_b_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_18_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_b_18 = value_io_b_18;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_b_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_18_TOP\n"); );
    // Body
    value_io_b_18 = vlSymsp->TOP.svsimTestbench__DOT__io_b_18;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_19_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_b_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_19_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_b_19 = value_io_b_19;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_b_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_19_TOP\n"); );
    // Body
    value_io_b_19 = vlSymsp->TOP.svsimTestbench__DOT__io_b_19;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_20_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_b_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_20_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_b_20 = value_io_b_20;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_b_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_20_TOP\n"); );
    // Body
    value_io_b_20 = vlSymsp->TOP.svsimTestbench__DOT__io_b_20;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_21_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_b_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_21_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_b_21 = value_io_b_21;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_b_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_21_TOP\n"); );
    // Body
    value_io_b_21 = vlSymsp->TOP.svsimTestbench__DOT__io_b_21;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_22_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_b_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_22_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_b_22 = value_io_b_22;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_b_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_22_TOP\n"); );
    // Body
    value_io_b_22 = vlSymsp->TOP.svsimTestbench__DOT__io_b_22;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_b_23_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_b_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_b_23_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_b_23 = value_io_b_23;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_b_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_b_23_TOP\n"); );
    // Body
    value_io_b_23 = vlSymsp->TOP.svsimTestbench__DOT__io_b_23;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_0_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_a_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_0_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_a_0 = value_io_a_0;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_0_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_a_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_0_TOP\n"); );
    // Body
    value_io_a_0 = vlSymsp->TOP.svsimTestbench__DOT__io_a_0;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_1_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_a_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_1_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_a_1 = value_io_a_1;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_a_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_1_TOP\n"); );
    // Body
    value_io_a_1 = vlSymsp->TOP.svsimTestbench__DOT__io_a_1;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_2_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_a_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_2_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_a_2 = value_io_a_2;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_a_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_2_TOP\n"); );
    // Body
    value_io_a_2 = vlSymsp->TOP.svsimTestbench__DOT__io_a_2;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_3_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_a_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_3_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_a_3 = value_io_a_3;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_3_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_a_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_3_TOP\n"); );
    // Body
    value_io_a_3 = vlSymsp->TOP.svsimTestbench__DOT__io_a_3;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_4_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_a_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_4_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_a_4 = value_io_a_4;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_4_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_a_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_4_TOP\n"); );
    // Body
    value_io_a_4 = vlSymsp->TOP.svsimTestbench__DOT__io_a_4;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_5_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_a_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_5_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_a_5 = value_io_a_5;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_5_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_a_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_5_TOP\n"); );
    // Body
    value_io_a_5 = vlSymsp->TOP.svsimTestbench__DOT__io_a_5;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_6_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_a_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_6_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_a_6 = value_io_a_6;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_6_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_a_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_6_TOP\n"); );
    // Body
    value_io_a_6 = vlSymsp->TOP.svsimTestbench__DOT__io_a_6;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_7_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_a_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_7_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_a_7 = value_io_a_7;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_7_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_a_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_7_TOP\n"); );
    // Body
    value_io_a_7 = vlSymsp->TOP.svsimTestbench__DOT__io_a_7;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_8_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_a_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_8_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_a_8 = value_io_a_8;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_8_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_a_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_8_TOP\n"); );
    // Body
    value_io_a_8 = vlSymsp->TOP.svsimTestbench__DOT__io_a_8;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_9_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_a_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_9_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_a_9 = value_io_a_9;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_9_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_a_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_9_TOP\n"); );
    // Body
    value_io_a_9 = vlSymsp->TOP.svsimTestbench__DOT__io_a_9;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_10_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_a_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_10_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_a_10 = value_io_a_10;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_10_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_a_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_10_TOP\n"); );
    // Body
    value_io_a_10 = vlSymsp->TOP.svsimTestbench__DOT__io_a_10;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_11_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_a_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_11_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_a_11 = value_io_a_11;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_11_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_a_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_11_TOP\n"); );
    // Body
    value_io_a_11 = vlSymsp->TOP.svsimTestbench__DOT__io_a_11;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_12_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_a_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_12_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_a_12 = value_io_a_12;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_12_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_a_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_12_TOP\n"); );
    // Body
    value_io_a_12 = vlSymsp->TOP.svsimTestbench__DOT__io_a_12;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_13_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_a_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_13_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_a_13 = value_io_a_13;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_13_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_a_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_13_TOP\n"); );
    // Body
    value_io_a_13 = vlSymsp->TOP.svsimTestbench__DOT__io_a_13;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_14_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_a_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_14_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_a_14 = value_io_a_14;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_14_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_a_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_14_TOP\n"); );
    // Body
    value_io_a_14 = vlSymsp->TOP.svsimTestbench__DOT__io_a_14;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_15_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_a_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_15_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_a_15 = value_io_a_15;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_15_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_a_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_15_TOP\n"); );
    // Body
    value_io_a_15 = vlSymsp->TOP.svsimTestbench__DOT__io_a_15;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_16_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_a_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_16_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_a_16 = value_io_a_16;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_16_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_a_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_16_TOP\n"); );
    // Body
    value_io_a_16 = vlSymsp->TOP.svsimTestbench__DOT__io_a_16;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_17_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_a_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_17_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_a_17 = value_io_a_17;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_17_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_a_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_17_TOP\n"); );
    // Body
    value_io_a_17 = vlSymsp->TOP.svsimTestbench__DOT__io_a_17;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_18_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_a_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_18_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_a_18 = value_io_a_18;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_18_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_a_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_18_TOP\n"); );
    // Body
    value_io_a_18 = vlSymsp->TOP.svsimTestbench__DOT__io_a_18;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_19_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_a_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_19_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_a_19 = value_io_a_19;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_19_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_a_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_19_TOP\n"); );
    // Body
    value_io_a_19 = vlSymsp->TOP.svsimTestbench__DOT__io_a_19;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_20_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_a_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_20_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_a_20 = value_io_a_20;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_20_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_a_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_20_TOP\n"); );
    // Body
    value_io_a_20 = vlSymsp->TOP.svsimTestbench__DOT__io_a_20;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_21_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_a_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_21_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_a_21 = value_io_a_21;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_21_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_a_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_21_TOP\n"); );
    // Body
    value_io_a_21 = vlSymsp->TOP.svsimTestbench__DOT__io_a_21;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_22_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_a_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_22_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_a_22 = value_io_a_22;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_22_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_a_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_22_TOP\n"); );
    // Body
    value_io_a_22 = vlSymsp->TOP.svsimTestbench__DOT__io_a_22;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_io_a_23_TOP\n"); );
    // Body
    value = 0x00000010U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ value_io_a_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_io_a_23_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__io_a_23 = value_io_a_23;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_23_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, SData/*15:0*/ &value_io_a_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_io_a_23_TOP\n"); );
    // Body
    value_io_a_23 = vlSymsp->TOP.svsimTestbench__DOT__io_a_23;
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

void VsvsimTestbench___024root___ico_sequent__TOP__0(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___ico_sequent__TOP__0\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<16>/*511:0*/ __Vtemp_13;
    VlWide<16>/*511:0*/ __Vtemp_26;
    // Body
    __Vtemp_13[0U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_b_1) 
                       << 0x00000010U) | (IData)(vlSelfRef.svsimTestbench__DOT__io_b_0));
    __Vtemp_13[1U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_b_3) 
                       << 0x00000010U) | (IData)(vlSelfRef.svsimTestbench__DOT__io_b_2));
    __Vtemp_13[2U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_b_5) 
                       << 0x00000010U) | (IData)(vlSelfRef.svsimTestbench__DOT__io_b_4));
    __Vtemp_13[3U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_b_7) 
                       << 0x00000010U) | (IData)(vlSelfRef.svsimTestbench__DOT__io_b_6));
    __Vtemp_13[4U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_b_9) 
                       << 0x00000010U) | (IData)(vlSelfRef.svsimTestbench__DOT__io_b_8));
    __Vtemp_13[5U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_b_11) 
                       << 0x00000010U) | (IData)(vlSelfRef.svsimTestbench__DOT__io_b_10));
    __Vtemp_13[6U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_b_13) 
                       << 0x00000010U) | (IData)(vlSelfRef.svsimTestbench__DOT__io_b_12));
    __Vtemp_13[7U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_b_15) 
                       << 0x00000010U) | (IData)(vlSelfRef.svsimTestbench__DOT__io_b_14));
    __Vtemp_13[8U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_b_17) 
                       << 0x00000010U) | (IData)(vlSelfRef.svsimTestbench__DOT__io_b_16));
    __Vtemp_13[9U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_b_19) 
                       << 0x00000010U) | (IData)(vlSelfRef.svsimTestbench__DOT__io_b_18));
    __Vtemp_13[10U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_b_21) 
                        << 0x00000010U) | (IData)(vlSelfRef.svsimTestbench__DOT__io_b_20));
    __Vtemp_13[11U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_b_23) 
                        << 0x00000010U) | (IData)(vlSelfRef.svsimTestbench__DOT__io_b_22));
    __Vtemp_13[12U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_b_0) 
                        << 0x00000010U) | (IData)(vlSelfRef.svsimTestbench__DOT__io_b_0));
    __Vtemp_13[13U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_b_0) 
                        << 0x00000010U) | ((IData)(vlSelfRef.svsimTestbench__DOT__io_b_0) 
                                           | ((IData)(vlSelfRef.svsimTestbench__DOT__io_b_0) 
                                              >> 0x00000010U)));
    __Vtemp_13[14U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_b_0) 
                        << 0x00000010U) | ((IData)(vlSelfRef.svsimTestbench__DOT__io_b_0) 
                                           | ((IData)(vlSelfRef.svsimTestbench__DOT__io_b_0) 
                                              >> 0x00000010U)));
    __Vtemp_13[15U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_b_0) 
                        << 0x00000010U) | ((IData)(vlSelfRef.svsimTestbench__DOT__io_b_0) 
                                           | ((IData)(vlSelfRef.svsimTestbench__DOT__io_b_0) 
                                              >> 0x00000010U)));
    vlSelfRef.svsimTestbench__DOT__dut__DOT____Vcellinp__mult__io_b 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__idx) 
                                                  << 4U)))
                            ? 0U : (__Vtemp_13[(((IData)(0x0000000fU) 
                                                 + 
                                                 ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__idx) 
                                                  << 4U)) 
                                                >> 5U)] 
                                    << ((IData)(0x00000020U) 
                                        - (0x0000001fU 
                                           & ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__idx) 
                                              << 4U))))) 
                          | (__Vtemp_13[(0x07ffffffU 
                                         & ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__idx) 
                                            >> 1U))] 
                             >> (0x0000001fU & ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__idx) 
                                                << 4U)))));
    __Vtemp_26[0U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_a_1) 
                       << 0x00000010U) | (IData)(vlSelfRef.svsimTestbench__DOT__io_a_0));
    __Vtemp_26[1U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_a_3) 
                       << 0x00000010U) | (IData)(vlSelfRef.svsimTestbench__DOT__io_a_2));
    __Vtemp_26[2U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_a_5) 
                       << 0x00000010U) | (IData)(vlSelfRef.svsimTestbench__DOT__io_a_4));
    __Vtemp_26[3U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_a_7) 
                       << 0x00000010U) | (IData)(vlSelfRef.svsimTestbench__DOT__io_a_6));
    __Vtemp_26[4U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_a_9) 
                       << 0x00000010U) | (IData)(vlSelfRef.svsimTestbench__DOT__io_a_8));
    __Vtemp_26[5U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_a_11) 
                       << 0x00000010U) | (IData)(vlSelfRef.svsimTestbench__DOT__io_a_10));
    __Vtemp_26[6U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_a_13) 
                       << 0x00000010U) | (IData)(vlSelfRef.svsimTestbench__DOT__io_a_12));
    __Vtemp_26[7U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_a_15) 
                       << 0x00000010U) | (IData)(vlSelfRef.svsimTestbench__DOT__io_a_14));
    __Vtemp_26[8U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_a_17) 
                       << 0x00000010U) | (IData)(vlSelfRef.svsimTestbench__DOT__io_a_16));
    __Vtemp_26[9U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_a_19) 
                       << 0x00000010U) | (IData)(vlSelfRef.svsimTestbench__DOT__io_a_18));
    __Vtemp_26[10U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_a_21) 
                        << 0x00000010U) | (IData)(vlSelfRef.svsimTestbench__DOT__io_a_20));
    __Vtemp_26[11U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_a_23) 
                        << 0x00000010U) | (IData)(vlSelfRef.svsimTestbench__DOT__io_a_22));
    __Vtemp_26[12U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_a_0) 
                        << 0x00000010U) | (IData)(vlSelfRef.svsimTestbench__DOT__io_a_0));
    __Vtemp_26[13U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_a_0) 
                        << 0x00000010U) | ((IData)(vlSelfRef.svsimTestbench__DOT__io_a_0) 
                                           | ((IData)(vlSelfRef.svsimTestbench__DOT__io_a_0) 
                                              >> 0x00000010U)));
    __Vtemp_26[14U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_a_0) 
                        << 0x00000010U) | ((IData)(vlSelfRef.svsimTestbench__DOT__io_a_0) 
                                           | ((IData)(vlSelfRef.svsimTestbench__DOT__io_a_0) 
                                              >> 0x00000010U)));
    __Vtemp_26[15U] = (((IData)(vlSelfRef.svsimTestbench__DOT__io_a_0) 
                        << 0x00000010U) | ((IData)(vlSelfRef.svsimTestbench__DOT__io_a_0) 
                                           | ((IData)(vlSelfRef.svsimTestbench__DOT__io_a_0) 
                                              >> 0x00000010U)));
    vlSelfRef.svsimTestbench__DOT__dut__DOT____Vcellinp__mult__io_a 
        = (0x0000ffffU & (((0U == (0x0000001fU & ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__idx) 
                                                  << 4U)))
                            ? 0U : (__Vtemp_26[(((IData)(0x0000000fU) 
                                                 + 
                                                 ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__idx) 
                                                  << 4U)) 
                                                >> 5U)] 
                                    << ((IData)(0x00000020U) 
                                        - (0x0000001fU 
                                           & ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__idx) 
                                              << 4U))))) 
                          | (__Vtemp_26[(0x07ffffffU 
                                         & ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__idx) 
                                            >> 1U))] 
                             >> (0x0000001fU & ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__idx) 
                                                << 4U)))));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT___GEN 
        = ((0x00010000U & ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT____Vcellinp__mult__io_a) 
                           << 1U)) | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT____Vcellinp__mult__io_a));
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
                VsvsimTestbench___024root___ico_sequent__TOP__0(vlSelf);
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
                                                                                "/home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-09.115200/workdir-verilator/../generated-sources/testbench.sv", 0x00000403U);
        vlSelfRef.svsimTestbench__DOT__simulationState = 2U;
    }
}

void VsvsimTestbench___024root___nba_sequent__TOP__0(VsvsimTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___nba_sequent__TOP__0\n"); );
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*21:0*/ svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__unnamedblk1__DOT__sum;
    svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__unnamedblk1__DOT__sum = 0;
    CData/*0:0*/ __Vdly__svsimTestbench__DOT__dut__DOT__state;
    __Vdly__svsimTestbench__DOT__dut__DOT__state = 0;
    CData/*4:0*/ __Vdly__svsimTestbench__DOT__dut__DOT__idx;
    __Vdly__svsimTestbench__DOT__dut__DOT__idx = 0;
    CData/*1:0*/ __Vdly__svsimTestbench__DOT__dut__DOT__groupPos;
    __Vdly__svsimTestbench__DOT__dut__DOT__groupPos = 0;
    CData/*0:0*/ __Vdly__svsimTestbench__DOT__dut__DOT__fired;
    __Vdly__svsimTestbench__DOT__dut__DOT__fired = 0;
    IData/*18:0*/ __Vdly__svsimTestbench__DOT__dut__DOT__groupFloor;
    __Vdly__svsimTestbench__DOT__dut__DOT__groupFloor = 0;
    IData/*22:0*/ __Vdly__svsimTestbench__DOT__dut__DOT__acc;
    __Vdly__svsimTestbench__DOT__dut__DOT__acc = 0;
    CData/*0:0*/ __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__state;
    __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__state = 0;
    IData/*16:0*/ __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__magBShift;
    __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__magBShift = 0;
    CData/*0:0*/ __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__state;
    __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__state = 0;
    CData/*2:0*/ __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__digitCnt;
    __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__digitCnt = 0;
    QData/*44:0*/ __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__accReg;
    __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__accReg = 0;
    // Body
    __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__state 
        = vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__state;
    __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__digitCnt 
        = vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__digitCnt;
    __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__accReg 
        = vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__accReg;
    __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__magBShift 
        = vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__magBShift;
    __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__state 
        = vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__state;
    __Vdly__svsimTestbench__DOT__dut__DOT__groupFloor 
        = vlSelfRef.svsimTestbench__DOT__dut__DOT__groupFloor;
    __Vdly__svsimTestbench__DOT__dut__DOT__acc = vlSelfRef.svsimTestbench__DOT__dut__DOT__acc;
    __Vdly__svsimTestbench__DOT__dut__DOT__state = vlSelfRef.svsimTestbench__DOT__dut__DOT__state;
    __Vdly__svsimTestbench__DOT__dut__DOT__fired = vlSelfRef.svsimTestbench__DOT__dut__DOT__fired;
    __Vdly__svsimTestbench__DOT__dut__DOT__groupPos 
        = vlSelfRef.svsimTestbench__DOT__dut__DOT__groupPos;
    __Vdly__svsimTestbench__DOT__dut__DOT__idx = vlSelfRef.svsimTestbench__DOT__dut__DOT__idx;
    if (vlSelfRef.svsimTestbench__DOT__reset) {
        __Vdly__svsimTestbench__DOT__dut__DOT__state = 0U;
        __Vdly__svsimTestbench__DOT__dut__DOT__idx = 0U;
        __Vdly__svsimTestbench__DOT__dut__DOT__groupPos = 0U;
        __Vdly__svsimTestbench__DOT__dut__DOT__fired = 0U;
        __Vdly__svsimTestbench__DOT__dut__DOT__groupFloor = 0U;
        __Vdly__svsimTestbench__DOT__dut__DOT__acc = 0U;
        vlSelfRef.svsimTestbench__DOT__dut__DOT__prefixRegs_0 = 0U;
        vlSelfRef.svsimTestbench__DOT__dut__DOT__prefixRegs_1 = 0U;
        vlSelfRef.svsimTestbench__DOT__dut__DOT__prefixRegs_2 = 0U;
        vlSelfRef.svsimTestbench__DOT__dut__DOT__prefixRegs_3 = 0U;
        vlSelfRef.svsimTestbench__DOT__dut__DOT__doneReg = 0U;
        vlSelfRef.svsimTestbench__DOT__dut__DOT__resultReg = 0U;
    } else {
        vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___nextGroupFloor_T 
            = (0x0007ffffU & (((0x00060000U & ((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__resultReg 
                                                                      >> 0x1fU))))) 
                                               << 0x00000011U)) 
                               | (0x0001ffffU & (IData)(
                                                        (vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__resultReg 
                                                         >> 0x0fU)))) 
                              + vlSelfRef.svsimTestbench__DOT__dut__DOT__groupFloor));
        vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT__closesGroup 
            = (3U == (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__groupPos));
        vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT__isLast 
            = (0x17U == (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__idx));
        vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___GEN_5 
            = (0x000fffffU & ((7U & (((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__selector__DOT___GEN) 
                                      >> 3U) + ((4U 
                                                 < 
                                                 (7U 
                                                  & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__selector__DOT___GEN))) 
                                                | (IData)(
                                                          (0x0cU 
                                                           == 
                                                           (0x0fU 
                                                            & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__selector__DOT___GEN))))))) 
                              + ((0x00080000U & (vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___nextGroupFloor_T 
                                                 << 1U)) 
                                 | vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___nextGroupFloor_T)));
        vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___nextAcc_T_1 
            = (0x007fffffU & (((0x00700000U & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___GEN_5 
                                                              >> 0x13U)))) 
                                               << 0x00000014U)) 
                               | vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___GEN_5) 
                              + vlSelfRef.svsimTestbench__DOT__dut__DOT__acc));
        vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___GEN_6 
            = ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT__closesGroup) 
               & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT__isLast));
        vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___GEN_7 
            = (((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__state) 
                & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__doneReg)) 
               & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___GEN_6));
        vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___GEN_8 
            = (((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__state) 
                & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__doneReg)) 
               & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT__closesGroup));
        if (vlSelfRef.svsimTestbench__DOT__dut__DOT__state) {
            vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_9 
                = ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__state) 
                   & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__doneReg));
            if (vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_9) {
                if (vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT__closesGroup) {
                    if ((1U & (~ (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT__isLast)))) {
                        __Vdly__svsimTestbench__DOT__dut__DOT__idx 
                            = (0x0000001fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__idx)));
                        __Vdly__svsimTestbench__DOT__dut__DOT__groupPos = 0U;
                        __Vdly__svsimTestbench__DOT__dut__DOT__groupFloor = 0U;
                    }
                } else {
                    __Vdly__svsimTestbench__DOT__dut__DOT__idx 
                        = (0x0000001fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__idx)));
                    __Vdly__svsimTestbench__DOT__dut__DOT__groupPos 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__groupPos)));
                    __Vdly__svsimTestbench__DOT__dut__DOT__groupFloor 
                        = vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___nextGroupFloor_T;
                }
            }
            if ((1U & (~ ((~ (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___GEN_8)) 
                          | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT__isLast))))) {
                __Vdly__svsimTestbench__DOT__dut__DOT__acc 
                    = vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___nextAcc_T_1;
            }
            __Vdly__svsimTestbench__DOT__dut__DOT__state 
                = (1U & (~ (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___GEN_7)));
            if ((1U & (~ (((~ (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_9)) 
                           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT__closesGroup)) 
                          | (0U != (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__groupPos)))))) {
                vlSelfRef.svsimTestbench__DOT__dut__DOT__prefixRegs_0 
                    = (7U & (IData)((vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__resultReg 
                                     >> 0x0cU)));
            }
            if ((1U & (~ (((~ (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_9)) 
                           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT__closesGroup)) 
                          | (1U != (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__groupPos)))))) {
                vlSelfRef.svsimTestbench__DOT__dut__DOT__prefixRegs_1 
                    = (7U & (IData)((vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__resultReg 
                                     >> 0x0cU)));
            }
            if ((1U & (~ (((~ (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_9)) 
                           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT__closesGroup)) 
                          | (2U != (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__groupPos)))))) {
                vlSelfRef.svsimTestbench__DOT__dut__DOT__prefixRegs_2 
                    = (7U & (IData)((vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__resultReg 
                                     >> 0x0cU)));
            }
            if ((1U & (~ (((~ (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_9)) 
                           | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT__closesGroup)) 
                          | (~ (3U == (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__groupPos))))))) {
                vlSelfRef.svsimTestbench__DOT__dut__DOT__prefixRegs_3 
                    = (7U & (IData)((vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__resultReg 
                                     >> 0x0cU)));
            }
            __Vdly__svsimTestbench__DOT__dut__DOT__fired 
                = (1U & ((~ (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__doneReg)) 
                         | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___GEN_6)));
        } else {
            if (vlSelfRef.svsimTestbench__DOT__io_start) {
                __Vdly__svsimTestbench__DOT__dut__DOT__state = 1U;
                __Vdly__svsimTestbench__DOT__dut__DOT__idx = 0U;
                __Vdly__svsimTestbench__DOT__dut__DOT__groupPos = 0U;
                __Vdly__svsimTestbench__DOT__dut__DOT__groupFloor = 0U;
                __Vdly__svsimTestbench__DOT__dut__DOT__acc = 0U;
                vlSelfRef.svsimTestbench__DOT__dut__DOT__prefixRegs_0 = 0U;
                vlSelfRef.svsimTestbench__DOT__dut__DOT__prefixRegs_1 = 0U;
                vlSelfRef.svsimTestbench__DOT__dut__DOT__prefixRegs_2 = 0U;
                vlSelfRef.svsimTestbench__DOT__dut__DOT__prefixRegs_3 = 0U;
            } else {
                __Vdly__svsimTestbench__DOT__dut__DOT__state = 0U;
            }
            __Vdly__svsimTestbench__DOT__dut__DOT__fired 
                = (1U & ((~ (IData)(vlSelfRef.svsimTestbench__DOT__io_start)) 
                         & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fired)));
        }
        vlSelfRef.svsimTestbench__DOT__dut__DOT__doneReg 
            = (((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__state) 
                & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___GEN_8)) 
               & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT__isLast));
        if (((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__state) 
             & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___GEN_7))) {
            vlSelfRef.svsimTestbench__DOT__dut__DOT__resultReg 
                = (0x000fffffU & vlSelfRef.svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___nextAcc_T_1);
        }
    }
    vlSelfRef.svsimTestbench__DOT__dut__DOT__groupFloor 
        = __Vdly__svsimTestbench__DOT__dut__DOT__groupFloor;
    vlSelfRef.svsimTestbench__DOT__dut__DOT__acc = __Vdly__svsimTestbench__DOT__dut__DOT__acc;
    vlSelfRef.svsimTestbench__DOT__dut__DOT__state 
        = __Vdly__svsimTestbench__DOT__dut__DOT__state;
    vlSelfRef.svsimTestbench__DOT__dut__DOT__fired 
        = __Vdly__svsimTestbench__DOT__dut__DOT__fired;
    vlSelfRef.svsimTestbench__DOT__dut__DOT__groupPos 
        = __Vdly__svsimTestbench__DOT__dut__DOT__groupPos;
    vlSelfRef.svsimTestbench__DOT__dut__DOT__idx = __Vdly__svsimTestbench__DOT__dut__DOT__idx;
    vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__doneReg 
        = ((1U & (~ (IData)(vlSelfRef.svsimTestbench__DOT__reset))) 
           && (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner_io_clearAcc));
    if (vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__state) {
        __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__magBShift 
            = (0x00001fffU & (vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__magBShift 
                              >> 4U));
    } else if (vlSelfRef.svsimTestbench__DOT__dut__DOT____Vcellinp__mult__io_start) {
        vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__unnamedblk3__DOT___GEN_2 
            = ((0x00010000U & ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT____Vcellinp__mult__io_b) 
                               << 1U)) | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT____Vcellinp__mult__io_b));
        __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__magBShift 
            = (0x0001ffffU & ((0x00008000U & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT____Vcellinp__mult__io_b))
                               ? (- vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__unnamedblk3__DOT___GEN_2)
                               : vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__unnamedblk3__DOT___GEN_2));
    }
    if (vlSelfRef.svsimTestbench__DOT__reset) {
        __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__state = 0U;
        vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__resultReg = 0ULL;
    } else {
        if (vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__state) {
            vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__unnamedblk1__DOT___GEN_0 
                = vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__macValidReg;
            __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__state 
                = (1U & (~ (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__unnamedblk1__DOT___GEN_0)));
        } else {
            vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__unnamedblk1__DOT___GEN_0 = 0U;
            __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__state 
                = (1U & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT____Vcellinp__mult__io_start));
        }
        if (((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__state) 
             & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__unnamedblk1__DOT___GEN_0))) {
            vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_1 
                = vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__accReg;
            vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__resultReg 
                = (0x00003fffffffffffULL & ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__signReg)
                                             ? (- vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_1)
                                             : vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_1));
        }
    }
    if (((~ (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__state)) 
         & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT____Vcellinp__mult__io_start))) {
        vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__signReg 
            = (1U & (((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT____Vcellinp__mult__io_a) 
                      ^ (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT____Vcellinp__mult__io_b)) 
                     >> 0x0fU));
    }
    vlSelfRef.svsimTestbench__DOT__dut__DOT____Vcellinp__mult__io_start 
        = ((~ (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__fired)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__state));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__selector__DOT___GEN 
        = (0x0000003fU & ((IData)(2U) + ((0x0000001fU 
                                          & ((0x0000000fU 
                                              & ((7U 
                                                  & (((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__doneReg) 
                                                      & (0U 
                                                         == (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__groupPos)))
                                                      ? (IData)(
                                                                (vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__resultReg 
                                                                 >> 0x0000000cU))
                                                      : (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__prefixRegs_0))) 
                                                 + 
                                                 (7U 
                                                  & (((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__doneReg) 
                                                      & (1U 
                                                         == (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__groupPos)))
                                                      ? (IData)(
                                                                (vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__resultReg 
                                                                 >> 0x0000000cU))
                                                      : (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__prefixRegs_1))))) 
                                             + (7U 
                                                & (((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__doneReg) 
                                                    & (2U 
                                                       == (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__groupPos)))
                                                    ? (IData)(
                                                              (vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__resultReg 
                                                               >> 0x0000000cU))
                                                    : (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__prefixRegs_2))))) 
                                         + (7U & (((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__doneReg) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__groupPos)))
                                                   ? (IData)(
                                                             (vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__resultReg 
                                                              >> 0x0000000cU))
                                                   : (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__prefixRegs_3))))));
    svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__unnamedblk1__DOT__sum 
        = (0x003fffffU & (vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__pReg 
                          + (0x001fffffU & (vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__regA 
                                            * (0x0000000fU 
                                               & vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__magBShift)))));
    if (vlSelfRef.svsimTestbench__DOT__reset) {
        __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__state = 0U;
        __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__digitCnt = 0U;
        vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__pReg = 0U;
        __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__accReg = 0ULL;
        vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__macValidReg = 0U;
    } else {
        vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN 
            = ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__state) 
               & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__state));
        vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__unnamedblk1__DOT__unnamedblk2__DOT__isLast 
            = (4U == (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__digitCnt));
        vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0 
            = (((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__state) 
                & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__state)) 
               & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__unnamedblk1__DOT__unnamedblk2__DOT__isLast));
        if (vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__state) {
            if ((1U & (~ ((~ (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN)) 
                          | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__unnamedblk1__DOT__unnamedblk2__DOT__isLast))))) {
                __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__digitCnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__digitCnt)));
            }
            __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__state 
                = (1U & (~ (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0)));
            if (vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) {
                vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__pReg 
                    = (0x0003ffffU & (svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__unnamedblk1__DOT__sum 
                                      >> 4U));
            }
        } else if (vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT____Vcellinp__inner__io_start) {
            __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__state = 1U;
            __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__digitCnt = 0U;
            vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__pReg = 0U;
        } else {
            __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__state = 0U;
        }
        if (vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner_io_clearAcc) {
            __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__accReg = 0ULL;
        } else if (((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__state) 
                    & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0))) {
            __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__accReg 
                = (0x00001fffffffffffULL & (vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__accReg 
                                            + (((QData)((IData)(
                                                                (0x001fffffU 
                                                                 & svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__unnamedblk1__DOT__sum))) 
                                                << 0x00000010U) 
                                               | (QData)((IData)(
                                                                 ((((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__lowChunks_3) 
                                                                    << 0x0000000cU) 
                                                                   | ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__lowChunks_2) 
                                                                      << 8U)) 
                                                                  | (((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__lowChunks_1) 
                                                                      << 4U) 
                                                                     | (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__lowChunks_0))))))));
        }
        vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__macValidReg 
            = (((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__state) 
                & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN)) 
               & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__unnamedblk1__DOT__unnamedblk2__DOT__isLast));
    }
    if (((~ (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__state)) 
         & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT____Vcellinp__inner__io_start))) {
        vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__regA 
            = (0x0001ffffU & ((0x00008000U & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT____Vcellinp__mult__io_a))
                               ? (- vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT___GEN)
                               : vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT___GEN));
    }
    if ((((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__state) 
          & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__state)) 
         & (0U == (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__digitCnt)))) {
        vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__lowChunks_0 
            = (0x0000000fU & svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__unnamedblk1__DOT__sum);
    }
    if ((((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__state) 
          & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__state)) 
         & (1U == (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__digitCnt)))) {
        vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__lowChunks_1 
            = (0x0000000fU & svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__unnamedblk1__DOT__sum);
    }
    if ((((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__state) 
          & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__state)) 
         & (2U == (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__digitCnt)))) {
        vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__lowChunks_2 
            = (0x0000000fU & svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__unnamedblk1__DOT__sum);
    }
    if ((((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__state) 
          & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__state)) 
         & (3U == (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__digitCnt)))) {
        vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__lowChunks_3 
            = (0x0000000fU & svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__unnamedblk1__DOT__sum);
    }
    vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__magBShift 
        = __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__magBShift;
    vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__state 
        = __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__state;
    vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__digitCnt 
        = __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__digitCnt;
    vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__accReg 
        = __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__accReg;
    vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__state 
        = __Vdly__svsimTestbench__DOT__dut__DOT__mult__DOT__state;
    vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT____Vcellinp__inner__io_start 
        = ((~ (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__state)) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT____Vcellinp__mult__io_start));
    vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner_io_clearAcc 
        = ((IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__state) 
           & (IData)(vlSelfRef.svsimTestbench__DOT__dut__DOT__mult__DOT__inner__DOT__macValidReg));
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
                                                        ((((IData)(vlSelfRef.svsimTestbench__DOT__clock) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__svsimTestbench__DOT__clock__0))) 
                                                          << 1U) 
                                                         | (vlSelfRef.svsimTestbench__DOT__simulationState 
                                                            != vlSelfRef.__Vtrigprevexpr___TOP__svsimTestbench__DOT__simulationState__0))));
        vlSelfRef.__Vtrigprevexpr___TOP__svsimTestbench__DOT__simulationState__0 
            = vlSelfRef.svsimTestbench__DOT__simulationState;
        vlSelfRef.__Vtrigprevexpr___TOP__svsimTestbench__DOT__clock__0 
            = vlSelfRef.svsimTestbench__DOT__clock;
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
            if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
                VsvsimTestbench___024root___nba_sequent__TOP__0(vlSelf);
            }
            if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) 
                 | (2ULL & vlSelfRef.__VnbaTriggered[0U]))) {
                VsvsimTestbench___024root___ico_sequent__TOP__0(vlSelf);
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
            VL_FATAL_MT("/home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-09.115200/workdir-verilator/../generated-sources/testbench.sv", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
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
            VL_FATAL_MT("/home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-09.115200/workdir-verilator/../generated-sources/testbench.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VsvsimTestbench___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-09.115200/workdir-verilator/../generated-sources/testbench.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
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
