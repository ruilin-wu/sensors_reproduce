# CohortRound software joint-rounding oracle

本目录在生成 RTL 前验证最关键的数值假设：对具有 downstream reconvergence 的小型 quantizer cohort，联合选择 floor/ceil vector 是否显著优于 independent round-to-nearest（RTN），并能否换取至少一个 fractional bit。

运行：

```bash
python3 validate.py
```

脚本对三类 affine sensitivity matrix 运行 deterministic Monte Carlo sweep：

- equal-sensitivity sum；
- signed reconvergence；
- multi-output mixed sensitivity。

它比较 independent RTN、读取完整 residual 的 exact joint oracle，以及只读取3个 leading discarded bits 的 prefix selector。输出 mean、p99、sample maximum error，以及在统一 empirical error contract 下的最小 fractional width。

## 判定边界

`equal_sum` 同时报告解析 worst-case bound；其他结果仍是 sample-based oracle，不是最终 deterministic certificate，也没有计入 selector/routing/alignment成本。通过该测试只能说明值得进入 cohort locality 和 RTL cost 阶段。

FIR/matvec/convolution suite见`kernel_suite.py`，完整结果见[`KERNEL_RESULTS.md`](KERNEL_RESULTS.md)。

包含192组reduction size、distribution、prefix与selector-cost压力条件的扩展测试见`boundary_suite.py`和[`BOUNDARY_RESULTS.md`](BOUNDARY_RESULTS.md)。
