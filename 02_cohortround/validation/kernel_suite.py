#!/usr/bin/env python3
"""Joint-rounding oracle on FIR, matrix-vector, and convolution reductions."""

from __future__ import annotations

import json
import math
import numpy as np


RNG = np.random.default_rng(2002)


def reduce_quantized_terms(
    terms: np.ndarray,
    frac_bits: int,
    groups: list[list[int]],
    method: str,
    prefix_bits: int = 3,
) -> np.ndarray:
    """Quantize term rows and return their reduction.

    For equal-sensitivity reductions, joint discrepancy depends only on the
    number of ceil decisions in a group. The selector chooses that count from
    either exact fractions or prefix-cell midpoints.
    """
    delta = 2.0 ** (-frac_bits)
    scaled = terms / delta
    floor_value = np.floor(scaled)
    residual = scaled - floor_value
    decisions = np.zeros_like(terms)

    if method == "rtn":
        decisions = (residual >= 0.5).astype(float)
    else:
        observed = residual
        if method.startswith("prefix"):
            prefix_bits = int(method.removeprefix("prefix"))
            prefix = np.floor(residual * (1 << prefix_bits))
            observed = (prefix + 0.5) / (1 << prefix_bits)
        for group in groups:
            if len(group) == 1:
                decisions[:, group] = (observed[:, group] >= 0.5).astype(float)
                continue
            count = np.rint(np.sum(observed[:, group], axis=1)).astype(int)
            order = np.argsort(-observed[:, group], axis=1)
            for rank in range(len(group)):
                take = rank < count
                selected_local = order[:, rank]
                decisions[np.arange(terms.shape[0])[take], np.asarray(group)[selected_local[take]]] = 1.0

    quantized = delta * (floor_value + decisions)
    return np.sum(quantized, axis=1)


def fir8_terms(n: int = 16000) -> tuple[np.ndarray, np.ndarray, list[list[int]]]:
    x = RNG.normal(0.0, 0.35, n + 7)
    h = np.array([0.04, -0.09, 0.15, 0.30, 0.30, 0.15, -0.09, 0.04])
    windows = np.lib.stride_tricks.sliding_window_view(x, 8)
    terms = windows * h[None, :]
    return terms, np.sum(terms, axis=1), [list(range(0, 4)), list(range(4, 8))]


def matvec4_terms(n: int = 5000) -> tuple[list[np.ndarray], np.ndarray, list[list[int]]]:
    x = RNG.normal(0.0, 0.4, (n, 4))
    w = np.array(
        [[0.5, -0.2, 0.1, 0.4], [-0.3, 0.6, 0.2, 0.1], [0.2, 0.2, -0.5, 0.3], [0.1, -0.4, 0.3, 0.5]]
    )
    terms = [x * row[None, :] for row in w]
    reference = x @ w.T
    return terms, reference, [list(range(4))]


def conv3x3_terms(n: int = 12000) -> tuple[np.ndarray, np.ndarray, list[list[int]]]:
    patches = RNG.normal(0.0, 0.30, (n, 9))
    kernel = np.array([0.05, 0.10, 0.05, 0.10, 0.40, 0.10, 0.05, 0.10, 0.05])
    terms = patches * kernel[None, :]
    return terms, np.sum(terms, axis=1), [list(range(0, 4)), list(range(4, 8)), [8]]


def error_stats(error: np.ndarray) -> dict:
    absolute = np.abs(error)
    return {
        "mae": float(np.mean(absolute)),
        "p99": float(np.quantile(absolute, 0.99)),
        "sample_max": float(np.max(absolute)),
    }


def evaluate_scalar(terms, reference, groups, bits, method):
    output = reduce_quantized_terms(terms, bits, groups, method)
    return error_stats(output - reference)


def evaluate_matvec(terms_by_output, reference, groups, bits, method):
    output = np.column_stack(
        [reduce_quantized_terms(terms, bits, groups, method) for terms in terms_by_output]
    )
    per_sample = np.max(np.abs(output - reference), axis=1)
    return {
        "mae": float(np.mean(per_sample)),
        "p99": float(np.quantile(per_sample, 0.99)),
        "sample_max": float(np.max(per_sample)),
    }


def selector_cost(groups: list[list[int]], prefix_bits: int = 3) -> float:
    return float(sum((1 << len(g)) + prefix_bits * len(g) for g in groups if len(g) > 1))


def datapath_cost(num_terms: int, adder_count: int, frac_bits: int, integer_bits: int = 2) -> float:
    width = integer_bits + frac_bits
    return float((num_terms + adder_count) * width * width)


def main() -> None:
    fir_terms, fir_ref, fir_groups = fir8_terms()
    mat_terms, mat_ref, mat_groups = matvec4_terms()
    conv_terms, conv_ref, conv_groups = conv3x3_terms()
    cases = {
        "fir8": (lambda b, m: evaluate_scalar(fir_terms, fir_ref, fir_groups, b, m), 8, 7, fir_groups),
        "matvec4": (lambda b, m: evaluate_matvec(mat_terms, mat_ref, mat_groups, b, m), 16, 12, mat_groups * 4),
        "conv3x3": (lambda b, m: evaluate_scalar(conv_terms, conv_ref, conv_groups, b, m), 9, 8, conv_groups),
    }

    rows = []
    summary = {}
    methods = ("rtn", "exact", "prefix2", "prefix3", "prefix4")
    for name, (evaluate, num_terms, adder_count, physical_groups) in cases.items():
        for bits in range(5, 13):
            rows.append(
                {
                    "kernel": name,
                    "fractional_bits": bits,
                    **{method: evaluate(bits, method) for method in methods},
                }
            )
        target = next(r for r in rows if r["kernel"] == name and r["fractional_bits"] == 10)["rtn"]["sample_max"]
        min_bits = {}
        for method in methods:
            min_bits[method] = min(
                r["fractional_bits"]
                for r in rows
                if r["kernel"] == name and r[method]["sample_max"] <= target
            )
        base_cost = datapath_cost(num_terms, adder_count, min_bits["rtn"])
        prefix_costs = {
            method: datapath_cost(num_terms, adder_count, min_bits[method])
            + selector_cost(physical_groups, int(method.removeprefix("prefix")))
            for method in ("prefix2", "prefix3", "prefix4")
        }
        best_prefix = min(prefix_costs, key=prefix_costs.get)
        joint_cost = prefix_costs[best_prefix]
        full_width_late_round_cost = datapath_cost(0, adder_count, 16) + (2 + min_bits["rtn"]) ** 2
        summary[name] = {
            "empirical_contract": target,
            "minimum_fractional_bits": min_bits,
            "best_prefix_selector": best_prefix,
            "fractional_bit_saving_best_prefix": min_bits["rtn"] - min_bits[best_prefix],
            "rtn_datapath_cost_proxy": base_cost,
            "prefix_total_cost_proxies": prefix_costs,
            "best_prefix_total_cost_proxy": joint_cost,
            "net_cost_proxy_saving": (base_cost - joint_cost) / base_cost,
            "late_rounding_full_width_cost_proxy": full_width_late_round_cost,
        }

    print(json.dumps({"kind": "basic_reduction_kernel_oracle", "summary": summary, "rows": rows}, indent=2))


if __name__ == "__main__":
    main()
