# BUAA Computer Organization 2019

[English](#english) | [中文](#中文)

---

## English

This repository contains coursework, source code, documents, and test data for the 2019 BUAA Computer Organization course. The final project is a Verilog implementation of a five-stage pipelined MIPS CPU that supports 50 MIPS instructions, exceptions, interrupts, and memory-mapped timer I/O.

The final CPU implementation is in:

```text
p7 abnormal interruption and external abort/P7_code/
```

### Highlights

- Five-stage pipelined MIPS CPU written in Verilog HDL.
- Support for 50 MIPS instructions in the P6/P7 design.
- Hazard handling with forwarding and stalling.
- Multiply/divide unit support.
- Exception and interrupt handling through CP0.
- Timer and bridge modules for memory-mapped I/O.
- Collected test cases, course documents, and design reports from multiple project stages.

### Repository Structure

| Path | Description |
| --- | --- |
| `Preparation/` | Early Logisim circuits, MIPS assembly practice, and preparation materials. |
| `p0/` | Basic Logisim components and introductory circuit exercises. |
| `p1/` | Verilog practice files. |
| `p2/` | MIPS assembly exercises. |
| `p3/` | Single-cycle CPU materials, Logisim circuit, report, and test data. |
| `p4/` | Verilog CPU design materials and tests. |
| `p5/` | Initial pipelined CPU implementation and extensive hazard/forwarding test data. |
| `p6 supports 50 MIPS instructions/` | Pipelined CPU extended to 50 MIPS instructions, with auto-judge scripts and official documents. |
| `p7 abnormal interruption and external abort/` | Final CPU with exception, interrupt, timer, bridge, and P7 test files. |
| `Mars.jar` | MARS MIPS simulator used by the course workflow. |
| `MIPS_Vol2_指令集_.pdf` | MIPS instruction set reference. |
| `logisim-win-2.7.1.exe` | Logisim installer bundled for the original course environment. |

### Final Project Modules

The final P7 implementation is organized under `p7 abnormal interruption and external abort/P7_code/`.

Key files include:

- `mips.v`: top-level MIPS system.
- `cpu.v`: CPU core.
- `controller.v` and `instr_decoder.v`: instruction decode and control logic.
- `conflict.v`: hazard detection and forwarding control.
- `CP0.v`: exception and interrupt state.
- `bridge.v`: address mapping between CPU, data memory, and timer.
- `P7_standard_timer_2019.v`: course-provided timer.
- `tb.v`: simulation testbench.

### Tools

The original coursework used the following tools:

- Logisim 2.7.1 for early circuit design.
- MARS for MIPS assembly and machine-code generation.
- Verilog simulator such as ISim/ISE for CPU simulation and judging.

Most test data in this repository follows the course convention: assemble MIPS programs with MARS, load generated code into instruction memory, run the Verilog testbench, and compare simulation output with the expected trace.

### Notes

- The author originally passed the P7 strong tests, but this repository is provided as-is and may still contain bugs.
- Some folders and filenames are preserved from the original coursework, including Chinese names and spaces.
- The P5-P7 test data is especially useful for checking forwarding, stalling, branch/jump behavior, exceptions, and interrupts.
- This repository is for learning and reference. Do not submit it directly as your own coursework.

---

## 中文

本仓库整理了北京航空航天大学 2019 年《计算机组成原理》课程相关代码、文档和测试数据。最终成果是一个使用 Verilog HDL 实现的五级流水线 MIPS CPU，支持 50 条 MIPS 指令、异常、中断以及基于计时器的内存映射 I/O。

最终版 CPU 代码位于：

```text
p7 abnormal interruption and external abort/P7_code/
```

### 项目特点

- 使用 Verilog HDL 实现五级流水线 MIPS CPU。
- P6/P7 阶段支持 50 条 MIPS 指令。
- 实现转发、暂停等流水线冒险处理。
- 支持乘除法模块。
- 通过 CP0 支持异常与中断。
- 使用 Bridge 和 Timer 实现内存映射 I/O。
- 保留了多个阶段的测试数据、课程资料和设计文档。

### 目录结构

| 路径 | 说明 |
| --- | --- |
| `Preparation/` | 前期准备材料，包括 Logisim 电路、MIPS 汇编练习等。 |
| `p0/` | 基础 Logisim 部件和入门电路练习。 |
| `p1/` | Verilog 基础练习。 |
| `p2/` | MIPS 汇编练习。 |
| `p3/` | 单周期 CPU 相关材料、Logisim 电路、报告和测试数据。 |
| `p4/` | Verilog CPU 设计材料和测试数据。 |
| `p5/` | 初版流水线 CPU，以及较多转发、暂停、跳转相关测试数据。 |
| `p6 supports 50 MIPS instructions/` | 扩展到 50 条 MIPS 指令的流水线 CPU，包含自动评测脚本和官方资料。 |
| `p7 abnormal interruption and external abort/` | 最终版 CPU，支持异常、中断、计时器和 Bridge，并包含 P7 测试文件。 |
| `Mars.jar` | 课程流程中使用的 MARS MIPS 模拟器。 |
| `MIPS_Vol2_指令集_.pdf` | MIPS 指令集参考资料。 |
| `logisim-win-2.7.1.exe` | 原课程环境中使用的 Logisim 安装包。 |

### 最终版模块说明

P7 最终实现位于 `p7 abnormal interruption and external abort/P7_code/`。

其中比较关键的文件包括：

- `mips.v`：MIPS 系统顶层。
- `cpu.v`：CPU 核心。
- `controller.v` 和 `instr_decoder.v`：指令译码与控制信号生成。
- `conflict.v`：冒险检测、转发和暂停控制。
- `CP0.v`：异常与中断相关状态。
- `bridge.v`：CPU、数据存储器和计时器之间的地址映射。
- `P7_standard_timer_2019.v`：课程提供的标准计时器。
- `tb.v`：仿真测试平台。

### 使用工具

原课程实验主要使用以下工具：

- Logisim 2.7.1：用于前期电路设计。
- MARS：用于 MIPS 汇编程序调试和机器码生成。
- ISim/ISE 等 Verilog 仿真环境：用于 CPU 仿真和评测。

仓库内大部分测试数据遵循课程常见流程：用 MARS 汇编测试程序，生成机器码并载入指令存储器，通过 Verilog testbench 仿真，再将输出 trace 与期望结果对比。

### 说明

- 作者当年 P7 强测通过，但本仓库仅按现状提供，不保证完全无 bug。
- 部分目录名和文件名保留了原课程时期的命名，包括中文和空格。
- P5-P7 阶段的数据部分较有参考价值，尤其适合检查转发、暂停、跳转、异常和中断。
- 本仓库仅供学习和参考，请勿直接作为课程作业提交。
