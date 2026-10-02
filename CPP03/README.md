<h1 align="center">
    <img alt="cpp02" width="200px" src="https://raw.githubusercontent.com/NataliaMatias2024/42-project-badges/main/badges/cppe.png">
</h1>

# 🧠 CPP Module 02 - @42SP
**Score:** 80/100 (100% Mandatory Part Completed) ✅

This repository contains the third module of the C++ curriculum at [42 São Paulo](https://www.42sp.org.br/).
The focus of this module is to introduce the **Orthodox Canonical Class Form**, Ad-hoc polymorphism (overloading), and the implementation of a custom **Fixed-Point number** class to understand how machines handle fractional numbers at the bitwise level without relying on floating-point hardware.

## 🚀 Objectives
The main goal is to transition away from basic object-oriented concepts and dive deep into C++ specific features. 
You will learn to construct classes robustly using the Orthodox Canonical Form and manipulate memory at the bit level to represent fractional numbers, bypassing the standard floating-point types to grasp deterministic precision.

## 🛠️ Technologies and Concepts
<div align="left">
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++" />
  <img src="https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black" alt="Linux" />
</div>

> - **Orthodox Canonical Form:** Ensuring safe copies and proper resource management by implementing the Rule of Four (Default Constructor, Copy Constructor, Copy Assignment Operator, Destructor).
> - **Ad-hoc Polymorphism:** Implementing operator overloading to define custom behaviors for arithmetic and assignment operations.
> - **Fixed-Point Numbers:** Simulating floating-point precision using integers and bit-shifting operations to guarantee deterministic outcomes across different architectures.

## 📁 Project Structure

```bash
.
├── ex00/                  # My First Class in Orthodox Canonical Form
│   ├── Makefile           # GNU Make compilation
│   └── [... files]        # Basic Fixed class with getters and setters
│
├── ex01/                  # Towards a more useful fixed-point number class
│   ├── Makefile
│   └── [... files]        # Int/Float constructors, toInt(), toFloat(), and bitwise magic
│
├── ex02/                  # Now we're talking (Operator Overloading)
│   ├── Makefile
│   └── [... files]        # Full math, comparisons, and min/max implementations
└──
```

## ⚙️️ Compilation and Usage
### 1. Prerequisites
You need a C++ compiler (c++, clang++, or g++) and make installed.

### 2. Compilation
Navigate to any exercise folder (from ex00 to ex02) and run make:

```bash
	$cd ex01
	$ make
```

### 3. Execution
Each exercise generates its own executable, testing the specific behavior of the Fixed class. For example, running ex02:

```bash
	$ ./bureaucrat
```

## 🧠 Key Learnings & AI Mentorship
- *The Orthodox Canonical Form:* Understanding why the compiler's default shallow copies are dangerous, and how the Rule of Three/Four (Constructor, Copy, Assignment, Destructor) is critical for object safety and deep copying.
- *Fixed-Point Mathematics:* Grasping the physical limitations of variables. Learning how to shift bits left (<<) to reserve space for fractional parts, and right (>>) to truncate them, combining roundf and casting to prevent precision loss (the "fractional crumbs").
- *Return Types and Const Correctness:* Discovering the architectural reasons behind returning Fixed& (reference) for assignments/prefix increments versus returning Fixed (by value/copy) for arithmetic operations and postfix increments (to prevent memory leaks from temporary objects).
- *AI as a Senior Mentor:* I used an AI assistant to dissect the low-level behavior of C++, specifically breaking down the "illusion" of the implicit this pointer in overloaded operators, clarifying the dummy int parameter used to distinguish postfix from prefix increments, and ensuring my technical vocabulary met the "Gold Standard" before the evaluation.
