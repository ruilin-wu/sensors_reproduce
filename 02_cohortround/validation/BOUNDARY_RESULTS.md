# CohortRound 全边界 Python 验证

运行：`python3 boundary_suite.py`

## 覆盖范围

测试2/4/8/16/32项reduction，cohort size为2/4/8，discarded-prefix观察精度为2–5 bits，输入分布包含normal、uniform、Laplace和强相关数据。共192组empirical width/cost条件，每组12,000个reduction samples。额外扫描selector成本为名义proxy的0.5×、1×、2×和4×。

## 数值与成本结果

总体只有50%的配置节省至少1 fractional bit，说明该机制不能无条件启用：

| Cohort size | 至少省1 bit | 名义selector成本下净正收益 | selector成本4×下净正收益 | 最大省位 |
|---:|---:|---:|---:|---:|
| 2 | 0% | 0% | 0% | 0 |
| 4 | 75% | 75% | 75% | 1 |
| 8 | 100% | 100% | 0% | 2 |

Prefix信息也存在门槛：prefix-2只有29.2%的配置省位；prefix-3为56.2%，prefix-4为56.2%，prefix-5为58.3%。不同数据分布的省位比例在45.8%–52.1%，说明收益不是只来自Gaussian数据，但相关residual略微降低收益。

对一个包含`g`项、quantization step为`Δ`的合法cohort：

- independent RTN的确定性sum-error bound为`gΔ/2`；
- exact joint rounding为`Δ/2`；
- 只观察p-bit residual prefix时，一个保守bound为`Δ/2 + gΔ/2^(p+1)`。

因此机制本身有明确的worst-case improvement，但实现是否省成本取决于cohort大小、prefix精度和selector物理代价。先前FIR8、MatVec4、Conv3×3的约13% proxy saving属于有利但并非普遍的点。

## 必须满足的合法性条件

- 同一cohort内必须能对齐quantization step；
- term不能在joint selector前saturate/overflow；
- 被协同round的term不能同时被cohort外部消费者要求独立语义；
- selector必须physically local，并保持目标II；
- prefix/tie semantics必须与bit-true RTL一致。

## 判定

**CohortRound仍是基础DSP reduction kernel上最坚挺的idea，但应定义为compiler-gated optimization，而不是普适替换RTN。** Python结果支持新数值机制；同时清楚给出了negative cases：2项cohort无收益、观察位过少无收益、大cohort的selector昂贵时成本收益消失。DAC论文的决定性证据仍需selector RTL、post-route Fmax/energy和formal saturation-aware certificate。

