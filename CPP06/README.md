<h1 align="center">
    <img alt="cpp00" width="200px" src="https://raw.githubusercontent.com/NataliaMatias2024/42-project-badges/main/badges/cppe.png">
</h1>

# 🧠 CPP Module 06 - @42SP
**Score:** - 100/100 ✅

This repository contains the first module of the C++ curriculum at [42 São Paulo](https://www.42sp.org.br/). 
The focus of this module is to master explicit type conversion operators (Casts) in C++98, understanding when and how to safely use static_cast, dynamic_cast, const_cast, and reinterpret_cast.

## 🚀 Objectives
The main goal is to explore how C++ handles type casting compared to traditional C-style casts. Through these exercises, the project teaches you how to handle scalar literals conversion, bit-level memory reinterpretation, and runtime polymorphic type identification safely.

## 🛠️ Technologies and Concepts
<div align="left">
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++" />
  <img src="https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black" alt="Linux" />
</div>

> - **Static Cast (static_cast):** Performing standard, well-defined conversions between fundamental types and related pointers.
> - **Dynamic Cast (dynamic_cast):** Safely navigating polymorphic class hierarchies at runtime using RTTI.
> - **Const Cast (const_cast):** Adding or removing the const qualification from variables or pointers.
> - **Reinterpret Cast (reinterpret_cast):** Low-level bit pattern reinterpretation across unrelated types and pointers.

## 📁 Project Structure
```bash
.
├── ex00/                  # Scalar conversion
│   ├── Makefile           # GNU Make compilation
│   └── [... files]        # ScalarConverter class handling char, int, float, and double literals
│
├── ex01/                  # Serialization
│   ├── Makefile
│   └── [... files]        # Serializer class utilizing reinterpret_cast for pointers and uintptr_t
│
└── ex02/                  # Identify real type
    ├── Makefile
    └── [... files]        # Polymorphic identification using dynamic_cast with pointers and references
```

## ⚙️ Compilation and Usage
### 1 Prerequisites
You need a C++ compiler (c++, clang++, or g++) and make installed.

### 2. Compilation
Navigate to any exercise folder (from ex00 to ex02) and run make:

```bash
$ cd ex01
$ make
```

### 3. Execution
Each exercise generates its own executable, testing specific casting mechanisms. For example, running ex00:

```bash
$ ./convert 42.0f
```

## 🧠 Key Learnings & AI Mentorship
- *Scalar Literals & Edge Cases:* Mastering the parsing of extreme values like nan, inf, -inf, and handling precision loss, overflows, and non-printable characters during scalar conversions in ex00.
- *Polymorphic RTTI (dynamic_cast):* Learning how Run-Time Type Identification works under the hood when dealing with base and derived classes, managing pointer failure (nullptr) versus reference failure (std::bad_cast).
- *AI as a Senior Mentor:* I used an AI assistant to clarify the nuances of low-level memory reinterpretation rules, discuss best practices for handling floating-point edge cases, and ensure my technical explanations met the "Gold Standard" before evaluation.
