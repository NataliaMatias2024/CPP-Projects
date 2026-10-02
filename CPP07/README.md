<h1 align="center">
    <img alt="cpp00" width="200px" src="https://raw.githubusercontent.com/NataliaMatias2024/42-project-badges/main/badges/cppe.png">
</h1>

# 🧠 CPP Module 07 - @42SP
**Score:** 100/100 ✅

This repository contains the seventh module of the C++ curriculumat [42 São Paulo](https://www.42sp.org.br/). 
The focus of this module is to introduce Templates for the first time, shifting from writing concrete types to writing generic functions and classes (Generic Programming).   

## 🚀 Objectives

> - The main goal is to understand how templates act as blueprints for the compiler to instantiate functions and classes automatically.
> - Through these exercises, the project teaches you how to implement generic algorithms, manage custom exception bounds safely, and build a custom array container.

## 🛠️ Technologies and Concepts
<div align="left">
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++" />
  <img src="https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black" alt="Linux" />
</div>

> - **Function Templates:** Writing generic functions that operate on any data type using automatic template argument deduction.
> - **Class Templates:** Designing generic container classes that require explicit template arguments during instantiation.
> - **Type Independence & Safety:** Minimizing requirements on argument types while ensuring strict compile-time checking.
> - **Exception Integration:** Combining templates with exception handling (such as std::exception) to manage container bounds safely.

## 📁 Project Structure
```bash
.
├── ex00/                  # Simple fun
│   ├── Makefile           # GNU Make compilation
│   └── [... files]        # Function templates: swap, min, and max
│
├── ex01/                  # Iter
│   ├── Makefile
│   └── [... files]        # Higher-order function template applying a function to elements in an array
│
└── ex02/                  # Array
    ├── Makefile
    └── [... files]        # Custom Array class template supporting element access, limits, and deep copies
```

## ⚙️ Compilation and Usage
### 1. Prerequisites
You need a C++ compiler (c++, clang++, or g++) and make installed.

## 2. Compilation
Navigate to any exercise folder (from ex00 to ex02) and run make:

```Bash
$ cd ex02
$ make
```

## 3. Execution
Each exercise generates its own executable, testing template instantiations. For example, running ex02:

```Bash
$ ./array
```

## 🧠 Key Learnings & AI Mentorship
- *Templates as Blueprints:* Understanding that templates are not code themselves, but instructions for the compiler to perform instantiation—generating specific functions or classes based on the types you provide.
- *Header-Only Nature of Templates:* Discovering why template definitions must be visible to the compiler at the point of instantiation, meaning that declarations and definitions typically reside together in header files (.hpp or .tpp).
- *Generic Iteration & Arrays:* Learning how to apply templates to arrays and pointers seamlessly (ex01) and how to build a robust wrapper around raw memory with proper bounds checking and copy control (ex02).
- *AI as a Senior Mentor:* I used an AI assistant to discuss the nuances of template compilation errors, clarify how template argument deduction works behind the scenes, and validate that my custom container met all C++98 constraints before evaluation.
