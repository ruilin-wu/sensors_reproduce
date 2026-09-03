# CohortRound IEEE 双栏说明

文件：

- 02_cohortround.html：此前的完整 idea、文献审查与 Codex/Claude 共识记录。
- cohortround_intro.tex：IEEEtran 双栏中文研究构想。
- cohortround_intro_en.tex：压缩后的两页 IEEE 双栏英文版本。
- references.bib：正文实际引用的 BibTeX 数据库。
- cohortround_intro.pdf：成功编译后生成的 PDF。
- cohortround_intro_en.pdf：两页英文版本 PDF。

正文使用 XeLaTeX，以支持中文与 Noto CJK 字体。项目的 VS Code 配置已经包含 latexmk (XeLaTeX, TeX Live 2026) recipe；命令行可运行：

    PATH=/home/ruilin/.local/texlive/2026/bin/x86_64-linux:$PATH \
      /home/ruilin/.local/texlive/2026/bin/x86_64-linux/latexmk \
      -xelatex -synctex=1 -interaction=nonstopmode \
      -file-line-error cohortround_intro.tex

该文档不是完整 DAC manuscript，但已经包含背景与前人工作、HCDR 机制、数学问题和 certificate、预期贡献、实验设计以及严格生死线。

Software joint-rounding oracle见 [`validation/`](validation/README.md)，首次运行结论见 [`validation/RESULTS.md`](validation/RESULTS.md)。

完整的 compiler-to-Vivado 代码与验证结果已集中到 [`artifact/`](artifact/README.md)。
英文总览、复现命令和当前 gate 结论见
[`COHORTROUND_VALIDATION_EN.md`](COHORTROUND_VALIDATION_EN.md)。
