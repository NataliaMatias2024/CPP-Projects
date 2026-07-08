<h1 align="center">
    <img alt="cpp01" width="200px" src="https://raw.githubusercontent.com/NataliaMatias2024/42-project-badges/main/badges/cppe.png">
</h1>

# 🧠 CPP Module 01 - @42SP
**Score:** 90/100 (100% Mandatory Part Completed)

This repository contains the second module of the C++ curriculum at [42 São Paulo](https://www.42sp.org.br/).
The focus of this module is to deepen the understanding of memory allocation in C++, exploring the differences between stack and heap memory, proper resource management (RAII), pointers to members, and the usage of references instead of pointers.

## 🚀 Objectives

> - Understand dynamic allocation using `new` and `delete` (replacing `malloc`/`free`).
> - Avoid memory leaks by ensuring proper destruction of objects (RAII paradigm).
> - Learn the structural and conceptual differences between pointers (`*`) and references (`&`).
> - Master the usage of pointers to member functions and switch statements for cleaner control flows.

## 🛠️ Technologies and Concepts
<div align="left">
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++" />
  <img src="https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black" alt="Linux" />
</div>

> - **Memory Allocation:** Dissecting allocation lifecycles across Stack and Heap.
> - **References vs Pointers:** Utilizing references for safer syntax and passing objects without copying.
> - **Pointers to Members:** Implementing arrays of pointers to member functions to eliminate long `if/else` chains.
> - **File Streams:** Handling file input/output safely using `<fstream>` (`std::ifstream` and `std::ofstream`).

## 📁 Project Structure

```bash
.
├── ex00/                  # Zombie allocation (Stack vs Heap)
│   ├── Makefile           # GNU Make compilation
│   └── [... files]
├── ex01/                  # ZombieHorde (Contiguous heap allocation)
│   ├── Makefile
│   └── [... files]
├── ex02/                  # HI THIS IS BRAIN (Pointers vs References syntax)
│   ├── Makefile
│   └── [... files]
├── ex03/                  # Weapon, HumanA, HumanB (References as attributes)
│   ├── Makefile
│   └── [... files]
├── ex04/                  # Sed is for losers (File manipulation and string replacing)
│   ├── Makefile
│   └── [... files]
├── ex05/                  # Harl 2.0 (Pointers to member functions)
│   ├── Makefile
│   └── [... files]
└──
```

## ⚙️ Compilation and Usage
### 1. Prerequisites
You need a C++ compiler (c++, clang++, or g++) and Make installed.

### 2. Compilation
Navigate to any exercise folder (from ex00 to ex05) and run make:

```bash
	$ cd ex01
	$ make
```

### 3. Execution
Each exercise generates its own executable. For example, running the file replacer in ex04:

```bash
	$ ./replace <filename> <string_to_find> <string_to_replace>
```

## 🧠 Key Learnings & AI Mentorship
- *The Power of References:* Learning that references are essentially constant pointers that are automatically dereferenced made my code much cleaner and less error-prone compared to standard C pointers.

- *Resource Acquisition Is Initialization (RAII):* Shifting my mindset to let object lifetimes manage resources automatically. Ensuring every new had its strictly paired delete to guarantee a 100% leak-free implementation.

- *AI as a Senior Mentor:* Continuing my workflow, I leveraged an AI assistant to review my code against edge cases in file manipulation (ex04) and to discuss the syntax edge-cases of pointers to member functions (ex05), ensuring deep technical understanding before defense.
