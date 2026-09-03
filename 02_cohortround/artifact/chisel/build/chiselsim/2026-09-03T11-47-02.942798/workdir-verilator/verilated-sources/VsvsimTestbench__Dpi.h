// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VSVSIMTESTBENCH__DPI_H_
#define VERILATED_VSVSIMTESTBENCH__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:37:17
    extern void getBitWidthImpl_clock(int* value);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:211:17
    extern void getBitWidthImpl_io_inValid(int* value);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:131:17
    extern void getBitWidthImpl_io_outValid(int* value);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:143:17
    extern void getBitWidthImpl_io_prefix_0(int* value);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:160:17
    extern void getBitWidthImpl_io_prefix_1(int* value);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:177:17
    extern void getBitWidthImpl_io_prefix_2(int* value);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:194:17
    extern void getBitWidthImpl_io_prefix_3(int* value);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:119:17
    extern void getBitWidthImpl_io_upCount(int* value);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:71:17
    extern void getBitWidthImpl_io_upMask_0(int* value);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:83:17
    extern void getBitWidthImpl_io_upMask_1(int* value);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:95:17
    extern void getBitWidthImpl_io_upMask_2(int* value);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:107:17
    extern void getBitWidthImpl_io_upMask_3(int* value);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:54:17
    extern void getBitWidthImpl_reset(int* value);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:47:17
    extern void getBitsImpl_clock(svBitVecVal* value_clock);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:221:17
    extern void getBitsImpl_io_inValid(svBitVecVal* value_io_inValid);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:136:17
    extern void getBitsImpl_io_outValid(svBitVecVal* value_io_outValid);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:153:17
    extern void getBitsImpl_io_prefix_0(svBitVecVal* value_io_prefix_0);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:170:17
    extern void getBitsImpl_io_prefix_1(svBitVecVal* value_io_prefix_1);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:187:17
    extern void getBitsImpl_io_prefix_2(svBitVecVal* value_io_prefix_2);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:204:17
    extern void getBitsImpl_io_prefix_3(svBitVecVal* value_io_prefix_3);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:124:17
    extern void getBitsImpl_io_upCount(svBitVecVal* value_io_upCount);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:76:17
    extern void getBitsImpl_io_upMask_0(svBitVecVal* value_io_upMask_0);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:88:17
    extern void getBitsImpl_io_upMask_1(svBitVecVal* value_io_upMask_1);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:100:17
    extern void getBitsImpl_io_upMask_2(svBitVecVal* value_io_upMask_2);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:112:17
    extern void getBitsImpl_io_upMask_3(svBitVecVal* value_io_upMask_3);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:64:17
    extern void getBitsImpl_reset(svBitVecVal* value_reset);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:42:17
    extern void setBitsImpl_clock(const svBitVecVal* value_clock);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:216:17
    extern void setBitsImpl_io_inValid(const svBitVecVal* value_io_inValid);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:148:17
    extern void setBitsImpl_io_prefix_0(const svBitVecVal* value_io_prefix_0);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:165:17
    extern void setBitsImpl_io_prefix_1(const svBitVecVal* value_io_prefix_1);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:182:17
    extern void setBitsImpl_io_prefix_2(const svBitVecVal* value_io_prefix_2);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:199:17
    extern void setBitsImpl_io_prefix_3(const svBitVecVal* value_io_prefix_3);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:59:17
    extern void setBitsImpl_reset(const svBitVecVal* value_reset);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:294:17
    extern void simulation_disableTrace(int* success);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:279:17
    extern void simulation_enableTrace(int* success);
    // DPI export at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:255:17
    extern void simulation_initializeTrace(const char* traceFilePath);

    // DPI IMPORTS
    // DPI import at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:32:40
    extern void initTestBenchScope();
    // DPI import at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:249:32
    extern void run_simulation(int timesteps, int* done);
    // DPI import at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:227:31
    extern int simulation_body();
    // DPI import at /home/ruilin/SPL_Surreal/DAC/02_cohortround/artifact/chisel/build/chiselsim/2026-09-03T11-47-02.942798/workdir-verilator/../generated-sources/testbench.sv:237:31
    extern int simulation_final();

#ifdef __cplusplus
}
#endif

#endif  // guard
