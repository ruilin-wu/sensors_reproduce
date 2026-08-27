"""Minimal raw-IQ inference helpers for the 2018-trained two-FFT pipeline."""

from __future__ import annotations

from dataclasses import dataclass
from pathlib import Path
from typing import Iterable, Mapping

import numpy as np
import torch
import torch.nn as nn
import torch.nn.functional as F


CLASS_NAMES = [
    "BPSK",
    "MSK",
    "DQPSK",
    "8PSK",
    "QPSK",
    "16QAM",
    "64QAM",
    "256QAM",
]
COARSE_CLASS_NAMES = ["BPSK", "MSK", "DQPSK", "8PSK", "QPSK-like"]
FINE_CLASS_NAMES = ["QPSK", "16QAM", "64QAM", "256QAM"]

NFFT = 32768
TOP_K = 8
MIN_SEP_BINS = 8
CLIP_PERCENTILE = 96
BASELINE_HALF_WIDTH = 3200
RS_OFFSETS = np.arange(
    int(np.ceil(0.03 * NFFT)),
    int(np.floor(0.5001 * NFFT)) + 1,
    dtype=np.int32,
)
DC_EXCLUSION = np.float32(5.0 / NFFT)
HANN_WINDOW = np.hanning(NFFT)

LR8_24_FEATURES = (
    "x2_top5_f",
    "x2_top8_f",
    "x2_top5_minus_top6_db",
    "x2_energy_ratio_top4_of_8",
    "x2_sym8_score_min",
    "x2_sym8_score_min2",
    "x4_top1_af",
    "x4_top2_af",
    "x4_top3_db",
    "x4_top6_af",
    "x4_top7_f",
    "x4_top8_f",
    "x4_top8_af",
    "x4_top1_minus_top2_db",
    "x4_top2_minus_top3_db",
    "x4_top6_minus_top7_db",
    "x4_count_gt_m20_d8",
    "x4_sym8_score_min",
    "x4_sym8_score_min2",
    "x2_top3_db",
    "x4_top7_minus_top8_db",
    "x2_top1_minus_top2_db",
    "x2_top7_f",
    "x4_top2_f",
)

# Frozen parameters from ``lr8_24_2018train20.joblib``.  The original artifact
# is a scikit-learn Pipeline(SimpleImputer, StandardScaler,
# LogisticRegression).  Keeping the fitted numerical parameters here makes the
# inference path independent of joblib and scikit-learn while preserving the
# original float32 preprocessing and float64 decision function.
LR_IMPUTER_MEDIANS = np.asarray([
    9.1552734375e-05, 0.00018310546875, 0.11284255981445312,
    0.554083526134491, 0.16845703125, 0.33780717849731445,
    0.002593994140625, 0.07421875, -8.888044357299805,
    0.028961181640625, 0.0, 9.1552734375e-05, 0.029632568359375,
    6.4829607009887695, 0.8666105270385742, 0.11854171752929688,
    8.0, 0.1513671875, 0.4566507339477539, -0.9740371704101562,
    0.09572887420654297, 0.4912053346633911, -0.000152587890625,
    -0.000213623046875,
], dtype=np.float32)

LR_SCALER_MEAN = np.asarray([
    0.0001244540676302606, 0.00011140523815777095, 0.16734152073073316,
    0.657962291312768, 0.23964761084142072, 0.4153876321596437,
    0.032980062634993965, 0.1007182422260872, -9.258193555137138,
    0.048622165800516655, -0.0003652669291249843,
    0.00024330801420695088, 0.04905077125101429, 5.688181541119533,
    3.570012013738525, 0.17388256041691028, 7.383580030105369,
    0.2871310722447389, 0.6393411511519376, -5.268277353231511,
    0.13962082398136655, 2.5537183529424237, 5.677065775134847e-05,
    -0.00020316201002826297,
], dtype=np.float32)

LR_SCALER_SCALE = np.asarray([
    0.048012945826813536, 0.04944700701284792, 0.17496629329129562,
    0.19100378154935593, 0.2517722318742367, 0.4321895282605077,
    0.06673185157073662, 0.09116977757558208, 4.698588276767582,
    0.06662959044059757, 0.0824932896699993, 0.08228609310313934,
    0.06606876839058642, 4.911353894884373, 5.093182732112356,
    0.1784127645937347, 1.60063610920223, 0.5053340535122467,
    0.9365267818356068, 7.88448956783221, 0.1412844871506319,
    5.564410758351357, 0.048541884554905074, 0.13585305070366072,
], dtype=np.float32)

LR_CLASSES = ("8PSK", "BPSK", "DQPSK", "MSK", "QPSK-like")
LR_COEFFICIENTS = np.asarray([
    [-0.03239284564111235, -0.0018660644371279022, -0.13988761453442328,
     0.3867095184009464, -0.07834589883457348, -0.20393246202312226,
     -0.02981523514203068, -0.2806905948962249, 5.056579019713018,
     -0.13047168521383384, 0.008763545508801526, -0.021078876465497314,
     -0.23514640822175165, -3.3936441881953425, -1.3923306697012128,
     -0.1973789136933864, 0.2954734098442905, 0.3181962822978891,
     -0.2884434571643872, -0.43288393532269853, -0.2851636671059251,
     0.5172926172366503, -0.05631314852140873, 0.029565845819407986],
    [-0.047049304672627024, -0.03150221216257703, 0.13262800949151762,
     2.22264516689249, -0.0015624215078299058, 0.4242092063969688,
     -0.933616404061075, 0.9690805663612037, -0.40600232779771583,
     0.10616215486371705, -0.0016585328227265957, 0.02842331545548047,
     0.083069756161942, 1.262356764816165, -0.8427427868877981,
     0.027433726287487994, -0.7103987448981884, -0.08127629797979215,
     0.130987126489524, -1.2527349043697535, 0.06124055691569624,
     3.0019530568650006, 0.08822932493560194, -0.015909225134288312],
    [-0.020212465099229294, -0.00010586801130805373, -0.023666024705822977,
     -2.1941033082132235, 0.08258554529940551, -0.045066224766331237,
     0.5483821442537129, -0.7201989144430828, -2.0510337529651332,
     0.11294358416085555, -0.030467881267645838, -0.003742613180757836,
     0.3139085921271403, -1.396201728057879, 3.2384865730972385,
     -0.01732609846064449, 0.2820176104491143, 0.1197988284183536,
     -0.012075943371114953, 2.2737233610605916, 0.15053114906447643,
     0.03757110359439417, -0.004942576759353498, -0.03651930492337472],
    [0.014339451914683379, 0.051531761666324, 0.13174274906444342,
     2.56944384770728, 0.020384642362344246, -0.36076865374004424,
     1.1490789732477775, -0.5215481845868297, -0.37888902323122864,
     -0.40789461497308255, 0.09010733357570613, 0.020503886995619655,
     -0.3445228092908337, -0.732374033298452, 1.0557625768273347,
     0.04590830138688539, 0.24501405921403538, -0.2624110736207884,
     -0.1428340593605977, -3.3736138474951014, 0.044263209364669244,
     -1.627960971334506, -0.03698450829727499, 0.009828698463265936],
    [0.08531516349828433, -0.01805761705530741, -0.10081711931571649,
     -2.984695224787494, -0.023061867319347933, 0.18555813413252648,
     -0.7340294782983849, 0.5533571275649349, -2.2206539157189322,
     0.31926056116234447, -0.06674446499413433, -0.02410571280484594,
     0.1826908692235031, 4.25986318473549, -2.0591756933355545,
     0.14136298447965823, -0.11210633460925004, -0.09430773911566222,
     0.3123663334065737, 2.785509326126968, 0.02912875176108243,
     -1.9288558063615477, 0.010010908642436795, 0.013033985774988287],
], dtype=np.float64)
LR_INTERCEPT = np.asarray([
    -3.009080168369169, -0.32955735208670794, -0.3507470987626252,
    -1.2250491304425428, 4.914433749661031,
], dtype=np.float64)

K_LIST = tuple(range(-5, 6))
K_TO_ROW = {k: k + 5 for k in K_LIST}
FIRST15_NM = (
    (2, 0), (2, 1), (2, 2),
    (4, 0), (4, 1), (4, 2), (4, 3), (4, 4),
    (6, 0), (6, 1), (6, 2), (6, 3), (6, 4), (6, 5), (6, 6),
)
NM_TO_COL = {nm: index for index, nm in enumerate(FIRST15_NM)}
ACTIVE_K = {
    (2, 1): (-1, 0, 1),
    (4, 0): (-2, -1, 0, 1, 2),
    (4, 2): (-2, -1, 0, 1, 2),
    (4, 4): (-2, -1, 0, 1, 2),
    (6, 1): (-2, -1, 0, 1, 2),
    (6, 3): (-2, -1, 0, 1, 2),
    (6, 5): (-2, -1, 0, 1, 2),
}
CC_COLUMN_ORDERS = torch.tensor([2] * 3 + [4] * 5 + [6] * 7, dtype=torch.float32)


def make_default_config() -> dict:
    return {
        "SAMPLES_PER_SIGNAL": 32768,
        "FS_IN": 1.0,
        "EPS": 1e-12,
        "DELTA_F0": 0.002,
        "THRESHOLD_DB": 5.0,
        "BOUNDARY_THRESHOLD_DB": 1.5,
        "BOI_SELECT_MODE": "strongest",
        "MERGE_GAP_W_FACTOR": 2.0,
        "MAX_EXPAND_W_FACTOR": 8.0,
        "BOI_GUARD_BINS": 2,
        "ADAPTIVE_FILTER_EXPAND": True,
        "FILTER_EXPAND_RATIO": 0.20,
        "FILTER_EXPAND_RATIO_LOW_SNR": 0.30,
        "FILTER_EXPAND_RATIO_MID_SNR": 0.15,
        "FILTER_EXPAND_RATIO_HIGH_SNR": 0.05,
        "SNR_LOW_TH_DB": 4.0,
        "SNR_HIGH_TH_DB": 8.0,
        "MAX_EXPANDED_FILTER_BW_FRAC": 0.95,
    }


def tim_to_complex_iq(path: Path, samples_per_signal: int) -> np.ndarray:
    path = Path(path)
    if not path.exists():
        raise FileNotFoundError(path)
    raw = np.fromfile(path, dtype=np.float32)
    required = 2 + 2 * int(samples_per_signal)
    if raw.size < required:
        raise ValueError(f"{path}: {raw.size} floats < required {required}")
    iq = raw[2:required]
    signal = iq[0::2].astype(np.float64) + 1j * iq[1::2].astype(np.float64)
    return signal.astype(np.complex128, copy=False)


def signal_rms_power(x: np.ndarray) -> float:
    x = np.asarray(x, dtype=np.complex128)
    return float(np.mean(np.abs(x) ** 2))


def fftshift_freqs(n: int, fs: float = 1.0) -> np.ndarray:
    return np.fft.fftshift(np.fft.fftfreq(int(n), d=1.0 / float(fs)))


def wrap_freq_to_nyquist(frequency: float, fs: float = 1.0) -> float:
    fs = float(fs)
    return ((float(frequency) + fs / 2.0) % fs) - fs / 2.0


def moving_average_same(x: np.ndarray, width: int) -> np.ndarray:
    x = np.asarray(x, dtype=np.float64)
    width = int(max(1, width))
    if width == 1:
        return x.copy()
    kernel = np.ones(width, dtype=np.float64) / float(width)
    return np.convolve(x, kernel, mode="same")


def contiguous_true_runs(mask: np.ndarray) -> list[tuple[int, int]]:
    mask = np.asarray(mask, dtype=bool)
    if mask.size == 0:
        return []
    changes = np.diff(np.r_[False, mask, False].astype(np.int8))
    starts = np.where(changes == 1)[0]
    stops = np.where(changes == -1)[0] - 1
    return list(zip(starts, stops))


def interval_mask(n: int, left: int, right: int) -> np.ndarray:
    left = int(max(0, min(left, n - 1)))
    right = int(max(0, min(right, n - 1)))
    if right < left:
        left, right = right, left
    mask = np.zeros(int(n), dtype=bool)
    mask[left:right + 1] = True
    return mask


def fixed_resolution_boi(
    x: np.ndarray,
    fs: float,
    delta_f0: float,
    threshold_db: float,
    min_width_bins: int = 2,
) -> dict:
    x = np.asarray(x, dtype=np.complex128)
    n = x.size
    fs = float(fs)
    frequencies = fftshift_freqs(n, fs)
    df = fs / n
    spectrum = np.fft.fftshift(np.fft.fft(x))
    raw_bin_power = np.abs(spectrum) ** 2 / n**2
    width = max(1, int(np.floor(n * float(delta_f0))))
    if width % 2 == 0:
        width += 1
    smoothed = moving_average_same(raw_bin_power, width)
    half = width // 2
    valid_left = half
    valid_right = n - half
    if valid_right <= valid_left:
        raise ValueError(f"Invalid smoothing width {width} for {n} samples")
    valid_smoothed = smoothed[valid_left:valid_right]
    threshold_linear = 10.0 ** (float(threshold_db) / 10.0)
    minimum = float(np.min(valid_smoothed))
    threshold = threshold_linear * minimum
    runs = contiguous_true_runs(valid_smoothed >= threshold)
    bois = []
    full_boi_mask = np.zeros(n, dtype=bool)
    for local_left, local_right in runs:
        left = valid_left + local_left
        right = valid_left + local_right
        if local_left == 0:
            left = 0
        if local_right == len(valid_smoothed) - 1:
            right = n - 1
        width_bins = int(right - left + 1)
        if width_bins < int(min_width_bins):
            continue
        mask = interval_mask(n, left, right)
        full_boi_mask |= mask
        f_left = float(frequencies[left])
        f_right = float(frequencies[right])
        bois.append({
            "left_bin": int(left),
            "right_bin": int(right),
            "width_bins": width_bins,
            "f_left": f_left,
            "f_right": f_right,
            "f_center": wrap_freq_to_nyquist(0.5 * (f_left + f_right), fs),
            "bandwidth": float(width_bins * df),
            "power_raw": float(np.sum(raw_bin_power[mask])),
            "power_smooth": float(np.sum(smoothed[mask])),
        })
    valid_mask = np.zeros(n, dtype=bool)
    valid_mask[valid_left:valid_right] = True
    noise_mask = (~full_boi_mask) & valid_mask
    if np.any(noise_mask):
        noise_raw = float(np.mean(raw_bin_power[noise_mask]))
        noise_smooth = float(np.mean(smoothed[noise_mask]))
    else:
        noise_raw = float(np.min(raw_bin_power[valid_left:valid_right]))
        noise_smooth = minimum
    for boi in bois:
        noise_power_raw = noise_raw * boi["width_bins"]
        noise_power_smooth = noise_smooth * boi["width_bins"]
        boi["noise_power_hat_raw"] = float(noise_power_raw)
        boi["signal_power_hat_raw"] = float(max(boi["power_raw"] - noise_power_raw, 0.0))
        boi["noise_power_hat_smooth"] = float(noise_power_smooth)
        boi["signal_power_hat_smooth"] = float(max(boi["power_smooth"] - noise_power_smooth, 0.0))
        boi["excess_power_score"] = boi["signal_power_hat_raw"]
    return {
        "fs": fs,
        "n": int(n),
        "df": float(df),
        "W": int(width),
        "S_min": minimum,
        "freqs": frequencies,
        "raw_bin_power": raw_bin_power,
        "S_smooth": smoothed,
        "noise_floor_raw_per_bin": noise_raw,
        "noise_floor_smooth_per_bin": noise_smooth,
        "bois": sorted(bois, key=lambda item: item["f_left"]),
    }


def select_boi(boi_result: Mapping, mode: str = "strongest") -> dict:
    bois = boi_result["bois"]
    if not bois:
        raise RuntimeError("No BOI detected")
    if mode == "strongest":
        return max(bois, key=lambda item: item["excess_power_score"])
    if mode == "widest":
        return max(bois, key=lambda item: item["width_bins"])
    if mode == "first":
        return bois[0]
    raise ValueError(f"Unknown BOI selection mode: {mode}")


def recompute_boi_metrics(
    boi_result: Mapping,
    left: int,
    right: int,
) -> dict:
    n = int(boi_result["n"])
    left = int(max(0, min(left, n - 1)))
    right = int(max(0, min(right, n - 1)))
    if right < left:
        left, right = right, left
    mask = interval_mask(n, left, right)
    width_bins = int(right - left + 1)
    raw_power = float(np.sum(boi_result["raw_bin_power"][mask]))
    smooth_power = float(np.sum(boi_result["S_smooth"][mask]))
    raw_noise = float(boi_result["noise_floor_raw_per_bin"] * width_bins)
    smooth_noise = float(boi_result["noise_floor_smooth_per_bin"] * width_bins)
    frequencies = boi_result["freqs"]
    return {
        "left_bin": left,
        "right_bin": right,
        "width_bins": width_bins,
        "f_left": float(frequencies[left]),
        "f_right": float(frequencies[right]),
        "f_center": wrap_freq_to_nyquist(
            0.5 * (frequencies[left] + frequencies[right]),
            boi_result["fs"],
        ),
        "bandwidth": float(width_bins * boi_result["df"]),
        "power_raw": raw_power,
        "power_smooth": smooth_power,
        "noise_power_hat_raw": raw_noise,
        "signal_power_hat_raw": float(max(raw_power - raw_noise, 0.0)),
        "noise_power_hat_smooth": smooth_noise,
        "signal_power_hat_smooth": float(max(smooth_power - smooth_noise, 0.0)),
        "excess_power_score": float(max(raw_power - raw_noise, 0.0)),
    }


def merge_neighbors_around_selected(
    boi_result: Mapping,
    selected: Mapping,
    merge_gap_w_factor: float,
    min_neighbor_power_fraction: float = 0.001,
    eps: float = 1e-12,
) -> dict:
    max_gap_bins = int(float(merge_gap_w_factor) * boi_result["W"])
    left = int(selected["left_bin"])
    right = int(selected["right_bin"])
    main_power = max(float(selected["signal_power_hat_raw"]), eps)
    changed = True
    while changed:
        changed = False
        for boi in boi_result["bois"]:
            boi_left = int(boi["left_bin"])
            boi_right = int(boi["right_bin"])
            if boi_left >= left and boi_right <= right:
                continue
            if boi_right < left:
                gap = left - boi_right - 1
            elif boi_left > right:
                gap = boi_left - right - 1
            else:
                gap = 0
            power_ok = float(boi["signal_power_hat_raw"]) >= min_neighbor_power_fraction * main_power
            if gap <= max_gap_bins and power_ok:
                left = min(left, boi_left)
                right = max(right, boi_right)
                changed = True
    return recompute_boi_metrics(boi_result, left, right)


def refine_boi_edges_hysteresis(
    boi_result: Mapping,
    boi: Mapping,
    boundary_threshold_db: float,
    max_expand_w_factor: float,
) -> dict:
    smoothed = boi_result["S_smooth"]
    n = int(boi_result["n"])
    max_expand_bins = int(float(max_expand_w_factor) * boi_result["W"])
    boundary = 10.0 ** (float(boundary_threshold_db) / 10.0) * boi_result["S_min"]
    left = int(boi["left_bin"])
    right = int(boi["right_bin"])
    steps = 0
    while left > 0 and smoothed[left - 1] >= boundary and steps < max_expand_bins:
        left -= 1
        steps += 1
    steps = 0
    while right < n - 1 and smoothed[right + 1] >= boundary and steps < max_expand_bins:
        right += 1
        steps += 1
    return recompute_boi_metrics(boi_result, left, right)


def estimate_boi_center_by_excess_power(
    boi_result: Mapping,
    boi: Mapping,
    eps: float,
) -> float:
    indices = np.arange(int(boi["left_bin"]), int(boi["right_bin"]) + 1)
    weights = boi_result["raw_bin_power"][indices] - boi_result["noise_floor_raw_per_bin"]
    weights = np.maximum(weights, 0.0)
    if np.sum(weights) <= eps:
        return float(boi["f_center"])
    return float(np.sum(boi_result["freqs"][indices] * weights) / np.sum(weights))


def compute_power_report(
    x: np.ndarray,
    boi_result: Mapping,
    boi: Mapping,
    eps: float,
) -> dict:
    total_power = signal_rms_power(x)
    noise_floor = float(boi_result["noise_floor_raw_per_bin"])
    noise_inband = noise_floor * int(boi["width_bins"])
    noise_fullband = noise_floor * int(boi_result["n"])
    signal_boi = float(boi["signal_power_hat_raw"])
    signal_fullband = max(total_power - noise_fullband, 0.0)
    return {
        "p_signal_boi_local": signal_boi,
        "snr_boi_local_db": float(10.0 * np.log10((signal_boi + eps) / (noise_inband + eps))),
        "p_signal_fullband_excess": signal_fullband,
    }


def choose_filter_expand_ratio(snr_estimate_db: float, cfg: Mapping) -> float:
    if snr_estimate_db < cfg["SNR_LOW_TH_DB"]:
        return float(cfg["FILTER_EXPAND_RATIO_LOW_SNR"])
    if snr_estimate_db < cfg["SNR_HIGH_TH_DB"]:
        return float(cfg["FILTER_EXPAND_RATIO_MID_SNR"])
    return float(cfg["FILTER_EXPAND_RATIO_HIGH_SNR"])


def expand_boi_for_filtering(boi: Mapping, fs: float, ratio: float) -> dict:
    expanded = dict(boi)
    guard = float(ratio) * float(boi["bandwidth"])
    expanded["f_left"] = max(float(boi["f_left"]) - guard, -float(fs) / 2.0)
    expanded["f_right"] = min(float(boi["f_right"]) + guard, float(fs) / 2.0)
    expanded["bandwidth"] = expanded["f_right"] - expanded["f_left"]
    return expanded


def prepare_boi_for_filter_shift(x: np.ndarray, boi_result: Mapping, cfg: Mapping) -> dict:
    selected = select_boi(boi_result, cfg["BOI_SELECT_MODE"])
    merged = merge_neighbors_around_selected(
        boi_result,
        selected,
        cfg["MERGE_GAP_W_FACTOR"],
        eps=cfg["EPS"],
    )
    refined = refine_boi_edges_hysteresis(
        boi_result,
        merged,
        cfg["BOUNDARY_THRESHOLD_DB"],
        cfg["MAX_EXPAND_W_FACTOR"],
    )
    refined["f_center"] = estimate_boi_center_by_excess_power(
        boi_result,
        refined,
        cfg["EPS"],
    )
    power_report = compute_power_report(x, boi_result, refined, cfg["EPS"])
    ratio = (
        choose_filter_expand_ratio(power_report["snr_boi_local_db"], cfg)
        if cfg["ADAPTIVE_FILTER_EXPAND"]
        else float(cfg["FILTER_EXPAND_RATIO"])
    )
    return {
        "selected_refined": refined,
        "selected_filter": expand_boi_for_filtering(refined, cfg["FS_IN"], ratio),
        "power_report": power_report,
    }


def run_fixed_boi_detector(x: np.ndarray, cfg: Mapping) -> dict:
    result = fixed_resolution_boi(
        x,
        cfg["FS_IN"],
        cfg["DELTA_F0"],
        cfg["THRESHOLD_DB"],
    )
    if not result["bois"]:
        raise RuntimeError("No BOI detected by the fixed-resolution algorithm")
    return prepare_boi_for_filter_shift(x, result, cfg)


def fft_bandpass_extract(
    x: np.ndarray,
    fs: float,
    f_left: float,
    f_right: float,
    guard_bins: int,
) -> np.ndarray:
    x = np.asarray(x, dtype=np.complex128)
    n = x.size
    frequencies = fftshift_freqs(n, fs)
    spectrum = np.fft.fftshift(np.fft.fft(x))
    guard_hz = int(guard_bins) * float(fs) / n
    low = float(f_left) - guard_hz
    high = float(f_right) + guard_hz
    if low >= -fs / 2.0 and high < fs / 2.0:
        mask = (frequencies >= low) & (frequencies <= high)
    else:
        wrapped_low = wrap_freq_to_nyquist(low, fs)
        wrapped_high = wrap_freq_to_nyquist(high, fs)
        mask = (
            (frequencies >= wrapped_low) & (frequencies <= wrapped_high)
            if wrapped_low <= wrapped_high
            else (frequencies >= wrapped_low) | (frequencies <= wrapped_high)
        )
    filtered = np.zeros_like(spectrum)
    filtered[mask] = spectrum[mask]
    return np.fft.ifft(np.fft.ifftshift(filtered))


def extract_filter_shift_noresample(
    x: np.ndarray,
    boi: Mapping,
    fs: float,
    guard_bins: int,
) -> np.ndarray:
    x = np.asarray(x, dtype=np.complex128)
    filtered = fft_bandpass_extract(
        x,
        fs,
        boi["f_left"],
        boi["f_right"],
        guard_bins,
    )
    time = np.arange(x.size, dtype=np.float64) / float(fs)
    return filtered * np.exp(-1j * 2.0 * np.pi * float(boi["f_center"]) * time)


def preprocess_boi(x: np.ndarray, cfg: Mapping) -> tuple[np.ndarray, dict]:
    prepared = run_fixed_boi_detector(x, cfg)
    selected_filter = prepared["selected_filter"]
    max_bandwidth = cfg["MAX_EXPANDED_FILTER_BW_FRAC"] * cfg["FS_IN"]
    if selected_filter["bandwidth"] >= max_bandwidth:
        selected_filter = prepared["selected_refined"]
    processed = extract_filter_shift_noresample(
        x,
        selected_filter,
        cfg["FS_IN"],
        cfg["BOI_GUARD_BINS"],
    )
    return np.asarray(processed), prepared


def prep_clip_p96_complex64(x: np.ndarray) -> np.ndarray:
    x = np.asarray(x, dtype=np.complex128).reshape(-1)
    amplitude = np.abs(x)
    threshold = np.percentile(amplitude, CLIP_PERCENTILE)
    if not np.isfinite(threshold) or threshold < 0.0:
        raise ValueError("The P96 clipping threshold is invalid")
    scale = np.minimum(1.0, threshold / (amplitude + 1e-12))
    return np.asarray(x * scale, dtype=np.complex64)


def fft_mag_db_float32(z_power: np.ndarray) -> np.ndarray:
    z_power = np.asarray(z_power, dtype=np.complex128).reshape(-1)
    work = np.zeros(NFFT, dtype=np.complex128)
    work[:min(z_power.size, NFFT)] = z_power[:NFFT]
    spectrum = np.fft.fftshift(np.fft.fft(work * HANN_WINDOW, n=NFFT))
    magnitude = np.abs(spectrum)
    peak = float(np.max(magnitude))
    if not np.isfinite(peak) or peak <= 0.0:
        raise ValueError("FFT magnitude has no positive finite maximum")
    return np.asarray(
        20.0 * np.log10(magnitude / (peak + 1e-12) + 1e-12),
        dtype=np.float32,
    )


def top_peaks_float32(magnitude_db: np.ndarray) -> tuple[np.ndarray, np.ndarray]:
    magnitude_db = np.asarray(magnitude_db, dtype=np.float32).reshape(-1)
    finite = np.flatnonzero(np.isfinite(magnitude_db))
    order = finite[np.argsort(magnitude_db[finite])[::-1]]
    selected = []
    for index in order:
        index = int(index)
        if all(abs(index - old) >= MIN_SEP_BINS for old in selected):
            selected.append(index)
            if len(selected) == TOP_K:
                break
    if len(selected) != TOP_K:
        raise ValueError(f"Only {len(selected)} separated FFT peaks were found")
    bins = np.asarray(selected, dtype=np.int32)
    frequencies = (bins - NFFT // 2).astype(np.float32) / np.float32(NFFT)
    return frequencies.astype(np.float32), magnitude_db[bins]


def symmetry_min2_float32(
    frequency: np.ndarray,
    db: np.ndarray,
) -> tuple[np.float32, np.float32]:
    frequency = np.asarray(frequency, dtype=np.float32)[:TOP_K]
    db = np.asarray(db, dtype=np.float32)[:TOP_K]
    valid = np.isfinite(frequency)
    scores = []
    for index in range(TOP_K):
        if not valid[index] or np.abs(frequency[index]) <= DC_EXCLUSION:
            continue
        differences = np.where(valid, np.abs(frequency + frequency[index]), np.float32(np.inf))
        mirror = int(np.argmin(differences))
        scores.append(np.float32(
            np.abs(db[index] - db[mirror])
            + np.float32(40.0) * np.abs(frequency[mirror] + frequency[index])
        ))
    if not scores:
        return np.float32(99.0), np.float32(99.0)
    ordered = np.sort(np.asarray(scores, dtype=np.float32))
    return np.float32(ordered[0]), np.float32(ordered[min(1, ordered.size - 1)])


def lr8_24_float32(
    z2_frequency: np.ndarray,
    z2_db: np.ndarray,
    z4_frequency: np.ndarray,
    z4_db: np.ndarray,
) -> np.ndarray:
    z2_frequency = np.asarray(z2_frequency, dtype=np.float32)
    z2_db = np.asarray(z2_db, dtype=np.float32)
    z4_frequency = np.asarray(z4_frequency, dtype=np.float32)
    z4_db = np.asarray(z4_db, dtype=np.float32)
    z4_abs_frequency = np.abs(z4_frequency).astype(np.float32)
    z2_sym_min, z2_sym_min2 = symmetry_min2_float32(z2_frequency, z2_db)
    z4_sym_min, z4_sym_min2 = symmetry_min2_float32(z4_frequency, z4_db)
    with np.errstate(divide="ignore", invalid="ignore", over="ignore"):
        z2_power = np.power(np.float32(10.0), z2_db / np.float32(10.0)).astype(np.float32)
        energy_ratio = np.sum(z2_power[:4], dtype=np.float32) / np.sum(z2_power[:8], dtype=np.float32)
    z4_nonzero = np.isfinite(z4_abs_frequency) & (z4_abs_frequency > DC_EXCLUSION)
    values = {
        "x2_top5_f": z2_frequency[4],
        "x2_top8_f": z2_frequency[7],
        "x2_top5_minus_top6_db": z2_db[4] - z2_db[5],
        "x2_energy_ratio_top4_of_8": energy_ratio,
        "x2_sym8_score_min": z2_sym_min,
        "x2_sym8_score_min2": z2_sym_min2,
        "x4_top1_af": z4_abs_frequency[0],
        "x4_top2_af": z4_abs_frequency[1],
        "x4_top3_db": z4_db[2],
        "x4_top6_af": z4_abs_frequency[5],
        "x4_top7_f": z4_frequency[6],
        "x4_top8_f": z4_frequency[7],
        "x4_top8_af": z4_abs_frequency[7],
        "x4_top1_minus_top2_db": z4_db[0] - z4_db[1],
        "x4_top2_minus_top3_db": z4_db[1] - z4_db[2],
        "x4_top6_minus_top7_db": z4_db[5] - z4_db[6],
        "x4_count_gt_m20_d8": np.float32(np.sum(z4_nonzero & (z4_db > np.float32(-20.0)))),
        "x4_sym8_score_min": z4_sym_min,
        "x4_sym8_score_min2": z4_sym_min2,
        "x2_top3_db": z2_db[2],
        "x4_top7_minus_top8_db": z4_db[6] - z4_db[7],
        "x2_top1_minus_top2_db": z2_db[0] - z2_db[1],
        "x2_top7_f": z2_frequency[6],
        "x4_top2_f": z4_frequency[1],
    }
    return np.asarray([values[name] for name in LR8_24_FEATURES], dtype=np.float32)


def predict_lr8_24(feature_vector: np.ndarray) -> str:
    """Reproduce the fitted scikit-learn LR pipeline with NumPy only."""
    vector = np.asarray(feature_vector, dtype=np.float32).reshape(-1)
    expected = len(LR8_24_FEATURES)
    if vector.size != expected:
        raise ValueError(f"Expected {expected} LR features, got {vector.size}")
    vector = np.where(np.isnan(vector), LR_IMPUTER_MEDIANS, vector)
    if not np.all(np.isfinite(vector)):
        raise ValueError("LR feature vector contains an infinite value")
    standardized = (vector - LR_SCALER_MEAN) / LR_SCALER_SCALE
    scores = standardized @ LR_COEFFICIENTS.T + LR_INTERCEPT
    return LR_CLASSES[int(np.argmax(scores))]


def z4_cfo_float32(fft_z4_mag_db: np.ndarray) -> tuple[np.float32, int]:
    center_index = int(np.argmax(np.asarray(fft_z4_mag_db)))
    center_frequency = np.float32(center_index - NFFT // 2) / np.float32(NFFT)
    cfo = ((center_frequency / np.float32(4.0) + np.float32(0.5)) % np.float32(1.0)) - np.float32(0.5)
    return np.float32(cfo), center_index


def blind_prominence_rs_float32(
    fft_z4_mag_db: np.ndarray,
    center_index: int,
) -> np.float32:
    magnitude_db = np.asarray(fft_z4_mag_db, dtype=np.float64).reshape(-1)
    if magnitude_db.shape != (NFFT,):
        raise ValueError(f"Expected spectrum shape ({NFFT},), got {magnitude_db.shape}")
    half_width = BASELINE_HALF_WIDTH
    width = 2 * half_width + 1
    extended = np.concatenate([magnitude_db[-half_width:], magnitude_db, magnitude_db[:half_width]])
    cumulative = np.cumsum(np.insert(extended, 0, 0.0), dtype=np.float64)
    baseline = (cumulative[width:] - cumulative[:-width]) / float(width)
    prominence = magnitude_db - baseline
    positive = (int(center_index) + RS_OFFSETS) % NFFT
    negative = (int(center_index) - RS_OFFSETS) % NFFT
    scores = 0.5 * (prominence[positive] + prominence[negative])
    return np.float32(int(RS_OFFSETS[int(np.argmax(scores))]) / float(NFFT))


def build_twofft_frontend(x: np.ndarray) -> tuple[np.ndarray, np.ndarray, np.float32, np.float32]:
    z = prep_clip_p96_complex64(x)
    z2 = np.asarray(z * z, dtype=np.complex64)
    z4 = np.asarray(z2 * z2, dtype=np.complex64)
    z2_db = fft_mag_db_float32(z2)
    z4_db = fft_mag_db_float32(z4)
    z2_frequency, z2_peaks_db = top_peaks_float32(z2_db)
    z4_frequency, z4_peaks_db = top_peaks_float32(z4_db)
    lr_vector = lr8_24_float32(z2_frequency, z2_peaks_db, z4_frequency, z4_peaks_db)
    cfo, center_index = z4_cfo_float32(z4_db)
    rs = blind_prominence_rs_float32(z4_db, center_index)
    return z, lr_vector, rs, cfo


def empty_sequence(batch: int, device: torch.device) -> torch.Tensor:
    return torch.zeros((batch, len(K_LIST)), device=device, dtype=torch.complex64)


def assign_k(sequence: torch.Tensor, k: int, value: torch.Tensor) -> None:
    sequence[:, K_TO_ROW[int(k)]] = value


def at_k(sequence: torch.Tensor, k: int) -> torch.Tensor:
    return sequence[:, K_TO_ROW[int(k)]]


def mask_sequence(sequence: torch.Tensor, nm: tuple[int, int]) -> torch.Tensor:
    result = torch.zeros_like(sequence, dtype=torch.complex64)
    for k in ACTIVE_K[nm]:
        result[:, K_TO_ROW[k]] = sequence[:, K_TO_ROW[k]]
    return result


def conv2_same_k(a: torch.Tensor, b: torch.Tensor) -> torch.Tensor:
    result = torch.zeros_like(a, dtype=torch.complex64)
    for ka in K_LIST:
        for kb in K_LIST:
            if ka + kb in K_TO_ROW:
                result[:, K_TO_ROW[ka + kb]] += at_k(a, ka) * at_k(b, kb)
    return result


def conv3_same_k(a: torch.Tensor, b: torch.Tensor, c: torch.Tensor) -> torch.Tensor:
    result = torch.zeros_like(a, dtype=torch.complex64)
    for ka in K_LIST:
        for kb in K_LIST:
            partial = at_k(a, ka) * at_k(b, kb)
            for kc in K_LIST:
                if ka + kb + kc in K_TO_ROW:
                    result[:, K_TO_ROW[ka + kb + kc]] += partial * at_k(c, kc)
    return result


def project_many_float32(
    u: torch.Tensor,
    t0: torch.Tensor,
    f0: torch.Tensor,
    n: int,
    m: int,
    k_values: Iterable[int],
) -> torch.Tensor:
    u = u.to(dtype=torch.complex64)
    k_values = tuple(int(k) for k in k_values)
    k = torch.tensor(k_values, device=u.device, dtype=torch.float32)
    alpha = torch.tensor(n - 2 * m, device=u.device, dtype=torch.float32) * f0[:, None] + k[None, :] / t0[:, None]
    time = torch.arange(int(u.shape[-1]), device=u.device, dtype=torch.float32)
    phase = -torch.tensor(np.float32(2.0 * np.pi), device=u.device) * alpha[:, :, None] * time[None, None, :]
    exponent = torch.exp(torch.complex(torch.zeros_like(phase), phase))
    count = torch.tensor(int(u.shape[-1]), device=u.device, dtype=torch.float32)
    return torch.sum(exponent * u[:, None, :], dim=-1, dtype=torch.complex64) / count


def build_simplified_moments_float32(
    x: torch.Tensor,
    t0: torch.Tensor,
    f0: torch.Tensor,
) -> dict[tuple[int, int], torch.Tensor]:
    x = x.to(dtype=torch.complex64)
    batch = int(x.shape[0])
    device = x.device
    x_conj = torch.conj(x)
    abs2 = (x.real * x.real + x.imag * x.imag).to(torch.float32)
    x2 = (x * x).to(torch.complex64)
    x4 = (x2 * x2).to(torch.complex64)
    x5 = (x4 * x).to(torch.complex64)
    products = {
        (2, 1): torch.complex(abs2, torch.zeros_like(abs2)),
        (4, 0): x4,
        (4, 2): torch.complex(abs2 * abs2, torch.zeros_like(abs2)),
        (6, 1): (x5 * x_conj).to(torch.complex64),
        (6, 3): torch.complex(abs2 * abs2 * abs2, torch.zeros_like(abs2)),
    }
    moments = {}
    moments[(2, 1)] = empty_sequence(batch, device)
    values = project_many_float32(products[(2, 1)], t0, f0, 2, 1, (0, 1))
    assign_k(moments[(2, 1)], 0, values[:, 0])
    assign_k(moments[(2, 1)], 1, values[:, 1])
    assign_k(moments[(2, 1)], -1, torch.conj(values[:, 1]))
    for nm in ((4, 0), (6, 1)):
        moments[nm] = empty_sequence(batch, device)
        values = project_many_float32(products[nm], t0, f0, nm[0], nm[1], (-2, -1, 0, 1, 2))
        for index, k in enumerate((-2, -1, 0, 1, 2)):
            assign_k(moments[nm], k, values[:, index])
    for nm in ((4, 2), (6, 3)):
        moments[nm] = empty_sequence(batch, device)
        values = project_many_float32(products[nm], t0, f0, nm[0], nm[1], (0, 1, 2))
        for index, k in enumerate((0, 1, 2)):
            assign_k(moments[nm], k, values[:, index])
        assign_k(moments[nm], -1, torch.conj(values[:, 1]))
        assign_k(moments[nm], -2, torch.conj(values[:, 2]))
    moments[(4, 4)] = empty_sequence(batch, device)
    moments[(6, 5)] = empty_sequence(batch, device)
    for k in ACTIVE_K[(4, 4)]:
        assign_k(moments[(4, 4)], k, torch.conj(at_k(moments[(4, 0)], -k)))
    for k in ACTIVE_K[(6, 5)]:
        assign_k(moments[(6, 5)], k, torch.conj(at_k(moments[(6, 1)], -k)))
    return moments


def build_qpsklike_cc_11x15_float32(
    x: torch.Tensor,
    rs_estimate: torch.Tensor,
    cfo_estimate: torch.Tensor,
) -> torch.Tensor:
    x = torch.as_tensor(x)
    if x.ndim == 1:
        x = x.unsqueeze(0)
    if x.ndim != 2:
        raise ValueError(f"Expected x shape (N,) or (B,N), got {tuple(x.shape)}")
    x = x.to(dtype=torch.complex64)
    batch = int(x.shape[0])
    rs = torch.as_tensor(rs_estimate, device=x.device, dtype=torch.float32).reshape(-1)
    cfo = torch.as_tensor(cfo_estimate, device=x.device, dtype=torch.float32).reshape(-1)
    if rs.numel() == 1 and batch > 1:
        rs = rs.expand(batch)
    if cfo.numel() == 1 and batch > 1:
        cfo = cfo.expand(batch)
    if rs.numel() != batch or cfo.numel() != batch:
        raise ValueError("Rs/CFO batch length does not match x")
    if not bool(torch.all(torch.isfinite(rs) & (rs > 0) & torch.isfinite(cfo)).item()):
        raise ValueError("Rs must be positive finite and CFO must be finite")
    moments = build_simplified_moments_float32(x, torch.reciprocal(rs), cfo)
    m21 = moments[(2, 1)]
    cumulants = {
        (2, 1): m21,
        (4, 0): moments[(4, 0)],
        (4, 2): moments[(4, 2)] - 2.0 * conv2_same_k(m21, m21),
        (4, 4): moments[(4, 4)],
        (6, 1): moments[(6, 1)] - 5.0 * conv2_same_k(moments[(4, 0)], m21),
        (6, 3): moments[(6, 3)] - 9.0 * conv2_same_k(moments[(4, 2)], m21) + 12.0 * conv3_same_k(m21, m21, m21),
        (6, 5): moments[(6, 5)] - 5.0 * conv2_same_k(moments[(4, 4)], m21),
    }
    matrix = torch.zeros((batch, len(K_LIST), len(FIRST15_NM)), device=x.device, dtype=torch.complex64)
    for nm, sequence in cumulants.items():
        matrix[:, :, NM_TO_COL[nm]] = mask_sequence(sequence, nm)
    return matrix


class ResBlockZ(nn.Module):
    def __init__(self, channels: int, kernel: int = 5):
        super().__init__()
        padding = kernel // 2
        self.conv1 = nn.Conv2d(channels, channels, kernel, padding=padding, bias=False)
        self.bn1 = nn.BatchNorm2d(channels)
        self.conv2 = nn.Conv2d(channels, channels, kernel, padding=padding, bias=False)
        self.bn2 = nn.BatchNorm2d(channels)

    def forward(self, x: torch.Tensor) -> torch.Tensor:
        identity = x
        x = F.gelu(self.bn1(self.conv1(x)))
        return F.gelu(self.bn2(self.conv2(x)) + identity)


class StageZ(nn.Module):
    def __init__(self, channels: int, blocks: int, kernel: int):
        super().__init__()
        self.blocks = nn.ModuleList([ResBlockZ(channels, kernel) for _ in range(blocks)])

    def forward(self, x: torch.Tensor) -> torch.Tensor:
        for block in self.blocks:
            x = block(x)
        return x


class CAPNetLiteZ(nn.Module):
    def __init__(self):
        super().__init__()
        self.stem = nn.Conv2d(1, 20, 5, padding=2, bias=False)
        self.stem_bn = nn.BatchNorm2d(20)
        self.block1 = StageZ(20, 3, 5)
        self.down = nn.Conv2d(20, 20, 5, stride=(1, 2), padding=2, bias=False)
        self.down_bn = nn.BatchNorm2d(20)
        self.block2 = StageZ(20, 2, 5)
        self.pool = nn.AdaptiveAvgPool2d((1, 1))
        self.fc = nn.Linear(20, 4)

    def forward(self, x: torch.Tensor) -> torch.Tensor:
        x = F.gelu(self.stem_bn(self.stem(x)))
        x = self.block1(x)
        x = F.gelu(self.down_bn(self.down(x)))
        x = self.block2(x)
        return self.fc(self.pool(x).flatten(1))


def unwrap_state_dict(checkpoint: Mapping) -> dict:
    for key in ("model_state_dict", "state_dict"):
        if isinstance(checkpoint.get(key), Mapping):
            return dict(checkpoint[key])
    return dict(checkpoint)


def normalize_label(value: str) -> str:
    key = str(value).strip().upper().replace("-", "").replace("_", "")
    aliases = {
        "BPSK": "BPSK",
        "MSK": "MSK",
        "DQPSK": "DQPSK",
        "8PSK": "8PSK",
        "QPSK": "QPSK",
        "16QAM": "16QAM",
        "QAM16": "16QAM",
        "64QAM": "64QAM",
        "QAM64": "64QAM",
        "256QAM": "256QAM",
        "QAM256": "256QAM",
    }
    if key not in aliases:
        raise ValueError(f"Unsupported modulation label: {value!r}")
    return aliases[key]


@dataclass(frozen=True)
class InferenceResult:
    prediction: str
    coarse_prediction: str


@dataclass(frozen=True)
class BatchResults:
    """Small pandas-free column container used by the notebook."""

    signal_index: np.ndarray
    true_label: np.ndarray
    prediction: np.ndarray

    def __len__(self) -> int:
        return int(self.signal_index.size)

    def __getitem__(self, column: str) -> np.ndarray:
        if column not in ("signal_index", "true_label", "prediction"):
            raise KeyError(column)
        return getattr(self, column)


class FullyOnlineZPipeline:
    def __init__(
        self,
        lr_model_path: Path | None = None,
        cap_model_path: Path | None = None,
        device: str | None = "cpu",
        cfg: Mapping | None = None,
    ):
        if cap_model_path is None:
            raise ValueError("cap_model_path is required")
        self.cfg = dict(cfg or make_default_config())
        self.device = torch.device(device or "cpu")
        # ``lr_model_path`` remains in the signature for compatibility with old
        # callers.  LR parameters are frozen above, so the joblib file is no
        # longer opened and scikit-learn is not required.
        del lr_model_path
        try:
            checkpoint = torch.load(
                Path(cap_model_path), map_location="cpu", weights_only=True,
            )
        except TypeError:  # PyTorch releases predating ``weights_only``.
            checkpoint = torch.load(Path(cap_model_path), map_location="cpu")
        state_dict = unwrap_state_dict(checkpoint)
        required_shapes = {
            "stem.weight": (20, 1, 5, 5),
            "down.weight": (20, 20, 5, 5),
            "fc.weight": (4, 20),
            "fc.bias": (4,),
        }
        for name, shape in required_shapes.items():
            if name not in state_dict or tuple(state_dict[name].shape) != shape:
                raise ValueError(f"Unexpected checkpoint tensor {name}")
        self.cap_model = CAPNetLiteZ().to(self.device)
        self.cap_model.load_state_dict(state_dict, strict=True)
        self.cap_model.eval()

    def process_signal(self, path: Path) -> InferenceResult:
        raw = tim_to_complex_iq(path, self.cfg["SAMPLES_PER_SIGNAL"])
        processed, prepared = preprocess_boi(raw, self.cfg)
        z, lr_vector, rs_estimate, cfo_estimate = build_twofft_frontend(processed)
        coarse = predict_lr8_24(lr_vector)
        if coarse not in COARSE_CLASS_NAMES:
            raise ValueError(f"Unexpected LR prediction: {coarse!r}")
        if coarse != "QPSK-like":
            return InferenceResult(coarse, coarse)
        p_boi_x = float(prepared["power_report"]["p_signal_boi_local"])
        p_x_total = signal_rms_power(processed)
        p_z_total = signal_rms_power(z)
        p_boi_z = np.float32(p_boi_x * p_z_total / (p_x_total + self.cfg["EPS"]))
        z_tensor = torch.from_numpy(z[None, :]).to(self.device, dtype=torch.complex64)
        rs_tensor = torch.tensor([rs_estimate], device=self.device, dtype=torch.float32)
        cfo_tensor = torch.tensor([cfo_estimate], device=self.device, dtype=torch.float32)
        with torch.inference_mode():
            raw_cc = build_qpsklike_cc_11x15_float32(z_tensor, rs_tensor, cfo_tensor)
            magnitude = torch.abs(raw_cc).to(torch.float32)
            exponent = (2.0 / CC_COLUMN_ORDERS.to(self.device)).view(1, 1, 15)
            cap_input = torch.pow(magnitude, exponent) / (torch.tensor(p_boi_z, device=self.device) + 1e-12)
            fine_index = int(self.cap_model(cap_input[:, None, :, :]).argmax(dim=1).item())
        return InferenceResult(FINE_CLASS_NAMES[fine_index], coarse)


def signal_index_from_path(path: Path) -> int:
    try:
        return int(Path(path).stem.split("_")[-1])
    except ValueError as error:
        raise ValueError(f"Cannot read the signal index from {path.name}") from error


def load_truth_labels(path: Path) -> dict[int, str]:
    """Read the whitespace-delimited truth table using the standard library."""
    path = Path(path)
    with path.open("r", encoding="utf-8") as stream:
        header = stream.readline().split()
        try:
            index_column = header.index("SignalIndex")
            label_column = header.index("SignalType")
        except ValueError as error:
            raise ValueError(
                f"{path}: expected SignalIndex and SignalType columns",
            ) from error
        labels: dict[int, str] = {}
        for line_number, line in enumerate(stream, start=2):
            fields = line.split()
            if not fields:
                continue
            if len(fields) != len(header):
                raise ValueError(
                    f"{path}:{line_number}: expected {len(header)} fields, "
                    f"got {len(fields)}",
                )
            signal_index = int(fields[index_column])
            if signal_index in labels:
                raise ValueError(f"{path}:{line_number}: duplicate signal {signal_index}")
            labels[signal_index] = normalize_label(fields[label_column])
    return labels


def run_batch_in_memory(
    pipeline: FullyOnlineZPipeline,
    batch_dir: Path,
    truth_path: Path,
    expected_count: int | None = None,
    progress_every: int = 100,
) -> BatchResults:
    batch_dir = Path(batch_dir)
    paths = sorted(batch_dir.glob("signal_*.tim"), key=signal_index_from_path)
    if not paths:
        raise ValueError(f"No signal_*.tim files found in {batch_dir}")
    if expected_count is not None and len(paths) != int(expected_count):
        raise ValueError(f"Expected {expected_count} signals, found {len(paths)} in {batch_dir}")
    truth = load_truth_labels(truth_path)
    signal_indices = np.empty(len(paths), dtype=np.int64)
    true_labels = np.empty(len(paths), dtype=f"<U{max(map(len, CLASS_NAMES))}")
    predictions = np.empty_like(true_labels)
    progress_every = int(progress_every)
    for position, path in enumerate(paths, start=1):
        signal_index = signal_index_from_path(path)
        if signal_index not in truth:
            raise KeyError(f"No truth label for signal {signal_index}")
        result = pipeline.process_signal(path)
        row = position - 1
        signal_indices[row] = signal_index
        true_labels[row] = truth[signal_index]
        predictions[row] = result.prediction
        if progress_every > 0 and (position % progress_every == 0 or position == len(paths)):
            print(f"CPU inference: {position}/{len(paths)} signals", flush=True)
    return BatchResults(signal_indices, true_labels, predictions)
