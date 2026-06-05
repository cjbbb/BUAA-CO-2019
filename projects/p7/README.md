# P7 Exception and Interrupt CPU

[English](#english) | [中文](#中文)

---

## English

P7 is the final CPU stage in this repository. It extends the 50-instruction pipelined CPU with exception handling, interrupt handling, CP0, bridge logic, and memory-mapped timer I/O.

Recommended entry:

```text
code/mips.v
```

### Layout

| Path | Description |
| --- | --- |
| `code/` | Final Verilog CPU implementation. |
| `tests/` | P7 exception, interrupt, delay-slot, and regression test data. |
| `../../docs/course/p7/` | P7 course references, timer spec, exception/interrupt notes, and design documents. |
| `../../archives/p7-reference-code/` | Archived reference code package from the original collection. |

### Key Modules

- `code/mips.v`: top-level MIPS system.
- `code/cpu.v`: pipelined CPU core.
- `code/CP0.v`: exception and interrupt state.
- `code/bridge.v`: address mapping between CPU, data memory, and timer.
- `code/P7_standard_timer_2019.v`: course timer module.
- `code/LEGAL.v`: instruction legality checks.
- `code/conflict.v`: forwarding, stalling, and pipeline hazard control.
- `code/tb.v`: simulation testbench.

### Test Data

Useful test folders include:

- `tests/P7_L0_delay/`: delay-slot related weak tests.
- `tests/P7_L0_exception/`: exception handling weak tests.
- `tests/P7_L0_interrupt/`: interrupt handling weak tests.
- `tests/eretWithInterruptionOnBubble/`: regression case for `eret` and interrupt timing.
- `tests/my-test/`: additional local regression tests.

### Notes

- The original root-level `Mars.jar` was moved to `../../tools/Mars.jar`.
- A duplicated `Mars.jar` is still kept in `tests/P7_L0_interrupt/` because the original `gen_code.bat` may reference it locally.
- This stage is the best starting point for understanding the final design.

---

## 中文

P7 是本仓库的最终 CPU 阶段，在支持 50 条指令的流水线 CPU 基础上加入异常、中断、CP0、Bridge 和基于计时器的内存映射 I/O。

推荐入口：

```text
code/mips.v
```

### 目录结构

| 路径 | 说明 |
| --- | --- |
| `code/` | 最终版 Verilog CPU 实现。 |
| `tests/` | P7 异常、中断、延迟槽和回归测试数据。 |
| `../../docs/course/p7/` | P7 课程资料、计时器规范、异常中断说明和设计文档。 |
| `../../archives/p7-reference-code/` | 原始资料中的参考代码压缩包归档。 |

### 关键模块

- `code/mips.v`：MIPS 系统顶层。
- `code/cpu.v`：流水线 CPU 核心。
- `code/CP0.v`：异常与中断状态。
- `code/bridge.v`：CPU、数据存储器和计时器之间的地址映射。
- `code/P7_standard_timer_2019.v`：课程计时器模块。
- `code/LEGAL.v`：指令合法性检查。
- `code/conflict.v`：转发、暂停和流水线冒险控制。
- `code/tb.v`：仿真测试平台。

### 测试数据

较有参考价值的测试目录包括：

- `tests/P7_L0_delay/`：延迟槽相关弱测试。
- `tests/P7_L0_exception/`：异常处理弱测试。
- `tests/P7_L0_interrupt/`：中断处理弱测试。
- `tests/eretWithInterruptionOnBubble/`：`eret` 与中断时序相关回归测试。
- `tests/my-test/`：额外本地回归测试。

### 说明

- 原根目录的 `Mars.jar` 已移动到 `../../tools/Mars.jar`。
- `tests/P7_L0_interrupt/` 中仍保留一份重复的 `Mars.jar`，因为原始 `gen_code.bat` 可能按本地路径引用它。
- 如果只想阅读最终实现，建议从本阶段开始。
