# CohortRound Vivado handoff

This directory is the batch-mode handoff for the first 24-term CohortRound
hardware gate. The checked-in RTL is stored in `../generated_rtl`.

Run from this directory after Vivado has been sourced:

```bash
vivado -mode batch -source run_vivado.tcl
```

For the matched three-way comparison (CohortRound, independent per-product
RNE, full-precision late RNE), run:

```bash
vivado -mode batch -source run_all.tcl
```

The default is an out-of-context 200 MHz implementation for the ZCU104 part
`xczu7ev-ffvc1156-2-e`. Override it without editing the script:

```bash
FPGA_PART=xc7z020clg400-1 vivado -mode batch -source run_vivado.tcl
```

Reports and the post-synthesis/post-route checkpoints are written below
`reports/`. Vectorless `report_power` is only a smoke-test estimate; the paper
must use SAIF/VCD activity from representative DSP workloads for power claims.
