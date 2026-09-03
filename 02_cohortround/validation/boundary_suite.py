#!/usr/bin/env python3
"""Stress CohortRound across reduction size, distribution and selector visibility."""

from __future__ import annotations

import json
import math
import numpy as np

RNG = np.random.default_rng(2102)


def rounded_sum(terms, f, group_size, method, prefix_bits=3):
    delta = 2.0 ** -f
    scaled = terms / delta
    lo = np.floor(scaled)
    residue = scaled - lo
    decisions = np.zeros_like(terms)
    for begin in range(0, terms.shape[1], group_size):
        ids = np.arange(begin, min(begin + group_size, terms.shape[1]))
        seen = residue[:, ids]
        if method == "rtn":
            decisions[:, ids] = seen >= .5
            continue
        if method == "prefix":
            cells = np.floor(seen * (1 << prefix_bits))
            seen = (cells + .5) / (1 << prefix_bits)
        count = np.rint(np.sum(seen, axis=1)).astype(int)
        order = np.argsort(-seen, axis=1)
        for rank in range(len(ids)):
            take = rank < count
            decisions[np.arange(len(terms))[take], ids[order[take, rank]]] = 1
    return delta * np.sum(lo + decisions, axis=1)


def samples(kind, n, terms):
    if kind == "normal":
        return RNG.normal(0, .35, (n, terms))
    if kind == "uniform":
        return RNG.uniform(-.7, .7, (n, terms))
    if kind == "laplace":
        return RNG.laplace(0, .22, (n, terms))
    if kind == "correlated":
        common = RNG.normal(0, .3, (n, 1))
        return common + RNG.normal(0, .02, (n, terms))
    raise ValueError(kind)


def min_bits(data, group, method, target, prefix=3):
    ref = np.sum(data, axis=1)
    for f in range(4, 13):
        err = np.max(np.abs(rounded_sum(data, f, group, method, prefix) - ref))
        if err <= target:
            return f
    return None


def proxy(n, f, group, prefix, selector_scale):
    width = f + 2
    datapath = (2 * n - 1) * width * width
    cohorts = math.ceil(n / group)
    selector = cohorts * ((1 << group) + prefix * group) * selector_scale
    return datapath + selector


def main():
    rows = []
    for nterms in (2, 4, 8, 16, 32):
        for distribution in ("normal", "uniform", "laplace", "correlated"):
            data = samples(distribution, 12000, nterms)
            reference = np.sum(data, axis=1)
            target = float(np.max(np.abs(rounded_sum(data, 10, nterms, "rtn") - reference)))
            for group in sorted(set((2, 4, min(8, nterms)))):
                if group > nterms or nterms % group:
                    continue
                rtn = min_bits(data, group, "rtn", target)
                exact = min_bits(data, group, "exact", target)
                for prefix in (2, 3, 4, 5):
                    pref = min_bits(data, group, "prefix", target, prefix)
                    base = proxy(nterms, rtn, group, prefix, 0)
                    cost_sensitivity = {}
                    for selector_scale in (.5, 1.0, 2.0, 4.0):
                        joint = proxy(nterms, pref, group, prefix, selector_scale)
                        cost_sensitivity[str(selector_scale)] = (base - joint) / base
                    rows.append({
                        "terms": nterms,
                        "distribution": distribution,
                        "group_size": group,
                        "prefix_bits": prefix,
                        "rtn_bits": rtn,
                        "exact_bits": exact,
                        "prefix_bits_required_width": pref,
                        "saved_fractional_bits": None if pref is None else rtn - pref,
                        "cost_saving_by_selector_scale": cost_sensitivity,
                    })

    formal = []
    for group in (2, 4, 8, 16):
        for prefix in (2, 3, 4, 5):
            # One cohort. Exact joint rounding is <= Δ/2. Prefix observation adds
            # at most g*Δ/2^(p+1) to that bound.
            formal.append({
                "group_size": group,
                "prefix_bits": prefix,
                "independent_rtn_bound_in_delta": group / 2,
                "exact_joint_bound_in_delta": .5,
                "prefix_joint_bound_in_delta": .5 + group / (2 ** (prefix + 1)),
            })
    valid = [r for r in rows if r["prefix_bits_required_width"] is not None]
    print(json.dumps({
        "empirical_cases": len(rows),
        "fraction_saving_at_least_one_bit": float(np.mean([r["saved_fractional_bits"] >= 1 for r in valid])),
        "fraction_positive_proxy_at_nominal_selector": float(np.mean([r["cost_saving_by_selector_scale"]["1.0"] > 0 for r in valid])),
        "fraction_positive_proxy_at_4x_selector": float(np.mean([r["cost_saving_by_selector_scale"]["4.0"] > 0 for r in valid])),
        "worst_saved_bits": min(r["saved_fractional_bits"] for r in valid),
        "best_saved_bits": max(r["saved_fractional_bits"] for r in valid),
        "rows": rows,
        "formal_bounds": formal,
        "unsupported_boundaries": [
            "unequal quantization steps within one cohort",
            "saturation/overflow before the joint selector",
            "a rounded term consumed outside its cohort",
            "selector delay, routing and fanout not represented by the proxy",
        ],
    }, indent=2))


if __name__ == "__main__":
    main()
