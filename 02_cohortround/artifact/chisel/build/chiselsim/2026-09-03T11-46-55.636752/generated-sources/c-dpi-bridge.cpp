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
void getBitWidth_io_upMask_0(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_upMask_0(result);
           svSetScope(prev);
        }
void getBits_io_upMask_0(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_upMask_0(result);
           svSetScope(prev);
        }
void getBitWidth_io_upMask_1(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_upMask_1(result);
           svSetScope(prev);
        }
void getBits_io_upMask_1(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_upMask_1(result);
           svSetScope(prev);
        }
void getBitWidth_io_upMask_2(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_upMask_2(result);
           svSetScope(prev);
        }
void getBits_io_upMask_2(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_upMask_2(result);
           svSetScope(prev);
        }
void getBitWidth_io_upMask_3(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_upMask_3(result);
           svSetScope(prev);
        }
void getBits_io_upMask_3(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_upMask_3(result);
           svSetScope(prev);
        }
void getBitWidth_io_upCount(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_upCount(result);
           svSetScope(prev);
        }
void getBits_io_upCount(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_upCount(result);
           svSetScope(prev);
        }
void getBitWidth_io_prefix_0(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_prefix_0(result);
           svSetScope(prev);
        }
void getBits_io_prefix_0(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_prefix_0(result);
           svSetScope(prev);
        }
void setBits_io_prefix_0(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_prefix_0(data);
           svSetScope(prev);
        }
void getBitWidth_io_prefix_1(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_prefix_1(result);
           svSetScope(prev);
        }
void getBits_io_prefix_1(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_prefix_1(result);
           svSetScope(prev);
        }
void setBits_io_prefix_1(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_prefix_1(data);
           svSetScope(prev);
        }
void getBitWidth_io_prefix_2(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_prefix_2(result);
           svSetScope(prev);
        }
void getBits_io_prefix_2(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_prefix_2(result);
           svSetScope(prev);
        }
void setBits_io_prefix_2(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_prefix_2(data);
           svSetScope(prev);
        }
void getBitWidth_io_prefix_3(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_io_prefix_3(result);
           svSetScope(prev);
        }
void getBits_io_prefix_3(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_io_prefix_3(result);
           svSetScope(prev);
        }
void setBits_io_prefix_3(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_io_prefix_3(data);
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
    case 2: // io_upMask_0
      getBitWidth_io_upMask_0(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_upMask_0;
      return 0;
    case 3: // io_upMask_1
      getBitWidth_io_upMask_1(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_upMask_1;
      return 0;
    case 4: // io_upMask_2
      getBitWidth_io_upMask_2(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_upMask_2;
      return 0;
    case 5: // io_upMask_3
      getBitWidth_io_upMask_3(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_upMask_3;
      return 0;
    case 6: // io_upCount
      getBitWidth_io_upCount(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_upCount;
      return 0;
    case 7: // io_prefix_0
      getBitWidth_io_prefix_0(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_prefix_0;
      return 0;
    case 8: // io_prefix_1
      getBitWidth_io_prefix_1(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_prefix_1;
      return 0;
    case 9: // io_prefix_2
      getBitWidth_io_prefix_2(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_prefix_2;
      return 0;
    case 10: // io_prefix_3
      getBitWidth_io_prefix_3(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_io_prefix_3;
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
    case 7: // io_prefix_0
      getBitWidth_io_prefix_0(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_prefix_0;
      return 0;
    case 8: // io_prefix_1
      getBitWidth_io_prefix_1(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_prefix_1;
      return 0;
    case 9: // io_prefix_2
      getBitWidth_io_prefix_2(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_prefix_2;
      return 0;
    case 10: // io_prefix_3
      getBitWidth_io_prefix_3(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_io_prefix_3;
      return 0;
    default:
      return -1;
  }
}

} // extern "C"

