# 首次运行结果（2026-09-03）

命令：

```bash
python3 validate.py
```

统一以各case在8 fractional bits下的independent RTN sample maximum作为empirical contract。

| Case | RTN最小bits | Exact joint最小bits | Prefix-3 joint最小bits | Empirical saving |
|---|---:|---:|---:|---:|
| equal_sum | 8 | 7 | 7 | 1 bit |
| signed_reconvergence | 8 | 6 | 7 | 1–2 bits |
| multi_output | 8 | 7 | 7 | 1 bit |

`equal_sum` 在8 bits时：

- independent RTN sample maximum：0.007529；
- exact joint sample maximum：0.001953；
- prefix-3 selector sample maximum：0.002783。

该case的解析bound为：

\[
\Gamma_{RTN}\le 4\Delta/2=0.0078125,
\qquad
\Gamma_{joint}\le\Delta/2=0.001953125.
\]

## 当前结论

**Numerical oracle：初步通过。Hardware/PPA gate：未测试。**

三个case都出现至少1 bit headroom，而且只观察3个discarded prefix bits仍保留1 bit。下一步的决定性工作不是继续增加synthetic matrices，而是从真实scheduled DFG抽取cohorts，加入physical span、alignment、selector truth-table minimization和post-route cost。若扣除这些开销后不能保留至少1 bit，核心论文假设仍然失败。

