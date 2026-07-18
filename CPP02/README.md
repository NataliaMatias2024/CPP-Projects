<h1 align="center">
    <img alt="cpp01" width="200px" src="https://raw.githubusercontent.com/NataliaMatias2024/42-project-badges/main/badges/cppe.png">
</h1>

# 🧠 CPP Module 02 - @42SP
**Score:** 80/100 (100% Mandatory Part Completed)

This repository contains the second module of the C++ curriculum at [42 São Paulo](https://www.42sp.org.br/).
The focus of this module is to deepen the understanding of memory allocation in C++, exploring the differences between stack and heap memory, proper resource management (RAII), pointers to members, and the usage of references instead of pointers.

## 🚀 Objectives

> - Understand and strictly implement the Orthodox Canonical Class Form (Default Constructor, Copy Constructor, Copy Assignment Operator, and Destructor).
> - Learn how Fixed-Point numbers work, utilizing bitwise operations (<<, >>) to manage precision and performance.
> - Understand const correctness and the differences between returning by value versus returning by reference.

## 🛠️ Technologies and Concepts
<div align="left">
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++" />
  <img src="https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black" alt="Linux" />
</div>

> - **Orthodox Canonical Form:** Ensuring safe deep copies and proper resource management.
> - **Operator Overloading:** Teaching classes how to react to arithmetic (+, -, *, /), comparison (>, <), and increment/decrement (++, --) operators.
> - **Bitwise Operations & Math:** Using bit shifts and roundf to accurately convert and store int and float values inside a purely integer raw variable.
> - **Abstractions:** Hiding complex bit-level mechanics behind clean, readable object-oriented interfaces.

## 📁 Project Structure

```bash
.
├── ex00/                  # My First Class in Orthodox Canonical Form
│   ├── Makefile           # GNU Make compilation
│   └── [... files]		   # Basic Fixed class with getters and setters
│
├── ex01/                  # Towards a more useful fixed-point number class
│   ├── Makefile
│   └── [... files]		   # Int/Float constructors, toInt(), toFloat(), and bitwise magic
│
├── ex02/                  # Now we're talking (Operator Overloading)
│   ├── Makefile
│   └── [... files]        # Full math, comparisons, and min/max implementations
└──
```

## ⚙️ Compilation and Usage
### 1. Prerequisites
You need a C++ compiler (c++, clang++, or g++) and Make installed.

### 2. Compilation
Navigate to any exercise folder (from ex00 to ex03) and run make:

```bash
	$ cd ex02
	$ make
```

### 3. Execution
Each exercise generates its own executable, testing the specific behavior of the Fixed class. For example, running ex02:

```bash
	$ ./fixed
```

## 🧠 Key Learnings & AI Mentorship
- **The Orthodox Canonical Form:** Understanding why the compiler's default shallow copies are dangerous, and how the Rule of Three/Four (Constructor, Copy, Assignment, Destructor) is critical for object safety and deep copying.

- **Fixed-Point Mathematics:** Grasping the physical limitations of variables. Learning how to shift bits left (<<) to reserve space for fractional parts, and right (>>) to truncate them, combining roundf and casting to prevent precision loss (the "fractional crumbs").

- **Return Types and Const Correctness:** Discovering the architectural reasons behind returning Fixed& (reference) for assignments/prefix increments versus returning Fixed (by value/copy) for arithmetic operations and postfix increments (to prevent memory leaks from temporary objects).

- **AI as a Senior Mentor:** I used an AI assistant to dissect the low-level behavior of C++, specifically breaking down the "illusion" of the implicit this pointer in overloaded operators, clarifying the dummy int parameter used to distinguish postfix from prefix increments, and ensuring my technical vocabulary met the "Gold Standard" before the evaluation.
