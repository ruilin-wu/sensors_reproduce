// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSVSIMTESTBENCH_H_
#define VERILATED_VSVSIMTESTBENCH_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class VsvsimTestbench__Syms;
class VsvsimTestbench___024root;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VsvsimTestbench VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VsvsimTestbench__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VsvsimTestbench___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VsvsimTestbench(VerilatedContext* contextp, const char* name = "TOP");
    explicit VsvsimTestbench(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VsvsimTestbench();
  private:
    VL_UNCOPYABLE(VsvsimTestbench);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    /// DPI Export functions
    static void getBitWidthImpl_clock(int* value);
    static void getBitWidthImpl_io_a_0(int* value);
    static void getBitWidthImpl_io_a_1(int* value);
    static void getBitWidthImpl_io_a_10(int* value);
    static void getBitWidthImpl_io_a_11(int* value);
    static void getBitWidthImpl_io_a_12(int* value);
    static void getBitWidthImpl_io_a_13(int* value);
    static void getBitWidthImpl_io_a_14(int* value);
    static void getBitWidthImpl_io_a_15(int* value);
    static void getBitWidthImpl_io_a_16(int* value);
    static void getBitWidthImpl_io_a_17(int* value);
    static void getBitWidthImpl_io_a_18(int* value);
    static void getBitWidthImpl_io_a_19(int* value);
    static void getBitWidthImpl_io_a_2(int* value);
    static void getBitWidthImpl_io_a_20(int* value);
    static void getBitWidthImpl_io_a_21(int* value);
    static void getBitWidthImpl_io_a_22(int* value);
    static void getBitWidthImpl_io_a_23(int* value);
    static void getBitWidthImpl_io_a_3(int* value);
    static void getBitWidthImpl_io_a_4(int* value);
    static void getBitWidthImpl_io_a_5(int* value);
    static void getBitWidthImpl_io_a_6(int* value);
    static void getBitWidthImpl_io_a_7(int* value);
    static void getBitWidthImpl_io_a_8(int* value);
    static void getBitWidthImpl_io_a_9(int* value);
    static void getBitWidthImpl_io_b_0(int* value);
    static void getBitWidthImpl_io_b_1(int* value);
    static void getBitWidthImpl_io_b_10(int* value);
    static void getBitWidthImpl_io_b_11(int* value);
    static void getBitWidthImpl_io_b_12(int* value);
    static void getBitWidthImpl_io_b_13(int* value);
    static void getBitWidthImpl_io_b_14(int* value);
    static void getBitWidthImpl_io_b_15(int* value);
    static void getBitWidthImpl_io_b_16(int* value);
    static void getBitWidthImpl_io_b_17(int* value);
    static void getBitWidthImpl_io_b_18(int* value);
    static void getBitWidthImpl_io_b_19(int* value);
    static void getBitWidthImpl_io_b_2(int* value);
    static void getBitWidthImpl_io_b_20(int* value);
    static void getBitWidthImpl_io_b_21(int* value);
    static void getBitWidthImpl_io_b_22(int* value);
    static void getBitWidthImpl_io_b_23(int* value);
    static void getBitWidthImpl_io_b_3(int* value);
    static void getBitWidthImpl_io_b_4(int* value);
    static void getBitWidthImpl_io_b_5(int* value);
    static void getBitWidthImpl_io_b_6(int* value);
    static void getBitWidthImpl_io_b_7(int* value);
    static void getBitWidthImpl_io_b_8(int* value);
    static void getBitWidthImpl_io_b_9(int* value);
    static void getBitWidthImpl_io_done(int* value);
    static void getBitWidthImpl_io_ready(int* value);
    static void getBitWidthImpl_io_result(int* value);
    static void getBitWidthImpl_io_start(int* value);
    static void getBitWidthImpl_reset(int* value);
    static void getBitsImpl_clock(svBitVecVal* value_clock);
    static void getBitsImpl_io_a_0(svBitVecVal* value_io_a_0);
    static void getBitsImpl_io_a_1(svBitVecVal* value_io_a_1);
    static void getBitsImpl_io_a_10(svBitVecVal* value_io_a_10);
    static void getBitsImpl_io_a_11(svBitVecVal* value_io_a_11);
    static void getBitsImpl_io_a_12(svBitVecVal* value_io_a_12);
    static void getBitsImpl_io_a_13(svBitVecVal* value_io_a_13);
    static void getBitsImpl_io_a_14(svBitVecVal* value_io_a_14);
    static void getBitsImpl_io_a_15(svBitVecVal* value_io_a_15);
    static void getBitsImpl_io_a_16(svBitVecVal* value_io_a_16);
    static void getBitsImpl_io_a_17(svBitVecVal* value_io_a_17);
    static void getBitsImpl_io_a_18(svBitVecVal* value_io_a_18);
    static void getBitsImpl_io_a_19(svBitVecVal* value_io_a_19);
    static void getBitsImpl_io_a_2(svBitVecVal* value_io_a_2);
    static void getBitsImpl_io_a_20(svBitVecVal* value_io_a_20);
    static void getBitsImpl_io_a_21(svBitVecVal* value_io_a_21);
    static void getBitsImpl_io_a_22(svBitVecVal* value_io_a_22);
    static void getBitsImpl_io_a_23(svBitVecVal* value_io_a_23);
    static void getBitsImpl_io_a_3(svBitVecVal* value_io_a_3);
    static void getBitsImpl_io_a_4(svBitVecVal* value_io_a_4);
    static void getBitsImpl_io_a_5(svBitVecVal* value_io_a_5);
    static void getBitsImpl_io_a_6(svBitVecVal* value_io_a_6);
    static void getBitsImpl_io_a_7(svBitVecVal* value_io_a_7);
    static void getBitsImpl_io_a_8(svBitVecVal* value_io_a_8);
    static void getBitsImpl_io_a_9(svBitVecVal* value_io_a_9);
    static void getBitsImpl_io_b_0(svBitVecVal* value_io_b_0);
    static void getBitsImpl_io_b_1(svBitVecVal* value_io_b_1);
    static void getBitsImpl_io_b_10(svBitVecVal* value_io_b_10);
    static void getBitsImpl_io_b_11(svBitVecVal* value_io_b_11);
    static void getBitsImpl_io_b_12(svBitVecVal* value_io_b_12);
    static void getBitsImpl_io_b_13(svBitVecVal* value_io_b_13);
    static void getBitsImpl_io_b_14(svBitVecVal* value_io_b_14);
    static void getBitsImpl_io_b_15(svBitVecVal* value_io_b_15);
    static void getBitsImpl_io_b_16(svBitVecVal* value_io_b_16);
    static void getBitsImpl_io_b_17(svBitVecVal* value_io_b_17);
    static void getBitsImpl_io_b_18(svBitVecVal* value_io_b_18);
    static void getBitsImpl_io_b_19(svBitVecVal* value_io_b_19);
    static void getBitsImpl_io_b_2(svBitVecVal* value_io_b_2);
    static void getBitsImpl_io_b_20(svBitVecVal* value_io_b_20);
    static void getBitsImpl_io_b_21(svBitVecVal* value_io_b_21);
    static void getBitsImpl_io_b_22(svBitVecVal* value_io_b_22);
    static void getBitsImpl_io_b_23(svBitVecVal* value_io_b_23);
    static void getBitsImpl_io_b_3(svBitVecVal* value_io_b_3);
    static void getBitsImpl_io_b_4(svBitVecVal* value_io_b_4);
    static void getBitsImpl_io_b_5(svBitVecVal* value_io_b_5);
    static void getBitsImpl_io_b_6(svBitVecVal* value_io_b_6);
    static void getBitsImpl_io_b_7(svBitVecVal* value_io_b_7);
    static void getBitsImpl_io_b_8(svBitVecVal* value_io_b_8);
    static void getBitsImpl_io_b_9(svBitVecVal* value_io_b_9);
    static void getBitsImpl_io_done(svBitVecVal* value_io_done);
    static void getBitsImpl_io_ready(svBitVecVal* value_io_ready);
    static void getBitsImpl_io_result(svBitVecVal* value_io_result);
    static void getBitsImpl_io_start(svBitVecVal* value_io_start);
    static void getBitsImpl_reset(svBitVecVal* value_reset);
    static void setBitsImpl_clock(const svBitVecVal* value_clock);
    static void setBitsImpl_io_a_0(const svBitVecVal* value_io_a_0);
    static void setBitsImpl_io_a_1(const svBitVecVal* value_io_a_1);
    static void setBitsImpl_io_a_10(const svBitVecVal* value_io_a_10);
    static void setBitsImpl_io_a_11(const svBitVecVal* value_io_a_11);
    static void setBitsImpl_io_a_12(const svBitVecVal* value_io_a_12);
    static void setBitsImpl_io_a_13(const svBitVecVal* value_io_a_13);
    static void setBitsImpl_io_a_14(const svBitVecVal* value_io_a_14);
    static void setBitsImpl_io_a_15(const svBitVecVal* value_io_a_15);
    static void setBitsImpl_io_a_16(const svBitVecVal* value_io_a_16);
    static void setBitsImpl_io_a_17(const svBitVecVal* value_io_a_17);
    static void setBitsImpl_io_a_18(const svBitVecVal* value_io_a_18);
    static void setBitsImpl_io_a_19(const svBitVecVal* value_io_a_19);
    static void setBitsImpl_io_a_2(const svBitVecVal* value_io_a_2);
    static void setBitsImpl_io_a_20(const svBitVecVal* value_io_a_20);
    static void setBitsImpl_io_a_21(const svBitVecVal* value_io_a_21);
    static void setBitsImpl_io_a_22(const svBitVecVal* value_io_a_22);
    static void setBitsImpl_io_a_23(const svBitVecVal* value_io_a_23);
    static void setBitsImpl_io_a_3(const svBitVecVal* value_io_a_3);
    static void setBitsImpl_io_a_4(const svBitVecVal* value_io_a_4);
    static void setBitsImpl_io_a_5(const svBitVecVal* value_io_a_5);
    static void setBitsImpl_io_a_6(const svBitVecVal* value_io_a_6);
    static void setBitsImpl_io_a_7(const svBitVecVal* value_io_a_7);
    static void setBitsImpl_io_a_8(const svBitVecVal* value_io_a_8);
    static void setBitsImpl_io_a_9(const svBitVecVal* value_io_a_9);
    static void setBitsImpl_io_b_0(const svBitVecVal* value_io_b_0);
    static void setBitsImpl_io_b_1(const svBitVecVal* value_io_b_1);
    static void setBitsImpl_io_b_10(const svBitVecVal* value_io_b_10);
    static void setBitsImpl_io_b_11(const svBitVecVal* value_io_b_11);
    static void setBitsImpl_io_b_12(const svBitVecVal* value_io_b_12);
    static void setBitsImpl_io_b_13(const svBitVecVal* value_io_b_13);
    static void setBitsImpl_io_b_14(const svBitVecVal* value_io_b_14);
    static void setBitsImpl_io_b_15(const svBitVecVal* value_io_b_15);
    static void setBitsImpl_io_b_16(const svBitVecVal* value_io_b_16);
    static void setBitsImpl_io_b_17(const svBitVecVal* value_io_b_17);
    static void setBitsImpl_io_b_18(const svBitVecVal* value_io_b_18);
    static void setBitsImpl_io_b_19(const svBitVecVal* value_io_b_19);
    static void setBitsImpl_io_b_2(const svBitVecVal* value_io_b_2);
    static void setBitsImpl_io_b_20(const svBitVecVal* value_io_b_20);
    static void setBitsImpl_io_b_21(const svBitVecVal* value_io_b_21);
    static void setBitsImpl_io_b_22(const svBitVecVal* value_io_b_22);
    static void setBitsImpl_io_b_23(const svBitVecVal* value_io_b_23);
    static void setBitsImpl_io_b_3(const svBitVecVal* value_io_b_3);
    static void setBitsImpl_io_b_4(const svBitVecVal* value_io_b_4);
    static void setBitsImpl_io_b_5(const svBitVecVal* value_io_b_5);
    static void setBitsImpl_io_b_6(const svBitVecVal* value_io_b_6);
    static void setBitsImpl_io_b_7(const svBitVecVal* value_io_b_7);
    static void setBitsImpl_io_b_8(const svBitVecVal* value_io_b_8);
    static void setBitsImpl_io_b_9(const svBitVecVal* value_io_b_9);
    static void setBitsImpl_io_start(const svBitVecVal* value_io_start);
    static void setBitsImpl_reset(const svBitVecVal* value_reset);
    static void simulation_disableTrace(int* success);
    static void simulation_enableTrace(int* success);
    static void simulation_initializeTrace(const char* traceFilePath);

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
