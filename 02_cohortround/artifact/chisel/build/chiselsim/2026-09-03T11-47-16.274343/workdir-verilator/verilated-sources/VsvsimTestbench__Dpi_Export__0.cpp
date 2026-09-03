// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.

#include "VsvsimTestbench.h"
#include "VsvsimTestbench__Syms.h"
#include "verilated_dpi.h"


void VsvsimTestbench::getBitWidthImpl_clock(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_clock\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_clock");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_clock_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_clock_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_clock(const svBitVecVal* value_clock) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_clock\n"); );
    // Locals
    CData/*0:0*/ value_clock__Vcvt;
    value_clock__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_clock");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_clock_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_clock_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_clock__Vcvt, value_clock + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_clock__Vcvt);
}

void VsvsimTestbench::getBitsImpl_clock(svBitVecVal* value_clock) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_clock\n"); );
    // Locals
    CData/*0:0*/ value_clock__Vcvt;
    value_clock__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_clock");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_clock_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_clock_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_clock__Vcvt);
    VL_SET_SVBV_I(1, value_clock, value_clock__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_reset(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_reset\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_reset");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_reset_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_reset_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_reset(const svBitVecVal* value_reset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_reset\n"); );
    // Locals
    CData/*0:0*/ value_reset__Vcvt;
    value_reset__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_reset");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_reset_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_reset_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_reset__Vcvt, value_reset + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_reset__Vcvt);
}

void VsvsimTestbench::getBitsImpl_reset(svBitVecVal* value_reset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_reset\n"); );
    // Locals
    CData/*0:0*/ value_reset__Vcvt;
    value_reset__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_reset");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_reset_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_reset_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_reset__Vcvt);
    VL_SET_SVBV_I(1, value_reset, value_reset__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_result(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_result\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_result");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_result_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_result_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_io_result(svBitVecVal* value_io_result) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_result\n"); );
    // Locals
    IData/*19:0*/ value_io_result__Vcvt;
    value_io_result__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_result");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_result_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_result_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_result__Vcvt);
    VL_SET_SVBV_I(20, value_io_result, value_io_result__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_done(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_done\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_done");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_done_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_done_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_io_done(svBitVecVal* value_io_done) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_done\n"); );
    // Locals
    CData/*0:0*/ value_io_done__Vcvt;
    value_io_done__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_done");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_done_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_done_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_done__Vcvt);
    VL_SET_SVBV_I(1, value_io_done, value_io_done__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_ready(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_ready\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_ready");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_ready_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_ready_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_io_ready(svBitVecVal* value_io_ready) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_ready\n"); );
    // Locals
    CData/*0:0*/ value_io_ready__Vcvt;
    value_io_ready__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_ready");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_ready_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_ready_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_ready__Vcvt);
    VL_SET_SVBV_I(1, value_io_ready, value_io_ready__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_start(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_start\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_start");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_start_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_start_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_start(const svBitVecVal* value_io_start) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_start\n"); );
    // Locals
    CData/*0:0*/ value_io_start__Vcvt;
    value_io_start__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_start");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_start_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_start_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_C_SVBV(1, value_io_start__Vcvt, value_io_start + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_start__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_start(svBitVecVal* value_io_start) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_start\n"); );
    // Locals
    CData/*0:0*/ value_io_start__Vcvt;
    value_io_start__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_start");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_start_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_start_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_start__Vcvt);
    VL_SET_SVBV_I(1, value_io_start, value_io_start__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_b_0(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_b_0\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_b_0");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_b_0_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_b_0_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_b_0(const svBitVecVal* value_io_b_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_b_0\n"); );
    // Locals
    SData/*15:0*/ value_io_b_0__Vcvt;
    value_io_b_0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_b_0");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_b_0_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_b_0_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_b_0__Vcvt, value_io_b_0 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_0__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_b_0(svBitVecVal* value_io_b_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_b_0\n"); );
    // Locals
    SData/*15:0*/ value_io_b_0__Vcvt;
    value_io_b_0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_b_0");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_b_0_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_b_0_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_0__Vcvt);
    VL_SET_SVBV_I(16, value_io_b_0, value_io_b_0__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_b_1(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_b_1\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_b_1");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_b_1_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_b_1_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_b_1(const svBitVecVal* value_io_b_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_b_1\n"); );
    // Locals
    SData/*15:0*/ value_io_b_1__Vcvt;
    value_io_b_1__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_b_1");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_b_1_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_b_1_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_b_1__Vcvt, value_io_b_1 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_1__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_b_1(svBitVecVal* value_io_b_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_b_1\n"); );
    // Locals
    SData/*15:0*/ value_io_b_1__Vcvt;
    value_io_b_1__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_b_1");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_b_1_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_b_1_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_1__Vcvt);
    VL_SET_SVBV_I(16, value_io_b_1, value_io_b_1__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_b_2(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_b_2\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_b_2");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_b_2_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_b_2_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_b_2(const svBitVecVal* value_io_b_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_b_2\n"); );
    // Locals
    SData/*15:0*/ value_io_b_2__Vcvt;
    value_io_b_2__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_b_2");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_b_2_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_b_2_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_b_2__Vcvt, value_io_b_2 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_2__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_b_2(svBitVecVal* value_io_b_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_b_2\n"); );
    // Locals
    SData/*15:0*/ value_io_b_2__Vcvt;
    value_io_b_2__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_b_2");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_b_2_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_b_2_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_2__Vcvt);
    VL_SET_SVBV_I(16, value_io_b_2, value_io_b_2__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_b_3(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_b_3\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_b_3");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_b_3_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_b_3_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_b_3(const svBitVecVal* value_io_b_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_b_3\n"); );
    // Locals
    SData/*15:0*/ value_io_b_3__Vcvt;
    value_io_b_3__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_b_3");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_b_3_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_b_3_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_b_3__Vcvt, value_io_b_3 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_3__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_b_3(svBitVecVal* value_io_b_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_b_3\n"); );
    // Locals
    SData/*15:0*/ value_io_b_3__Vcvt;
    value_io_b_3__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_b_3");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_b_3_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_b_3_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_3__Vcvt);
    VL_SET_SVBV_I(16, value_io_b_3, value_io_b_3__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_b_4(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_b_4\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_b_4");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_b_4_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_b_4_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_b_4(const svBitVecVal* value_io_b_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_b_4\n"); );
    // Locals
    SData/*15:0*/ value_io_b_4__Vcvt;
    value_io_b_4__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_b_4");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_b_4_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_b_4_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_b_4__Vcvt, value_io_b_4 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_4__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_b_4(svBitVecVal* value_io_b_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_b_4\n"); );
    // Locals
    SData/*15:0*/ value_io_b_4__Vcvt;
    value_io_b_4__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_b_4");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_b_4_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_b_4_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_4__Vcvt);
    VL_SET_SVBV_I(16, value_io_b_4, value_io_b_4__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_b_5(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_b_5\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_b_5");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_b_5_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_b_5_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_b_5(const svBitVecVal* value_io_b_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_b_5\n"); );
    // Locals
    SData/*15:0*/ value_io_b_5__Vcvt;
    value_io_b_5__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_b_5");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_b_5_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_b_5_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_b_5__Vcvt, value_io_b_5 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_5__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_b_5(svBitVecVal* value_io_b_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_b_5\n"); );
    // Locals
    SData/*15:0*/ value_io_b_5__Vcvt;
    value_io_b_5__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_b_5");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_b_5_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_b_5_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_5__Vcvt);
    VL_SET_SVBV_I(16, value_io_b_5, value_io_b_5__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_b_6(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_b_6\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_b_6");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_b_6_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_b_6_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_b_6(const svBitVecVal* value_io_b_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_b_6\n"); );
    // Locals
    SData/*15:0*/ value_io_b_6__Vcvt;
    value_io_b_6__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_b_6");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_b_6_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_b_6_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_b_6__Vcvt, value_io_b_6 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_6__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_b_6(svBitVecVal* value_io_b_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_b_6\n"); );
    // Locals
    SData/*15:0*/ value_io_b_6__Vcvt;
    value_io_b_6__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_b_6");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_b_6_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_b_6_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_6__Vcvt);
    VL_SET_SVBV_I(16, value_io_b_6, value_io_b_6__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_b_7(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_b_7\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_b_7");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_b_7_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_b_7_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_b_7(const svBitVecVal* value_io_b_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_b_7\n"); );
    // Locals
    SData/*15:0*/ value_io_b_7__Vcvt;
    value_io_b_7__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_b_7");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_b_7_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_b_7_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_b_7__Vcvt, value_io_b_7 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_7__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_b_7(svBitVecVal* value_io_b_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_b_7\n"); );
    // Locals
    SData/*15:0*/ value_io_b_7__Vcvt;
    value_io_b_7__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_b_7");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_b_7_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_b_7_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_7__Vcvt);
    VL_SET_SVBV_I(16, value_io_b_7, value_io_b_7__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_b_8(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_b_8\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_b_8");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_b_8_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_b_8_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_b_8(const svBitVecVal* value_io_b_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_b_8\n"); );
    // Locals
    SData/*15:0*/ value_io_b_8__Vcvt;
    value_io_b_8__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_b_8");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_b_8_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_b_8_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_b_8__Vcvt, value_io_b_8 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_8__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_b_8(svBitVecVal* value_io_b_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_b_8\n"); );
    // Locals
    SData/*15:0*/ value_io_b_8__Vcvt;
    value_io_b_8__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_b_8");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_b_8_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_b_8_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_8__Vcvt);
    VL_SET_SVBV_I(16, value_io_b_8, value_io_b_8__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_b_9(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_b_9\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_b_9");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_b_9_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_b_9_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_b_9(const svBitVecVal* value_io_b_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_b_9\n"); );
    // Locals
    SData/*15:0*/ value_io_b_9__Vcvt;
    value_io_b_9__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_b_9");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_b_9_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_b_9_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_b_9__Vcvt, value_io_b_9 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_9__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_b_9(svBitVecVal* value_io_b_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_b_9\n"); );
    // Locals
    SData/*15:0*/ value_io_b_9__Vcvt;
    value_io_b_9__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_b_9");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_b_9_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_b_9_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_9__Vcvt);
    VL_SET_SVBV_I(16, value_io_b_9, value_io_b_9__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_b_10(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_b_10\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_b_10");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_b_10_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_b_10_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_b_10(const svBitVecVal* value_io_b_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_b_10\n"); );
    // Locals
    SData/*15:0*/ value_io_b_10__Vcvt;
    value_io_b_10__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_b_10");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_b_10_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_b_10_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_b_10__Vcvt, value_io_b_10 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_10__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_b_10(svBitVecVal* value_io_b_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_b_10\n"); );
    // Locals
    SData/*15:0*/ value_io_b_10__Vcvt;
    value_io_b_10__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_b_10");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_b_10_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_b_10_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_10__Vcvt);
    VL_SET_SVBV_I(16, value_io_b_10, value_io_b_10__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_b_11(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_b_11\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_b_11");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_b_11_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_b_11_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_b_11(const svBitVecVal* value_io_b_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_b_11\n"); );
    // Locals
    SData/*15:0*/ value_io_b_11__Vcvt;
    value_io_b_11__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_b_11");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_b_11_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_b_11_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_b_11__Vcvt, value_io_b_11 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_11__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_b_11(svBitVecVal* value_io_b_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_b_11\n"); );
    // Locals
    SData/*15:0*/ value_io_b_11__Vcvt;
    value_io_b_11__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_b_11");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_b_11_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_b_11_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_11__Vcvt);
    VL_SET_SVBV_I(16, value_io_b_11, value_io_b_11__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_b_12(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_b_12\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_b_12");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_b_12_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_b_12_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_b_12(const svBitVecVal* value_io_b_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_b_12\n"); );
    // Locals
    SData/*15:0*/ value_io_b_12__Vcvt;
    value_io_b_12__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_b_12");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_b_12_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_b_12_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_b_12__Vcvt, value_io_b_12 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_12__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_b_12(svBitVecVal* value_io_b_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_b_12\n"); );
    // Locals
    SData/*15:0*/ value_io_b_12__Vcvt;
    value_io_b_12__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_b_12");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_b_12_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_b_12_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_12__Vcvt);
    VL_SET_SVBV_I(16, value_io_b_12, value_io_b_12__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_b_13(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_b_13\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_b_13");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_b_13_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_b_13_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_b_13(const svBitVecVal* value_io_b_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_b_13\n"); );
    // Locals
    SData/*15:0*/ value_io_b_13__Vcvt;
    value_io_b_13__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_b_13");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_b_13_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_b_13_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_b_13__Vcvt, value_io_b_13 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_13__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_b_13(svBitVecVal* value_io_b_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_b_13\n"); );
    // Locals
    SData/*15:0*/ value_io_b_13__Vcvt;
    value_io_b_13__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_b_13");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_b_13_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_b_13_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_13__Vcvt);
    VL_SET_SVBV_I(16, value_io_b_13, value_io_b_13__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_b_14(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_b_14\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_b_14");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_b_14_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_b_14_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_b_14(const svBitVecVal* value_io_b_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_b_14\n"); );
    // Locals
    SData/*15:0*/ value_io_b_14__Vcvt;
    value_io_b_14__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_b_14");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_b_14_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_b_14_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_b_14__Vcvt, value_io_b_14 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_14__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_b_14(svBitVecVal* value_io_b_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_b_14\n"); );
    // Locals
    SData/*15:0*/ value_io_b_14__Vcvt;
    value_io_b_14__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_b_14");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_b_14_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_b_14_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_14__Vcvt);
    VL_SET_SVBV_I(16, value_io_b_14, value_io_b_14__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_b_15(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_b_15\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_b_15");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_b_15_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_b_15_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_b_15(const svBitVecVal* value_io_b_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_b_15\n"); );
    // Locals
    SData/*15:0*/ value_io_b_15__Vcvt;
    value_io_b_15__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_b_15");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_b_15_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_b_15_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_b_15__Vcvt, value_io_b_15 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_15__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_b_15(svBitVecVal* value_io_b_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_b_15\n"); );
    // Locals
    SData/*15:0*/ value_io_b_15__Vcvt;
    value_io_b_15__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_b_15");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_b_15_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_b_15_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_15__Vcvt);
    VL_SET_SVBV_I(16, value_io_b_15, value_io_b_15__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_b_16(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_b_16\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_b_16");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_b_16_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_b_16_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_b_16(const svBitVecVal* value_io_b_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_b_16\n"); );
    // Locals
    SData/*15:0*/ value_io_b_16__Vcvt;
    value_io_b_16__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_b_16");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_b_16_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_b_16_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_b_16__Vcvt, value_io_b_16 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_16__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_b_16(svBitVecVal* value_io_b_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_b_16\n"); );
    // Locals
    SData/*15:0*/ value_io_b_16__Vcvt;
    value_io_b_16__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_b_16");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_b_16_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_b_16_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_16__Vcvt);
    VL_SET_SVBV_I(16, value_io_b_16, value_io_b_16__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_b_17(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_b_17\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_b_17");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_b_17_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_b_17_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_b_17(const svBitVecVal* value_io_b_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_b_17\n"); );
    // Locals
    SData/*15:0*/ value_io_b_17__Vcvt;
    value_io_b_17__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_b_17");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_b_17_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_b_17_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_b_17__Vcvt, value_io_b_17 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_17__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_b_17(svBitVecVal* value_io_b_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_b_17\n"); );
    // Locals
    SData/*15:0*/ value_io_b_17__Vcvt;
    value_io_b_17__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_b_17");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_b_17_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_b_17_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_17__Vcvt);
    VL_SET_SVBV_I(16, value_io_b_17, value_io_b_17__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_b_18(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_b_18\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_b_18");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_b_18_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_b_18_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_b_18(const svBitVecVal* value_io_b_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_b_18\n"); );
    // Locals
    SData/*15:0*/ value_io_b_18__Vcvt;
    value_io_b_18__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_b_18");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_b_18_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_b_18_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_b_18__Vcvt, value_io_b_18 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_18__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_b_18(svBitVecVal* value_io_b_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_b_18\n"); );
    // Locals
    SData/*15:0*/ value_io_b_18__Vcvt;
    value_io_b_18__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_b_18");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_b_18_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_b_18_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_18__Vcvt);
    VL_SET_SVBV_I(16, value_io_b_18, value_io_b_18__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_b_19(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_b_19\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_b_19");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_b_19_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_b_19_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_b_19(const svBitVecVal* value_io_b_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_b_19\n"); );
    // Locals
    SData/*15:0*/ value_io_b_19__Vcvt;
    value_io_b_19__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_b_19");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_b_19_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_b_19_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_b_19__Vcvt, value_io_b_19 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_19__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_b_19(svBitVecVal* value_io_b_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_b_19\n"); );
    // Locals
    SData/*15:0*/ value_io_b_19__Vcvt;
    value_io_b_19__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_b_19");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_b_19_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_b_19_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_19__Vcvt);
    VL_SET_SVBV_I(16, value_io_b_19, value_io_b_19__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_b_20(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_b_20\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_b_20");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_b_20_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_b_20_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_b_20(const svBitVecVal* value_io_b_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_b_20\n"); );
    // Locals
    SData/*15:0*/ value_io_b_20__Vcvt;
    value_io_b_20__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_b_20");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_b_20_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_b_20_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_b_20__Vcvt, value_io_b_20 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_20__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_b_20(svBitVecVal* value_io_b_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_b_20\n"); );
    // Locals
    SData/*15:0*/ value_io_b_20__Vcvt;
    value_io_b_20__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_b_20");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_b_20_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_b_20_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_20__Vcvt);
    VL_SET_SVBV_I(16, value_io_b_20, value_io_b_20__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_b_21(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_b_21\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_b_21");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_b_21_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_b_21_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_b_21(const svBitVecVal* value_io_b_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_b_21\n"); );
    // Locals
    SData/*15:0*/ value_io_b_21__Vcvt;
    value_io_b_21__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_b_21");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_b_21_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_b_21_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_b_21__Vcvt, value_io_b_21 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_21__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_b_21(svBitVecVal* value_io_b_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_b_21\n"); );
    // Locals
    SData/*15:0*/ value_io_b_21__Vcvt;
    value_io_b_21__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_b_21");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_b_21_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_b_21_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_21__Vcvt);
    VL_SET_SVBV_I(16, value_io_b_21, value_io_b_21__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_b_22(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_b_22\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_b_22");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_b_22_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_b_22_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_b_22(const svBitVecVal* value_io_b_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_b_22\n"); );
    // Locals
    SData/*15:0*/ value_io_b_22__Vcvt;
    value_io_b_22__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_b_22");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_b_22_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_b_22_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_b_22__Vcvt, value_io_b_22 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_22__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_b_22(svBitVecVal* value_io_b_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_b_22\n"); );
    // Locals
    SData/*15:0*/ value_io_b_22__Vcvt;
    value_io_b_22__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_b_22");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_b_22_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_b_22_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_22__Vcvt);
    VL_SET_SVBV_I(16, value_io_b_22, value_io_b_22__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_b_23(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_b_23\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_b_23");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_b_23_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_b_23_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_b_23(const svBitVecVal* value_io_b_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_b_23\n"); );
    // Locals
    SData/*15:0*/ value_io_b_23__Vcvt;
    value_io_b_23__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_b_23");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_b_23_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_b_23_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_b_23__Vcvt, value_io_b_23 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_23__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_b_23(svBitVecVal* value_io_b_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_b_23\n"); );
    // Locals
    SData/*15:0*/ value_io_b_23__Vcvt;
    value_io_b_23__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_b_23");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_b_23_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_b_23_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_b_23__Vcvt);
    VL_SET_SVBV_I(16, value_io_b_23, value_io_b_23__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_a_0(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_a_0\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_a_0");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_a_0_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_a_0_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_a_0(const svBitVecVal* value_io_a_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_a_0\n"); );
    // Locals
    SData/*15:0*/ value_io_a_0__Vcvt;
    value_io_a_0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_a_0");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_a_0_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_a_0_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_a_0__Vcvt, value_io_a_0 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_0__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_a_0(svBitVecVal* value_io_a_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_a_0\n"); );
    // Locals
    SData/*15:0*/ value_io_a_0__Vcvt;
    value_io_a_0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_a_0");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_a_0_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_a_0_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_0__Vcvt);
    VL_SET_SVBV_I(16, value_io_a_0, value_io_a_0__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_a_1(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_a_1\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_a_1");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_a_1_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_a_1_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_a_1(const svBitVecVal* value_io_a_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_a_1\n"); );
    // Locals
    SData/*15:0*/ value_io_a_1__Vcvt;
    value_io_a_1__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_a_1");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_a_1_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_a_1_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_a_1__Vcvt, value_io_a_1 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_1__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_a_1(svBitVecVal* value_io_a_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_a_1\n"); );
    // Locals
    SData/*15:0*/ value_io_a_1__Vcvt;
    value_io_a_1__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_a_1");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_a_1_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_a_1_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_1__Vcvt);
    VL_SET_SVBV_I(16, value_io_a_1, value_io_a_1__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_a_2(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_a_2\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_a_2");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_a_2_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_a_2_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_a_2(const svBitVecVal* value_io_a_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_a_2\n"); );
    // Locals
    SData/*15:0*/ value_io_a_2__Vcvt;
    value_io_a_2__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_a_2");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_a_2_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_a_2_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_a_2__Vcvt, value_io_a_2 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_2__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_a_2(svBitVecVal* value_io_a_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_a_2\n"); );
    // Locals
    SData/*15:0*/ value_io_a_2__Vcvt;
    value_io_a_2__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_a_2");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_a_2_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_a_2_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_2__Vcvt);
    VL_SET_SVBV_I(16, value_io_a_2, value_io_a_2__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_a_3(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_a_3\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_a_3");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_a_3_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_a_3_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_a_3(const svBitVecVal* value_io_a_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_a_3\n"); );
    // Locals
    SData/*15:0*/ value_io_a_3__Vcvt;
    value_io_a_3__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_a_3");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_a_3_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_a_3_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_a_3__Vcvt, value_io_a_3 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_3__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_a_3(svBitVecVal* value_io_a_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_a_3\n"); );
    // Locals
    SData/*15:0*/ value_io_a_3__Vcvt;
    value_io_a_3__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_a_3");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_a_3_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_a_3_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_3__Vcvt);
    VL_SET_SVBV_I(16, value_io_a_3, value_io_a_3__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_a_4(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_a_4\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_a_4");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_a_4_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_a_4_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_a_4(const svBitVecVal* value_io_a_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_a_4\n"); );
    // Locals
    SData/*15:0*/ value_io_a_4__Vcvt;
    value_io_a_4__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_a_4");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_a_4_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_a_4_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_a_4__Vcvt, value_io_a_4 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_4__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_a_4(svBitVecVal* value_io_a_4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_a_4\n"); );
    // Locals
    SData/*15:0*/ value_io_a_4__Vcvt;
    value_io_a_4__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_a_4");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_a_4_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_a_4_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_4__Vcvt);
    VL_SET_SVBV_I(16, value_io_a_4, value_io_a_4__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_a_5(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_a_5\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_a_5");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_a_5_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_a_5_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_a_5(const svBitVecVal* value_io_a_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_a_5\n"); );
    // Locals
    SData/*15:0*/ value_io_a_5__Vcvt;
    value_io_a_5__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_a_5");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_a_5_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_a_5_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_a_5__Vcvt, value_io_a_5 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_5__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_a_5(svBitVecVal* value_io_a_5) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_a_5\n"); );
    // Locals
    SData/*15:0*/ value_io_a_5__Vcvt;
    value_io_a_5__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_a_5");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_a_5_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_a_5_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_5__Vcvt);
    VL_SET_SVBV_I(16, value_io_a_5, value_io_a_5__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_a_6(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_a_6\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_a_6");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_a_6_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_a_6_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_a_6(const svBitVecVal* value_io_a_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_a_6\n"); );
    // Locals
    SData/*15:0*/ value_io_a_6__Vcvt;
    value_io_a_6__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_a_6");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_a_6_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_a_6_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_a_6__Vcvt, value_io_a_6 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_6__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_a_6(svBitVecVal* value_io_a_6) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_a_6\n"); );
    // Locals
    SData/*15:0*/ value_io_a_6__Vcvt;
    value_io_a_6__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_a_6");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_a_6_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_a_6_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_6__Vcvt);
    VL_SET_SVBV_I(16, value_io_a_6, value_io_a_6__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_a_7(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_a_7\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_a_7");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_a_7_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_a_7_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_a_7(const svBitVecVal* value_io_a_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_a_7\n"); );
    // Locals
    SData/*15:0*/ value_io_a_7__Vcvt;
    value_io_a_7__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_a_7");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_a_7_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_a_7_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_a_7__Vcvt, value_io_a_7 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_7__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_a_7(svBitVecVal* value_io_a_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_a_7\n"); );
    // Locals
    SData/*15:0*/ value_io_a_7__Vcvt;
    value_io_a_7__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_a_7");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_a_7_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_a_7_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_7__Vcvt);
    VL_SET_SVBV_I(16, value_io_a_7, value_io_a_7__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_a_8(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_a_8\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_a_8");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_a_8_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_a_8_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_a_8(const svBitVecVal* value_io_a_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_a_8\n"); );
    // Locals
    SData/*15:0*/ value_io_a_8__Vcvt;
    value_io_a_8__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_a_8");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_a_8_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_a_8_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_a_8__Vcvt, value_io_a_8 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_8__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_a_8(svBitVecVal* value_io_a_8) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_a_8\n"); );
    // Locals
    SData/*15:0*/ value_io_a_8__Vcvt;
    value_io_a_8__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_a_8");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_a_8_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_a_8_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_8__Vcvt);
    VL_SET_SVBV_I(16, value_io_a_8, value_io_a_8__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_a_9(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_a_9\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_a_9");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_a_9_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_a_9_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_a_9(const svBitVecVal* value_io_a_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_a_9\n"); );
    // Locals
    SData/*15:0*/ value_io_a_9__Vcvt;
    value_io_a_9__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_a_9");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_a_9_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_a_9_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_a_9__Vcvt, value_io_a_9 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_9__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_a_9(svBitVecVal* value_io_a_9) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_a_9\n"); );
    // Locals
    SData/*15:0*/ value_io_a_9__Vcvt;
    value_io_a_9__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_a_9");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_a_9_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_a_9_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_9__Vcvt);
    VL_SET_SVBV_I(16, value_io_a_9, value_io_a_9__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_a_10(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_a_10\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_a_10");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_a_10_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_a_10_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_a_10(const svBitVecVal* value_io_a_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_a_10\n"); );
    // Locals
    SData/*15:0*/ value_io_a_10__Vcvt;
    value_io_a_10__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_a_10");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_a_10_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_a_10_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_a_10__Vcvt, value_io_a_10 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_10__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_a_10(svBitVecVal* value_io_a_10) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_a_10\n"); );
    // Locals
    SData/*15:0*/ value_io_a_10__Vcvt;
    value_io_a_10__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_a_10");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_a_10_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_a_10_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_10__Vcvt);
    VL_SET_SVBV_I(16, value_io_a_10, value_io_a_10__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_a_11(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_a_11\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_a_11");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_a_11_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_a_11_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_a_11(const svBitVecVal* value_io_a_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_a_11\n"); );
    // Locals
    SData/*15:0*/ value_io_a_11__Vcvt;
    value_io_a_11__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_a_11");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_a_11_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_a_11_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_a_11__Vcvt, value_io_a_11 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_11__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_a_11(svBitVecVal* value_io_a_11) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_a_11\n"); );
    // Locals
    SData/*15:0*/ value_io_a_11__Vcvt;
    value_io_a_11__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_a_11");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_a_11_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_a_11_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_11__Vcvt);
    VL_SET_SVBV_I(16, value_io_a_11, value_io_a_11__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_a_12(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_a_12\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_a_12");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_a_12_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_a_12_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_a_12(const svBitVecVal* value_io_a_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_a_12\n"); );
    // Locals
    SData/*15:0*/ value_io_a_12__Vcvt;
    value_io_a_12__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_a_12");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_a_12_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_a_12_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_a_12__Vcvt, value_io_a_12 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_12__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_a_12(svBitVecVal* value_io_a_12) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_a_12\n"); );
    // Locals
    SData/*15:0*/ value_io_a_12__Vcvt;
    value_io_a_12__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_a_12");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_a_12_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_a_12_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_12__Vcvt);
    VL_SET_SVBV_I(16, value_io_a_12, value_io_a_12__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_a_13(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_a_13\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_a_13");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_a_13_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_a_13_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_a_13(const svBitVecVal* value_io_a_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_a_13\n"); );
    // Locals
    SData/*15:0*/ value_io_a_13__Vcvt;
    value_io_a_13__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_a_13");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_a_13_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_a_13_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_a_13__Vcvt, value_io_a_13 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_13__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_a_13(svBitVecVal* value_io_a_13) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_a_13\n"); );
    // Locals
    SData/*15:0*/ value_io_a_13__Vcvt;
    value_io_a_13__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_a_13");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_a_13_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_a_13_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_13__Vcvt);
    VL_SET_SVBV_I(16, value_io_a_13, value_io_a_13__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_a_14(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_a_14\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_a_14");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_a_14_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_a_14_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_a_14(const svBitVecVal* value_io_a_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_a_14\n"); );
    // Locals
    SData/*15:0*/ value_io_a_14__Vcvt;
    value_io_a_14__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_a_14");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_a_14_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_a_14_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_a_14__Vcvt, value_io_a_14 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_14__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_a_14(svBitVecVal* value_io_a_14) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_a_14\n"); );
    // Locals
    SData/*15:0*/ value_io_a_14__Vcvt;
    value_io_a_14__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_a_14");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_a_14_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_a_14_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_14__Vcvt);
    VL_SET_SVBV_I(16, value_io_a_14, value_io_a_14__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_a_15(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_a_15\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_a_15");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_a_15_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_a_15_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_a_15(const svBitVecVal* value_io_a_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_a_15\n"); );
    // Locals
    SData/*15:0*/ value_io_a_15__Vcvt;
    value_io_a_15__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_a_15");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_a_15_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_a_15_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_a_15__Vcvt, value_io_a_15 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_15__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_a_15(svBitVecVal* value_io_a_15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_a_15\n"); );
    // Locals
    SData/*15:0*/ value_io_a_15__Vcvt;
    value_io_a_15__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_a_15");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_a_15_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_a_15_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_15__Vcvt);
    VL_SET_SVBV_I(16, value_io_a_15, value_io_a_15__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_a_16(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_a_16\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_a_16");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_a_16_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_a_16_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_a_16(const svBitVecVal* value_io_a_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_a_16\n"); );
    // Locals
    SData/*15:0*/ value_io_a_16__Vcvt;
    value_io_a_16__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_a_16");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_a_16_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_a_16_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_a_16__Vcvt, value_io_a_16 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_16__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_a_16(svBitVecVal* value_io_a_16) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_a_16\n"); );
    // Locals
    SData/*15:0*/ value_io_a_16__Vcvt;
    value_io_a_16__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_a_16");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_a_16_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_a_16_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_16__Vcvt);
    VL_SET_SVBV_I(16, value_io_a_16, value_io_a_16__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_a_17(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_a_17\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_a_17");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_a_17_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_a_17_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_a_17(const svBitVecVal* value_io_a_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_a_17\n"); );
    // Locals
    SData/*15:0*/ value_io_a_17__Vcvt;
    value_io_a_17__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_a_17");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_a_17_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_a_17_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_a_17__Vcvt, value_io_a_17 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_17__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_a_17(svBitVecVal* value_io_a_17) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_a_17\n"); );
    // Locals
    SData/*15:0*/ value_io_a_17__Vcvt;
    value_io_a_17__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_a_17");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_a_17_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_a_17_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_17__Vcvt);
    VL_SET_SVBV_I(16, value_io_a_17, value_io_a_17__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_a_18(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_a_18\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_a_18");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_a_18_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_a_18_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_a_18(const svBitVecVal* value_io_a_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_a_18\n"); );
    // Locals
    SData/*15:0*/ value_io_a_18__Vcvt;
    value_io_a_18__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_a_18");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_a_18_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_a_18_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_a_18__Vcvt, value_io_a_18 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_18__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_a_18(svBitVecVal* value_io_a_18) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_a_18\n"); );
    // Locals
    SData/*15:0*/ value_io_a_18__Vcvt;
    value_io_a_18__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_a_18");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_a_18_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_a_18_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_18__Vcvt);
    VL_SET_SVBV_I(16, value_io_a_18, value_io_a_18__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_a_19(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_a_19\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_a_19");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_a_19_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_a_19_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_a_19(const svBitVecVal* value_io_a_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_a_19\n"); );
    // Locals
    SData/*15:0*/ value_io_a_19__Vcvt;
    value_io_a_19__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_a_19");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_a_19_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_a_19_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_a_19__Vcvt, value_io_a_19 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_19__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_a_19(svBitVecVal* value_io_a_19) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_a_19\n"); );
    // Locals
    SData/*15:0*/ value_io_a_19__Vcvt;
    value_io_a_19__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_a_19");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_a_19_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_a_19_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_19__Vcvt);
    VL_SET_SVBV_I(16, value_io_a_19, value_io_a_19__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_a_20(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_a_20\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_a_20");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_a_20_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_a_20_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_a_20(const svBitVecVal* value_io_a_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_a_20\n"); );
    // Locals
    SData/*15:0*/ value_io_a_20__Vcvt;
    value_io_a_20__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_a_20");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_a_20_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_a_20_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_a_20__Vcvt, value_io_a_20 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_20__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_a_20(svBitVecVal* value_io_a_20) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_a_20\n"); );
    // Locals
    SData/*15:0*/ value_io_a_20__Vcvt;
    value_io_a_20__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_a_20");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_a_20_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_a_20_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_20__Vcvt);
    VL_SET_SVBV_I(16, value_io_a_20, value_io_a_20__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_a_21(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_a_21\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_a_21");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_a_21_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_a_21_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_a_21(const svBitVecVal* value_io_a_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_a_21\n"); );
    // Locals
    SData/*15:0*/ value_io_a_21__Vcvt;
    value_io_a_21__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_a_21");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_a_21_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_a_21_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_a_21__Vcvt, value_io_a_21 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_21__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_a_21(svBitVecVal* value_io_a_21) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_a_21\n"); );
    // Locals
    SData/*15:0*/ value_io_a_21__Vcvt;
    value_io_a_21__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_a_21");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_a_21_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_a_21_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_21__Vcvt);
    VL_SET_SVBV_I(16, value_io_a_21, value_io_a_21__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_a_22(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_a_22\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_a_22");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_a_22_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_a_22_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_a_22(const svBitVecVal* value_io_a_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_a_22\n"); );
    // Locals
    SData/*15:0*/ value_io_a_22__Vcvt;
    value_io_a_22__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_a_22");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_a_22_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_a_22_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_a_22__Vcvt, value_io_a_22 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_22__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_a_22(svBitVecVal* value_io_a_22) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_a_22\n"); );
    // Locals
    SData/*15:0*/ value_io_a_22__Vcvt;
    value_io_a_22__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_a_22");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_a_22_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_a_22_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_22__Vcvt);
    VL_SET_SVBV_I(16, value_io_a_22, value_io_a_22__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_io_a_23(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_io_a_23\n"); );
    // Locals
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_io_a_23");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_io_a_23_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitWidthImpl_io_a_23_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_io_a_23(const svBitVecVal* value_io_a_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_io_a_23\n"); );
    // Locals
    SData/*15:0*/ value_io_a_23__Vcvt;
    value_io_a_23__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_io_a_23");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_io_a_23_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_setBitsImpl_io_a_23_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_S_SVBV(16, value_io_a_23__Vcvt, value_io_a_23 + 0);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_23__Vcvt);
}

void VsvsimTestbench::getBitsImpl_io_a_23(svBitVecVal* value_io_a_23) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_io_a_23\n"); );
    // Locals
    SData/*15:0*/ value_io_a_23__Vcvt;
    value_io_a_23__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_io_a_23");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_io_a_23_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_getBitsImpl_io_a_23_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_io_a_23__Vcvt);
    VL_SET_SVBV_I(16, value_io_a_23, value_io_a_23__Vcvt);
}

void VsvsimTestbench::simulation_initializeTrace(const char* traceFilePath) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::simulation_initializeTrace\n"); );
    // Locals
    static thread_local std::string traceFilePath__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("simulation_initializeTrace");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_simulation_initializeTrace_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_simulation_initializeTrace_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    traceFilePath__Vcvt = VL_CVT_N_CSTR(traceFilePath);
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), traceFilePath__Vcvt);
}

void VsvsimTestbench::simulation_enableTrace(int* success) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::simulation_enableTrace\n"); );
    // Locals
    IData/*31:0*/ success__Vcvt;
    success__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("simulation_enableTrace");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_simulation_enableTrace_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_simulation_enableTrace_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), success__Vcvt);
    *success = success__Vcvt;
}

void VsvsimTestbench::simulation_disableTrace(int* success) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::simulation_disableTrace\n"); );
    // Locals
    IData/*31:0*/ success__Vcvt;
    success__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("simulation_disableTrace");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_simulation_disableTrace_t __Vcb = reinterpret_cast<VsvsimTestbench__Vcb_simulation_disableTrace_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), success__Vcvt);
    *success = success__Vcvt;
}
