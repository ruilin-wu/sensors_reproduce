# CohortRound：Vivado 前置 Gate 报告

日期：2026-09-03

## 结论

Vivado 之前能够完成的 compiler、numerical model、RTL elaboration、RTL
simulation、baseline control 和 lint 均已完成并通过。当前状态不是
“RTL/compiler gate 失败”，而是 **pre-Vivado gate 通过，post-route PPA 尚未执行**。

同时发现一个会影响最终论文结论的重要事实：当前 prototype 复用完整精度的
digit-serial multiplier，CohortRound 只缩窄其后的 reduction datapath。因此已经
证明机制可实现，但尚未证明总面积/功耗能达到 10% 以上改善。

## 已实现内容

- DSK 新 intrinsic：`cohort_mac_reduce`。
- 仅接受 canonical real Fixed dot product 的 fail-closed recognizer。
- DSK-to-Chisel lowering。
- 4-term、3-bit residue-prefix selector，使用 midpoint sum 与 ties-to-even。
- 24-term signed MAC RTL：每四项共同产生一个 rounding correction。
- 三个严格匹配的 Vivado top：
  - `NarrowCohortDotProduct24`；
  - `IndependentRoundDotProduct24`；
  - `FullPrecisionDotProduct24`。
- 200 MHz、ZCU104 默认 part 的 out-of-context synth/place/route Tcl；part 可覆盖。

## 位宽变化

- 输入：`Fixed[16,14]`。
- 完整 product：32 bit，fraction=28。
- CohortRound product floor：17 bit，fraction=13。
- 4-term group accumulator：19 bit。
- CohortRound/global narrow accumulator：23 bit。
- full-precision baseline accumulator：38 bit。
- 输出：`Fixed[20,13]`。

这说明 compiler 已经真实缩窄 accumulator 和其输入 interconnect；但 multiplier
内部仍计算完整 product，低位 residue 也仍来自完整 product。后续若要证明更大的
PPA，需要增加 truncated-product/high-product-plus-prefix multiplier lowering，而不
只是缩窄 reduction。

## 实测结果

### Python/compiler gate

- 7 passed，0 failed。
- 4096/4096 个 selector prefix 组合通过。
- signed extreme、negative product 与 2000 个随机 24-term case 全部与独立 oracle
  一致。
- cell endpoint 最大误差满足 0.75 LSB bound。
- boundary checker 接受新 intrinsic。
- 非法 cohort shape 被拒绝，没有 silent fallback。

### Chisel/RTL gate

- 5 passed，0 failed。
- 4096/4096 RTL selector 组合通过。
- registered selector 的 one-cycle valid/bubble protocol 通过。
- 完整 24-term CohortRound RTL 通过极值与随机 cross-check。
- 两个 matched baseline 均通过独立 reference。
- CIRCT 成功生成三组 SystemVerilog。
- Verilator 5.050 对三组 RTL lint exit code 均为 0。
- 用 Tcl mock command 执行了 `run_all.tcl` 的完整三-top control flow，语法、路径
  分派和 report directory 均通过；真实 Vivado command semantics 仍需 Vivado 验证。
- 唯一 warning 是未使用 multiplier guard bits；CohortRound 还会提示主动丢弃的
  residue low bits，均不是功能错误。

### 原工程 regression

- Chisel main sources 编译通过。
- 原 `test_interpreter.py`：34 passed；另有 1 个既有 integration check 因仓库中
  缺少 `precision_analysis/reference_and_fixed.py` 被脚本记为 failed，但脚本自身
  exit code 为 0。该项与 CohortRound 修改无关，不能把它计作本次 regression pass。

## Vivado 实验已经准备好的控制变量

三组 top 保持相同的 24-term operation count、16-bit inputs、20-bit output、
digit-serial multiplier、start/ready/done protocol 和串行执行 schedule，只改变
rounding/reduction：joint rounding、independent RNE、full-precision late RNE。

Tcl 会为每个 top 分别输出 post-synth/post-route utilization、timing、power、DRC
和 checkpoint。默认 vectorless power 只能作 smoke test；论文数据必须用真实 DSP
workload 的 SAIF/VCD activity。

## 尚未通过的最终 Gate

本机没有 `vivado` executable，因此以下结果目前不存在：LUT、FF、DSP、Fmax、
WNS、post-route dynamic power。不能在这些数字产生前宣称 CohortRound 已经带来
10% area/energy 改善。

即使首次 Vivado 结果良好，DAC 版本还需进一步覆盖 parallel MAC、FIR/polyphase、
matrix/conv reduction 等结构，因为当前 shared serial multiplier 很可能掩盖
reduction 位宽节省。若三组结果差异很小，优先实现 truncated multiplier lowering，
而不是通过更换器件或放松 timing constraint 放大结果。
