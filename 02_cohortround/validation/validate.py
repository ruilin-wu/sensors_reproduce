#!/usr/bin/env python3
"""Exact and prefix-aware joint-rounding screening oracle."""

from __future__ import annotations

import itertools
import json
import numpy as np


RNG = np.random.default_rng(20260903)


CASES = {
    "equal_sum": np.array([[1.0, 1.0, 1.0, 1.0]]),
    "signed_reconvergence": np.array(
        [[1.0, -1.0, 0.75, -0.75], [0.20, 0.20, -0.15, -0.15]]
    ),
    "multi_output": np.array(
        [
            [1.0, 0.8, -0.7, -0.6],
            [0.15, -0.20, 1.0, -0.9],
            [0.45, 0.45, 0.10, 0.10],
        ]
    ),
}


def error_norm(a: np.ndarray, r: np.ndarray, sensitivity: np.ndarray, delta: float) -> np.ndarray:
    local = delta * (r - a)
    out = local @ sensitivity.T
    return np.max(np.abs(out), axis=1)


def joint_choice(a: np.ndarray, sensitivity: np.ndarray, delta: float) -> tuple[np.ndarray, np.ndarray]:
    k = a.shape[1]
    choices = np.asarray(list(itertools.product((0.0, 1.0), repeat=k)))
    best_error = np.full(a.shape[0], np.inf)
    best_choice = np.zeros_like(a)
    for choice in choices:
        tiled = np.broadcast_to(choice, a.shape)
        err = error_norm(a, tiled, sensitivity, delta)
        update = err < best_error
        best_error[update] = err[update]
        best_choice[update] = choice
    return best_choice, best_error


def evaluate(case: str, sensitivity: np.ndarray, frac_bits: int, n: int = 30000) -> dict:
    k = sensitivity.shape[1]
    a = RNG.random((n, k))
    delta = 2.0 ** (-frac_bits)

    rtn = (a >= 0.5).astype(float)
    rtn_error = error_norm(a, rtn, sensitivity, delta)

    _, exact_error = joint_choice(a, sensitivity, delta)

    prefix_bits = 3
    prefixes = np.floor(a * (1 << prefix_bits))
    midpoint = (prefixes + 0.5) / (1 << prefix_bits)
    prefix_choice, _ = joint_choice(midpoint, sensitivity, delta)
    prefix_error = error_norm(a, prefix_choice, sensitivity, delta)

    def stats(values: np.ndarray) -> dict:
        return {
            "mean": float(np.mean(values)),
            "p99": float(np.quantile(values, 0.99)),
            "sample_max": float(np.max(values)),
        }

    return {
        "case": case,
        "frac_bits": frac_bits,
        "cohort_size": k,
        "rtn": stats(rtn_error),
        "exact_joint": stats(exact_error),
        "prefix3_joint": stats(prefix_error),
    }


def main() -> None:
    global RNG
    all_rows = []
    for case_index, (name, sensitivity) in enumerate(CASES.items()):
        for bits in range(4, 11):
            RNG = np.random.default_rng(10000 + 100 * case_index + bits)
            all_rows.append(evaluate(name, sensitivity, bits))

    # Contract is the independent-RTN sample maximum at eight fractional bits.
    contracts = {}
    width_results = {}
    for name in CASES:
        reference = next(row for row in all_rows if row["case"] == name and row["frac_bits"] == 8)
        contract = reference["rtn"]["sample_max"]
        contracts[name] = contract
        width_results[name] = {}
        for method in ("rtn", "exact_joint", "prefix3_joint"):
            feasible = [
                row["frac_bits"]
                for row in all_rows
                if row["case"] == name and row[method]["sample_max"] <= contract
            ]
            width_results[name][method] = min(feasible) if feasible else None

    report = {
        "kind": "software_oracle_not_post_route_result",
        "contracts_from_rtn_f8_sample_max": contracts,
        "minimum_fractional_bits": width_results,
        "equal_sum_analytic_bounds_at_f8": {
            "independent_rtn": 4 * (2.0 ** -8) / 2.0,
            "joint": (2.0 ** -8) / 2.0,
        },
        "rows": all_rows,
    }
    print(json.dumps(report, indent=2, sort_keys=True))


if __name__ == "__main__":
    main()

