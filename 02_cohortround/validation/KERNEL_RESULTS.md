# CohortRound：基础 FPGA DSP kernel 验证结果

运行命令：

```bash
python3 kernel_suite.py
```

测试8-tap FIR、4×4 matrix-vector和3×3 convolution。每个product先形成real-valued term，再在reduction前量化。RTN在10 fractional bits时的sample maximum作为各kernel统一empirical contract；joint selector比较完整residual和2/3/4-bit discarded prefixes。

## 位宽结果

| Kernel | RTN bits | Exact joint bits | Prefix-2 | Prefix-3 | Prefix-4 | 最佳可实现prefix |
|---|---:|---:|---:|---:|---:|---|
| FIR8 | 10 | 9 | 10 | 9 | 9 | Prefix-3，省1 bit |
| MatVec4 | 10 | 9 | 10 | 9 | 9 | Prefix-3，省1 bit |
| Conv3×3 | 10 | 9 | 10 | 10 | 9 | Prefix-4，省1 bit |

三个基础reduction kernels都出现1 fractional bit headroom。Conv3×3同时说明selector观察信息不能太少：3-bit prefix略微超过contract，4-bit prefix才保留saving。

## Hardware proxy

Proxy同时计入term registers、adder tree和selector logic；尚未计入真实placement/routing。

| Kernel | RTN datapath | 最佳prefix总成本 | Proxy净节省 | Full-width late-rounding baseline |
|---|---:|---:|---:|---:|
| FIR8 | 2160 | 1871 | 13.38% | 2412 |
| MatVec4 | 4032 | 3500 | 13.19% | 4032 |
| Conv3×3 | 2448 | 2121 | 13.36% | 2736 |

对应selector允许的break-even overhead分别约为345、644和391 cost units；当前prefix selector proxy分别使用约56、112和64 units，仍留下正margin。

## 最终判定

**在基础FPGA DSP reduction kernels范围内：当前最坚挺，但仍是“数值+粗硬件proxy通过”，不是RTL通过。**

- 3/3 kernels保持相同empirical maximum-error contract并减少1 bit；
- FIR、matvec和convolution都天然存在physically local parallel terms；
- 结果不是只来自一个人工sensitivity matrix；
- 但真正生死线仍是bounded-depth selector综合后，routing、fanout、alignment与Fmax是否吃掉约13%的proxy收益；
- Sample maximum不是formal certificate，正式论文仍需解析/MILP worst-case proof。

