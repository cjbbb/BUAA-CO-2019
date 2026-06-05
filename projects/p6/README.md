# P6 50-Instruction Pipeline CPU

[English](#english) | [中文](#中文)

---

## English

P6 extends the P5 pipelined CPU to support 50 MIPS instructions. It adds more complete instruction decoding, data-memory extension logic, and multiply/divide support.

### Layout

| Path | Description |
| --- | --- |
| `code/` | Verilog implementation of the P6 CPU. |
| `auto-judge/` | Original auto-judge scripts and testsuite files. |
| `../../docs/course/p6/` | Course notes and suggestions moved out of the code directory. |
| `../../archives/p6-official-documents/` | Archived official document package. |
| `../../archives/p6-auto-judge-generated/` | Generated auto-judge artifacts moved out of the testsuite. |

### Key Modules

- `code/mips.v`: top-level CPU module.
- `code/controller.v` and `code/instr_decoder.v`: expanded instruction support.
- `code/conflict.v`: hazard handling for the extended pipeline.
- `code/DMEXT.v`: load data extension for byte/halfword access.
- `code/MULT_DIV.v`: multiply/divide unit.
- `code/define.v`: shared instruction and control definitions.

### Auto Judge

The original auto-judge files are under `auto-judge/testsuit/`. The scripts were kept in their original Windows-oriented style, so paths or tool locations may need adjustment before reuse on another environment.

### Notes

- Tool dependencies inside `auto-judge/testsuit/bin/` and `auto-judge/testsuit/jar/` are kept in place because the original scripts may reference them directly.
- Generated temporary judge outputs were moved to `../../archives/p6-auto-judge-generated/`.

---

## 中文

P6 在 P5 流水线 CPU 的基础上扩展到 50 条 MIPS 指令，并补充了更完整的译码逻辑、访存扩展逻辑和乘除法模块。

### 目录结构

| 路径 | 说明 |
| --- | --- |
| `code/` | P6 CPU 的 Verilog 实现。 |
| `auto-judge/` | 原始自动评测脚本和测试集文件。 |
| `../../docs/course/p6/` | 从代码目录移出的课程建议和说明。 |
| `../../archives/p6-official-documents/` | 官方文档压缩包归档。 |
| `../../archives/p6-auto-judge-generated/` | 从测试集中移出的评测生成物。 |

### 关键模块

- `code/mips.v`：CPU 顶层模块。
- `code/controller.v` 和 `code/instr_decoder.v`：扩展后的指令支持。
- `code/conflict.v`：扩展流水线的冒险处理。
- `code/DMEXT.v`：字节、半字访存结果扩展。
- `code/MULT_DIV.v`：乘除法模块。
- `code/define.v`：共享指令和控制定义。

### 自动评测

原始自动评测文件位于 `auto-judge/testsuit/`。这些脚本保留了原课程时期偏 Windows 的使用方式，如果在其他环境复用，可能需要调整路径或工具位置。

### 说明

- `auto-judge/testsuit/bin/` 和 `auto-judge/testsuit/jar/` 中的工具依赖仍保留在原位，因为原脚本可能直接引用它们。
- 自动评测生成的临时输出已移动到 `../../archives/p6-auto-judge-generated/`。
