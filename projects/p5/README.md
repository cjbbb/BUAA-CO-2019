# P5 Pipeline CPU

[English](#english) | [中文](#中文)

---

## English

P5 is the first pipelined CPU stage in this repository. It focuses on the classic five-stage pipeline structure and the core data/control hazard handling needed by later stages.

### Layout

| Path | Description |
| --- | --- |
| `code/` | Verilog implementation of the P5 pipelined CPU. |
| `tests-cjb/` | Test data collected from CJB, with many forwarding and stalling cases. |
| `tests-mouyu/` | Additional test data collected from MouYu. |
| `tests-extra/` | Extra tests and notes kept from the original coursework. |

### Key Modules

- `code/mips.v`: top-level CPU module.
- `code/controller.v`: control signal generation.
- `code/instr_decoder.v`: instruction decoding.
- `code/conflict.v`: forwarding and stalling logic.
- `code/F_D_Register.v`, `code/D_E_Register.v`, `code/E_M_Register.v`, `code/M_W_Register.v`: pipeline registers.
- `code/ALU.v`, `code/GRF.v`, `code/DM.v`, `code/IM.v`: datapath components.

### Notes

- This stage is mainly useful for studying forwarding, stalling, branch/jump behavior, and basic pipelined datapath organization.
- Some original test filenames are intentionally preserved because they describe the tested hazard case.
- Archived design packages and generated helper files from `tests-cjb/p5_zyy/` were moved to `../../archives/p5-cjb-design/`.

---

## 中文

P5 是本仓库中的初版流水线 CPU 阶段，重点是五级流水线结构，以及后续阶段所需的数据冒险、控制冒险处理。

### 目录结构

| 路径 | 说明 |
| --- | --- |
| `code/` | P5 流水线 CPU 的 Verilog 实现。 |
| `tests-cjb/` | 来自 CJB 的测试数据，包含较多转发和暂停场景。 |
| `tests-mouyu/` | 来自 MouYu 的补充测试数据。 |
| `tests-extra/` | 原课程时期保留的额外测试和说明。 |

### 关键模块

- `code/mips.v`：CPU 顶层模块。
- `code/controller.v`：控制信号生成。
- `code/instr_decoder.v`：指令译码。
- `code/conflict.v`：转发和暂停逻辑。
- `code/F_D_Register.v`、`code/D_E_Register.v`、`code/E_M_Register.v`、`code/M_W_Register.v`：流水线寄存器。
- `code/ALU.v`、`code/GRF.v`、`code/DM.v`、`code/IM.v`：数据通路组件。

### 说明

- 本阶段适合重点参考转发、暂停、跳转分支行为和基础流水线数据通路组织。
- 部分测试文件名保留原始命名，因为文件名本身能说明对应测试场景。
- `tests-cjb/p5_zyy/` 中的压缩包、设计文档和生成辅助文件已归档到 `../../archives/p5-cjb-design/`。
