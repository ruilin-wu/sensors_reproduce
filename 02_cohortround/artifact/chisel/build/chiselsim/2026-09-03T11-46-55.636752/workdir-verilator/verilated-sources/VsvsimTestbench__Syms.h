// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSVSIMTESTBENCH__SYMS_H_
#define VERILATED_VSVSIMTESTBENCH__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VsvsimTestbench.h"

// INCLUDE MODULE CLASSES
#include "VsvsimTestbench___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using VsvsimTestbench__Vcb_getBitWidthImpl_clock_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
using VsvsimTestbench__Vcb_getBitWidthImpl_io_prefix_0_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
using VsvsimTestbench__Vcb_getBitWidthImpl_io_prefix_1_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
using VsvsimTestbench__Vcb_getBitWidthImpl_io_prefix_2_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
using VsvsimTestbench__Vcb_getBitWidthImpl_io_prefix_3_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
using VsvsimTestbench__Vcb_getBitWidthImpl_io_upCount_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
using VsvsimTestbench__Vcb_getBitWidthImpl_io_upMask_0_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
using VsvsimTestbench__Vcb_getBitWidthImpl_io_upMask_1_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
using VsvsimTestbench__Vcb_getBitWidthImpl_io_upMask_2_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
using VsvsimTestbench__Vcb_getBitWidthImpl_io_upMask_3_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
using VsvsimTestbench__Vcb_getBitWidthImpl_reset_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
using VsvsimTestbench__Vcb_getBitsImpl_clock_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_clock);
using VsvsimTestbench__Vcb_getBitsImpl_io_prefix_0_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*2:0*/ &value_io_prefix_0);
using VsvsimTestbench__Vcb_getBitsImpl_io_prefix_1_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*2:0*/ &value_io_prefix_1);
using VsvsimTestbench__Vcb_getBitsImpl_io_prefix_2_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*2:0*/ &value_io_prefix_2);
using VsvsimTestbench__Vcb_getBitsImpl_io_prefix_3_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*2:0*/ &value_io_prefix_3);
using VsvsimTestbench__Vcb_getBitsImpl_io_upCount_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*2:0*/ &value_io_upCount);
using VsvsimTestbench__Vcb_getBitsImpl_io_upMask_0_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_io_upMask_0);
using VsvsimTestbench__Vcb_getBitsImpl_io_upMask_1_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_io_upMask_1);
using VsvsimTestbench__Vcb_getBitsImpl_io_upMask_2_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_io_upMask_2);
using VsvsimTestbench__Vcb_getBitsImpl_io_upMask_3_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_io_upMask_3);
using VsvsimTestbench__Vcb_getBitsImpl_reset_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_reset);
using VsvsimTestbench__Vcb_setBitsImpl_clock_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_clock);
using VsvsimTestbench__Vcb_setBitsImpl_io_prefix_0_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*2:0*/ value_io_prefix_0);
using VsvsimTestbench__Vcb_setBitsImpl_io_prefix_1_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*2:0*/ value_io_prefix_1);
using VsvsimTestbench__Vcb_setBitsImpl_io_prefix_2_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*2:0*/ value_io_prefix_2);
using VsvsimTestbench__Vcb_setBitsImpl_io_prefix_3_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*2:0*/ value_io_prefix_3);
using VsvsimTestbench__Vcb_setBitsImpl_reset_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_reset);
using VsvsimTestbench__Vcb_simulation_disableTrace_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &success);
using VsvsimTestbench__Vcb_simulation_enableTrace_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &success);
using VsvsimTestbench__Vcb_simulation_initializeTrace_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, std::string traceFilePath);

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VsvsimTestbench__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VsvsimTestbench* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VsvsimTestbench___024root      TOP;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_svsimTestbench;

    // CONSTRUCTORS
    VsvsimTestbench__Syms(VerilatedContext* contextp, const char* namep, VsvsimTestbench* modelp);
    ~VsvsimTestbench__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
