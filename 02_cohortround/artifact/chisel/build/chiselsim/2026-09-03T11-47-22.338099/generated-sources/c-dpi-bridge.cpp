#include <stdint.h>

#ifdef SVSIM_ENABLE_VERILATOR_SUPPORT
#include "verilated-sources/VsvsimTestbench__Dpi.h"
#endif
#ifdef SVSIM_ENABLE_VCS_SUPPORT
#include "vc_hdrs.h"
#endif

extern "C" {
 svScope setScopeToTestBench();
void getBitWidth_clock(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_clock(result);
           svSetScope(prev);
        }
void getBits_clock(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_clock(result);
           svSetScope(prev);
        }
void setBits_clock(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_clock(data);
           svSetScope(prev);
        }
void getBitWidth_reset(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_reset(result);
           svSetScope(prev);
        }
void getBits_reset(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_reset(result);
           svSetScope(prev);
        }
void setBits_reset(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_reset(data);
           svSetScope(prev);
        }
void getBitWidth_io_result(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_result(result);
           svSetScope(prev);
        }
void getBits_io_result(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_result(result);
           svSetScope(prev);
        }
void getBitWidth_io_done(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_done(result);
           svSetScope(prev);
        }
void getBits_io_done(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_done(result);
           svSetScope(prev);
        }
void getBitWidth_io_ready(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_ready(result);
           svSetScope(prev);
        }
void getBits_io_ready(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_ready(result);
           svSetScope(prev);
        }
void getBitWidth_io_start(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_start(result);
           svSetScope(prev);
        }
void getBits_io_start(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_start(result);
           svSetScope(prev);
        }
void setBits_io_start(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_start(data);
           svSetScope(prev);
        }
void getBitWidth_io_b_0(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_b_0(result);
           svSetScope(prev);
        }
void getBits_io_b_0(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_b_0(result);
           svSetScope(prev);
        }
void setBits_io_b_0(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_b_0(data);
           svSetScope(prev);
        }
void getBitWidth_io_b_1(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_b_1(result);
           svSetScope(prev);
        }
void getBits_io_b_1(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_b_1(result);
           svSetScope(prev);
        }
void setBits_io_b_1(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_b_1(data);
           svSetScope(prev);
        }
void getBitWidth_io_b_2(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_b_2(result);
           svSetScope(prev);
        }
void getBits_io_b_2(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_b_2(result);
           svSetScope(prev);
        }
void setBits_io_b_2(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_b_2(data);
           svSetScope(prev);
        }
void getBitWidth_io_b_3(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_b_3(result);
           svSetScope(prev);
        }
void getBits_io_b_3(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_b_3(result);
           svSetScope(prev);
        }
void setBits_io_b_3(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_b_3(data);
           svSetScope(prev);
        }
void getBitWidth_io_b_4(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_b_4(result);
           svSetScope(prev);
        }
void getBits_io_b_4(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_b_4(result);
           svSetScope(prev);
        }
void setBits_io_b_4(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_b_4(data);
           svSetScope(prev);
        }
void getBitWidth_io_b_5(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_b_5(result);
           svSetScope(prev);
        }
void getBits_io_b_5(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_b_5(result);
           svSetScope(prev);
        }
void setBits_io_b_5(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_b_5(data);
           svSetScope(prev);
        }
void getBitWidth_io_b_6(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_b_6(result);
           svSetScope(prev);
        }
void getBits_io_b_6(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_b_6(result);
           svSetScope(prev);
        }
void setBits_io_b_6(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_b_6(data);
           svSetScope(prev);
        }
void getBitWidth_io_b_7(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_b_7(result);
           svSetScope(prev);
        }
void getBits_io_b_7(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_b_7(result);
           svSetScope(prev);
        }
void setBits_io_b_7(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_b_7(data);
           svSetScope(prev);
        }
void getBitWidth_io_b_8(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_b_8(result);
           svSetScope(prev);
        }
void getBits_io_b_8(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_b_8(result);
           svSetScope(prev);
        }
void setBits_io_b_8(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_b_8(data);
           svSetScope(prev);
        }
void getBitWidth_io_b_9(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_b_9(result);
           svSetScope(prev);
        }
void getBits_io_b_9(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_b_9(result);
           svSetScope(prev);
        }
void setBits_io_b_9(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_b_9(data);
           svSetScope(prev);
        }
void getBitWidth_io_b_10(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_b_10(result);
           svSetScope(prev);
        }
void getBits_io_b_10(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_b_10(result);
           svSetScope(prev);
        }
void setBits_io_b_10(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_b_10(data);
           svSetScope(prev);
        }
void getBitWidth_io_b_11(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_b_11(result);
           svSetScope(prev);
        }
void getBits_io_b_11(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_b_11(result);
           svSetScope(prev);
        }
void setBits_io_b_11(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_b_11(data);
           svSetScope(prev);
        }
void getBitWidth_io_b_12(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_b_12(result);
           svSetScope(prev);
        }
void getBits_io_b_12(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_b_12(result);
           svSetScope(prev);
        }
void setBits_io_b_12(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_b_12(data);
           svSetScope(prev);
        }
void getBitWidth_io_b_13(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_b_13(result);
           svSetScope(prev);
        }
void getBits_io_b_13(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_b_13(result);
           svSetScope(prev);
        }
void setBits_io_b_13(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_b_13(data);
           svSetScope(prev);
        }
void getBitWidth_io_b_14(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_b_14(result);
           svSetScope(prev);
        }
void getBits_io_b_14(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_b_14(result);
           svSetScope(prev);
        }
void setBits_io_b_14(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_b_14(data);
           svSetScope(prev);
        }
void getBitWidth_io_b_15(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_b_15(result);
           svSetScope(prev);
        }
void getBits_io_b_15(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_b_15(result);
           svSetScope(prev);
        }
void setBits_io_b_15(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_b_15(data);
           svSetScope(prev);
        }
void getBitWidth_io_b_16(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_b_16(result);
           svSetScope(prev);
        }
void getBits_io_b_16(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_b_16(result);
           svSetScope(prev);
        }
void setBits_io_b_16(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_b_16(data);
           svSetScope(prev);
        }
void getBitWidth_io_b_17(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_b_17(result);
           svSetScope(prev);
        }
void getBits_io_b_17(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_b_17(result);
           svSetScope(prev);
        }
void setBits_io_b_17(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_b_17(data);
           svSetScope(prev);
        }
void getBitWidth_io_b_18(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_b_18(result);
           svSetScope(prev);
        }
void getBits_io_b_18(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_b_18(result);
           svSetScope(prev);
        }
void setBits_io_b_18(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_b_18(data);
           svSetScope(prev);
        }
void getBitWidth_io_b_19(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_b_19(result);
           svSetScope(prev);
        }
void getBits_io_b_19(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_b_19(result);
           svSetScope(prev);
        }
void setBits_io_b_19(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_b_19(data);
           svSetScope(prev);
        }
void getBitWidth_io_b_20(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_b_20(result);
           svSetScope(prev);
        }
void getBits_io_b_20(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_b_20(result);
           svSetScope(prev);
        }
void setBits_io_b_20(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_b_20(data);
           svSetScope(prev);
        }
void getBitWidth_io_b_21(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_b_21(result);
           svSetScope(prev);
        }
void getBits_io_b_21(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_b_21(result);
           svSetScope(prev);
        }
void setBits_io_b_21(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_b_21(data);
           svSetScope(prev);
        }
void getBitWidth_io_b_22(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_b_22(result);
           svSetScope(prev);
        }
void getBits_io_b_22(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_b_22(result);
           svSetScope(prev);
        }
void setBits_io_b_22(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_b_22(data);
           svSetScope(prev);
        }
void getBitWidth_io_b_23(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_b_23(result);
           svSetScope(prev);
        }
void getBits_io_b_23(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_b_23(result);
           svSetScope(prev);
        }
void setBits_io_b_23(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_b_23(data);
           svSetScope(prev);
        }
void getBitWidth_io_a_0(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_a_0(result);
           svSetScope(prev);
        }
void getBits_io_a_0(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_a_0(result);
           svSetScope(prev);
        }
void setBits_io_a_0(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_a_0(data);
           svSetScope(prev);
        }
void getBitWidth_io_a_1(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_a_1(result);
           svSetScope(prev);
        }
void getBits_io_a_1(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_a_1(result);
           svSetScope(prev);
        }
void setBits_io_a_1(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_a_1(data);
           svSetScope(prev);
        }
void getBitWidth_io_a_2(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_a_2(result);
           svSetScope(prev);
        }
void getBits_io_a_2(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_a_2(result);
           svSetScope(prev);
        }
void setBits_io_a_2(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_a_2(data);
           svSetScope(prev);
        }
void getBitWidth_io_a_3(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_a_3(result);
           svSetScope(prev);
        }
void getBits_io_a_3(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_a_3(result);
           svSetScope(prev);
        }
void setBits_io_a_3(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_a_3(data);
           svSetScope(prev);
        }
void getBitWidth_io_a_4(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_a_4(result);
           svSetScope(prev);
        }
void getBits_io_a_4(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_a_4(result);
           svSetScope(prev);
        }
void setBits_io_a_4(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_a_4(data);
           svSetScope(prev);
        }
void getBitWidth_io_a_5(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_a_5(result);
           svSetScope(prev);
        }
void getBits_io_a_5(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_a_5(result);
           svSetScope(prev);
        }
void setBits_io_a_5(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_a_5(data);
           svSetScope(prev);
        }
void getBitWidth_io_a_6(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_a_6(result);
           svSetScope(prev);
        }
void getBits_io_a_6(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_a_6(result);
           svSetScope(prev);
        }
void setBits_io_a_6(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_a_6(data);
           svSetScope(prev);
        }
void getBitWidth_io_a_7(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_a_7(result);
           svSetScope(prev);
        }
void getBits_io_a_7(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_a_7(result);
           svSetScope(prev);
        }
void setBits_io_a_7(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_a_7(data);
           svSetScope(prev);
        }
void getBitWidth_io_a_8(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_a_8(result);
           svSetScope(prev);
        }
void getBits_io_a_8(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_a_8(result);
           svSetScope(prev);
        }
void setBits_io_a_8(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_a_8(data);
           svSetScope(prev);
        }
void getBitWidth_io_a_9(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_a_9(result);
           svSetScope(prev);
        }
void getBits_io_a_9(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_a_9(result);
           svSetScope(prev);
        }
void setBits_io_a_9(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_a_9(data);
           svSetScope(prev);
        }
void getBitWidth_io_a_10(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_a_10(result);
           svSetScope(prev);
        }
void getBits_io_a_10(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_a_10(result);
           svSetScope(prev);
        }
void setBits_io_a_10(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_a_10(data);
           svSetScope(prev);
        }
void getBitWidth_io_a_11(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_a_11(result);
           svSetScope(prev);
        }
void getBits_io_a_11(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_a_11(result);
           svSetScope(prev);
        }
void setBits_io_a_11(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_a_11(data);
           svSetScope(prev);
        }
void getBitWidth_io_a_12(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_a_12(result);
           svSetScope(prev);
        }
void getBits_io_a_12(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_a_12(result);
           svSetScope(prev);
        }
void setBits_io_a_12(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_a_12(data);
           svSetScope(prev);
        }
void getBitWidth_io_a_13(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_a_13(result);
           svSetScope(prev);
        }
void getBits_io_a_13(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_a_13(result);
           svSetScope(prev);
        }
void setBits_io_a_13(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_a_13(data);
           svSetScope(prev);
        }
void getBitWidth_io_a_14(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_a_14(result);
           svSetScope(prev);
        }
void getBits_io_a_14(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_a_14(result);
           svSetScope(prev);
        }
void setBits_io_a_14(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_a_14(data);
           svSetScope(prev);
        }
void getBitWidth_io_a_15(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_a_15(result);
           svSetScope(prev);
        }
void getBits_io_a_15(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_a_15(result);
           svSetScope(prev);
        }
void setBits_io_a_15(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_a_15(data);
           svSetScope(prev);
        }
void getBitWidth_io_a_16(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_a_16(result);
           svSetScope(prev);
        }
void getBits_io_a_16(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_a_16(result);
           svSetScope(prev);
        }
void setBits_io_a_16(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_a_16(data);
           svSetScope(prev);
        }
void getBitWidth_io_a_17(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_a_17(result);
           svSetScope(prev);
        }
void getBits_io_a_17(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_a_17(result);
           svSetScope(prev);
        }
void setBits_io_a_17(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_a_17(data);
           svSetScope(prev);
        }
void getBitWidth_io_a_18(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_a_18(result);
           svSetScope(prev);
        }
void getBits_io_a_18(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_a_18(result);
           svSetScope(prev);
        }
void setBits_io_a_18(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_a_18(data);
           svSetScope(prev);
        }
void getBitWidth_io_a_19(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_a_19(result);
           svSetScope(prev);
        }
void getBits_io_a_19(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_a_19(result);
           svSetScope(prev);
        }
void setBits_io_a_19(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_a_19(data);
           svSetScope(prev);
        }
void getBitWidth_io_a_20(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_a_20(result);
           svSetScope(prev);
        }
void getBits_io_a_20(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_a_20(result);
           svSetScope(prev);
        }
void setBits_io_a_20(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_a_20(data);
           svSetScope(prev);
        }
void getBitWidth_io_a_21(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_a_21(result);
           svSetScope(prev);
        }
void getBits_io_a_21(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_a_21(result);
           svSetScope(prev);
        }
void setBits_io_a_21(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_a_21(data);
           svSetScope(prev);
        }
void getBitWidth_io_a_22(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_a_22(result);
           svSetScope(prev);
        }
void getBits_io_a_22(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_a_22(result);
           svSetScope(prev);
        }
void setBits_io_a_22(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_a_22(data);
           svSetScope(prev);
        }
void getBitWidth_io_a_23(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_a_23(result);
           svSetScope(prev);
        }
void getBits_io_a_23(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_a_23(result);
           svSetScope(prev);
        }
void setBits_io_a_23(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_a_23(data);
           svSetScope(prev);
        }

int port_getter(int id, int *bitWidth, void (**getter)(uint8_t*)) {
  switch (id) {
    case 0: // clock
      getBitWidth_clock(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_clock;
      return 0;
    case 1: // reset
      getBitWidth_reset(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_reset;
      return 0;
    case 2: // io_result
      getBitWidth_io_result(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_result;
      return 0;
    case 3: // io_done
      getBitWidth_io_done(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_done;
      return 0;
    case 4: // io_ready
      getBitWidth_io_ready(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_ready;
      return 0;
    case 5: // io_start
      getBitWidth_io_start(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_start;
      return 0;
    case 6: // io_b_0
      getBitWidth_io_b_0(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_b_0;
      return 0;
    case 7: // io_b_1
      getBitWidth_io_b_1(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_b_1;
      return 0;
    case 8: // io_b_2
      getBitWidth_io_b_2(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_b_2;
      return 0;
    case 9: // io_b_3
      getBitWidth_io_b_3(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_b_3;
      return 0;
    case 10: // io_b_4
      getBitWidth_io_b_4(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_b_4;
      return 0;
    case 11: // io_b_5
      getBitWidth_io_b_5(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_b_5;
      return 0;
    case 12: // io_b_6
      getBitWidth_io_b_6(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_b_6;
      return 0;
    case 13: // io_b_7
      getBitWidth_io_b_7(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_b_7;
      return 0;
    case 14: // io_b_8
      getBitWidth_io_b_8(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_b_8;
      return 0;
    case 15: // io_b_9
      getBitWidth_io_b_9(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_b_9;
      return 0;
    case 16: // io_b_10
      getBitWidth_io_b_10(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_b_10;
      return 0;
    case 17: // io_b_11
      getBitWidth_io_b_11(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_b_11;
      return 0;
    case 18: // io_b_12
      getBitWidth_io_b_12(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_b_12;
      return 0;
    case 19: // io_b_13
      getBitWidth_io_b_13(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_b_13;
      return 0;
    case 20: // io_b_14
      getBitWidth_io_b_14(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_b_14;
      return 0;
    case 21: // io_b_15
      getBitWidth_io_b_15(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_b_15;
      return 0;
    case 22: // io_b_16
      getBitWidth_io_b_16(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_b_16;
      return 0;
    case 23: // io_b_17
      getBitWidth_io_b_17(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_b_17;
      return 0;
    case 24: // io_b_18
      getBitWidth_io_b_18(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_b_18;
      return 0;
    case 25: // io_b_19
      getBitWidth_io_b_19(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_b_19;
      return 0;
    case 26: // io_b_20
      getBitWidth_io_b_20(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_b_20;
      return 0;
    case 27: // io_b_21
      getBitWidth_io_b_21(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_b_21;
      return 0;
    case 28: // io_b_22
      getBitWidth_io_b_22(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_b_22;
      return 0;
    case 29: // io_b_23
      getBitWidth_io_b_23(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_b_23;
      return 0;
    case 30: // io_a_0
      getBitWidth_io_a_0(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_a_0;
      return 0;
    case 31: // io_a_1
      getBitWidth_io_a_1(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_a_1;
      return 0;
    case 32: // io_a_2
      getBitWidth_io_a_2(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_a_2;
      return 0;
    case 33: // io_a_3
      getBitWidth_io_a_3(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_a_3;
      return 0;
    case 34: // io_a_4
      getBitWidth_io_a_4(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_a_4;
      return 0;
    case 35: // io_a_5
      getBitWidth_io_a_5(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_a_5;
      return 0;
    case 36: // io_a_6
      getBitWidth_io_a_6(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_a_6;
      return 0;
    case 37: // io_a_7
      getBitWidth_io_a_7(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_a_7;
      return 0;
    case 38: // io_a_8
      getBitWidth_io_a_8(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_a_8;
      return 0;
    case 39: // io_a_9
      getBitWidth_io_a_9(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_a_9;
      return 0;
    case 40: // io_a_10
      getBitWidth_io_a_10(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_a_10;
      return 0;
    case 41: // io_a_11
      getBitWidth_io_a_11(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_a_11;
      return 0;
    case 42: // io_a_12
      getBitWidth_io_a_12(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_a_12;
      return 0;
    case 43: // io_a_13
      getBitWidth_io_a_13(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_a_13;
      return 0;
    case 44: // io_a_14
      getBitWidth_io_a_14(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_a_14;
      return 0;
    case 45: // io_a_15
      getBitWidth_io_a_15(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_a_15;
      return 0;
    case 46: // io_a_16
      getBitWidth_io_a_16(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_a_16;
      return 0;
    case 47: // io_a_17
      getBitWidth_io_a_17(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_a_17;
      return 0;
    case 48: // io_a_18
      getBitWidth_io_a_18(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_a_18;
      return 0;
    case 49: // io_a_19
      getBitWidth_io_a_19(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_a_19;
      return 0;
    case 50: // io_a_20
      getBitWidth_io_a_20(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_a_20;
      return 0;
    case 51: // io_a_21
      getBitWidth_io_a_21(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_a_21;
      return 0;
    case 52: // io_a_22
      getBitWidth_io_a_22(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_a_22;
      return 0;
    case 53: // io_a_23
      getBitWidth_io_a_23(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_a_23;
      return 0;
    default:
      return -1;
  }
}

int port_setter(int id, int *bitWidth, void (**setter)(const uint8_t*)) {
  switch (id) {
    case 0: // clock
      getBitWidth_clock(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_clock;
      return 0;
    case 1: // reset
      getBitWidth_reset(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_reset;
      return 0;
    case 5: // io_start
      getBitWidth_io_start(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_start;
      return 0;
    case 6: // io_b_0
      getBitWidth_io_b_0(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_b_0;
      return 0;
    case 7: // io_b_1
      getBitWidth_io_b_1(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_b_1;
      return 0;
    case 8: // io_b_2
      getBitWidth_io_b_2(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_b_2;
      return 0;
    case 9: // io_b_3
      getBitWidth_io_b_3(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_b_3;
      return 0;
    case 10: // io_b_4
      getBitWidth_io_b_4(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_b_4;
      return 0;
    case 11: // io_b_5
      getBitWidth_io_b_5(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_b_5;
      return 0;
    case 12: // io_b_6
      getBitWidth_io_b_6(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_b_6;
      return 0;
    case 13: // io_b_7
      getBitWidth_io_b_7(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_b_7;
      return 0;
    case 14: // io_b_8
      getBitWidth_io_b_8(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_b_8;
      return 0;
    case 15: // io_b_9
      getBitWidth_io_b_9(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_b_9;
      return 0;
    case 16: // io_b_10
      getBitWidth_io_b_10(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_b_10;
      return 0;
    case 17: // io_b_11
      getBitWidth_io_b_11(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_b_11;
      return 0;
    case 18: // io_b_12
      getBitWidth_io_b_12(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_b_12;
      return 0;
    case 19: // io_b_13
      getBitWidth_io_b_13(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_b_13;
      return 0;
    case 20: // io_b_14
      getBitWidth_io_b_14(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_b_14;
      return 0;
    case 21: // io_b_15
      getBitWidth_io_b_15(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_b_15;
      return 0;
    case 22: // io_b_16
      getBitWidth_io_b_16(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_b_16;
      return 0;
    case 23: // io_b_17
      getBitWidth_io_b_17(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_b_17;
      return 0;
    case 24: // io_b_18
      getBitWidth_io_b_18(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_b_18;
      return 0;
    case 25: // io_b_19
      getBitWidth_io_b_19(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_b_19;
      return 0;
    case 26: // io_b_20
      getBitWidth_io_b_20(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_b_20;
      return 0;
    case 27: // io_b_21
      getBitWidth_io_b_21(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_b_21;
      return 0;
    case 28: // io_b_22
      getBitWidth_io_b_22(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_b_22;
      return 0;
    case 29: // io_b_23
      getBitWidth_io_b_23(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_b_23;
      return 0;
    case 30: // io_a_0
      getBitWidth_io_a_0(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_a_0;
      return 0;
    case 31: // io_a_1
      getBitWidth_io_a_1(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_a_1;
      return 0;
    case 32: // io_a_2
      getBitWidth_io_a_2(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_a_2;
      return 0;
    case 33: // io_a_3
      getBitWidth_io_a_3(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_a_3;
      return 0;
    case 34: // io_a_4
      getBitWidth_io_a_4(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_a_4;
      return 0;
    case 35: // io_a_5
      getBitWidth_io_a_5(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_a_5;
      return 0;
    case 36: // io_a_6
      getBitWidth_io_a_6(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_a_6;
      return 0;
    case 37: // io_a_7
      getBitWidth_io_a_7(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_a_7;
      return 0;
    case 38: // io_a_8
      getBitWidth_io_a_8(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_a_8;
      return 0;
    case 39: // io_a_9
      getBitWidth_io_a_9(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_a_9;
      return 0;
    case 40: // io_a_10
      getBitWidth_io_a_10(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_a_10;
      return 0;
    case 41: // io_a_11
      getBitWidth_io_a_11(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_a_11;
      return 0;
    case 42: // io_a_12
      getBitWidth_io_a_12(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_a_12;
      return 0;
    case 43: // io_a_13
      getBitWidth_io_a_13(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_a_13;
      return 0;
    case 44: // io_a_14
      getBitWidth_io_a_14(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_a_14;
      return 0;
    case 45: // io_a_15
      getBitWidth_io_a_15(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_a_15;
      return 0;
    case 46: // io_a_16
      getBitWidth_io_a_16(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_a_16;
      return 0;
    case 47: // io_a_17
      getBitWidth_io_a_17(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_a_17;
      return 0;
    case 48: // io_a_18
      getBitWidth_io_a_18(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_a_18;
      return 0;
    case 49: // io_a_19
      getBitWidth_io_a_19(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_a_19;
      return 0;
    case 50: // io_a_20
      getBitWidth_io_a_20(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_a_20;
      return 0;
    case 51: // io_a_21
      getBitWidth_io_a_21(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_a_21;
      return 0;
    case 52: // io_a_22
      getBitWidth_io_a_22(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_a_22;
      return 0;
    case 53: // io_a_23
      getBitWidth_io_a_23(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_a_23;
      return 0;
    default:
      return -1;
  }
}

} // extern "C"

