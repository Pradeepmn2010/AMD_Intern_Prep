# AMD Prep: Day 1 - Systems Foundations

## 🎯 Overview
This document marks the completion of Phase 1 (Theory) and Phase 2 (Hands-on) for Day 1 of the AMD Firmware Engineering track. The focus was on bridging the gap between high-level code and low-level hardware registers.

## 💻 Hardware Audit & Environment
Performed a system audit to understand the execution environment. This data is critical for optimizing firmware cache hits and memory alignment.

- **Architecture:** x86_64
- **Byte Order:** Little Endian
- **Virtualization:** Full
- **Cache Topology (Aggregated):**
  - **L1d (Data):** 192 KiB (4 instances)
  - **L1i (Instruction):** 128 KiB (4 instances)
  - **L2:** 2 MiB (4 instances)
  - **L3:** 6 MiB (1 instance)

## 🛠 Programming Exercises

### 1. The Unix Bridge (APUE)
Explored the relationship between the **Process** and the **Kernel**. 
- Understood that system calls are the primary interface to hardware.
- Learned to interpret error codes via `errno`.

### 2. C Precision Data Widths (`hw_check.c`)
Verified data type sizing to ensure compatibility with hardware registers.
- `char`: 1 byte
- `int`: 4 bytes
- `long`: 8 bytes
- `uint8_t`: 1 byte (Fixed-width)
- `uint32_t`: 4 bytes (Fixed-width)

### 3. Build Automation (`build_tool.py`)
Developed a Python orchestration script to manage the compilation workflow.
- Automates the transition from C source to binary using `gcc`.
- Provides instant feedback on build success/failure.

## 🧠 Key Concept: The Danger of Ambiguity
Using a standard `int` is dangerous in firmware because its size is not guaranteed by the C standard; it varies by compiler and architecture. Conversely, GPU hardware registers are rigid, fixed-size structures (e.g., exactly 32 bits). Using `uint32_t` ensures the "Software Translator" matches the "Hardware Switch" perfectly, preventing memory overflows and system instability.

## 📜 Version Control
- **Git Commit:** `f2fe5aa`
- **Status:** Day 1 Complete
