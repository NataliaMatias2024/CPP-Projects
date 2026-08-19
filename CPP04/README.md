<h1 align="center">
    <img alt="cpp04" width="200px" src="https://raw.githubusercontent.com/NataliaMatias2024/42-project-badges/main/badges/cppe.png">
</h1>

# 🧠 CPP Module 04 - @42SP

**Score:** 80/100 (100% Mandatory Part Completed))

This repository contains the fourth module of the C++ curriculum at [42 São Paulo](https://www.42sp.org.br/).
The focus of this module is to deeply understand Subtype Polymorphism, Abstract Classes, and the critical differences between Deep Copy and Shallow Copy in memory management.

## 🚀 Objectives
The main goal is to transition from basic inheritance to true polymorphic behavior. Throughout the exercises, the project forces you to secure your code architecture
against memory leaks using virtual destructors, implement independent brain allocation for clones (Deep Copy), and enforce business rules using Abstract Base Classes.

## 🛠️ Technologies and Concepts
<div align="left">
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++" />
  <img src="https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black" alt="Linux" />
</div>

> - **Subtype Polymorphism:** Using the `virtual` keyword to enable Dynamic Binding and late method resolution.
> - **Orthodox Canonical Form & Deep Copy:** Safely managing dynamically allocated attributes (like a `Brain`) to prevent double-free errors and memory leaks.
> - **Abstract Classes (ABC):** Designing base classes with pure virtual functions (`= 0`) to prevent direct instantiation.
> - **Memory Visualization:** Building custom formatting to physically prove heap memory addresses during runtime.

## 📁 Project Structure

```bash
.
├── ex00/                  # Polymorphism
│   ├── Makefile           # GNU Make compilation
│   └── [... files]        # Animal, Dog, Cat, and WrongAnimal classes to prove the need for 'virtual'
│
├── ex01/                  # I don’t want to set the world on fire
│   ├── Makefile
│   └── [... files]        # Brain class introduction, array of Animals, and Deep Copy implementation
│
├── ex02/                  # Abstract class
│   ├── Makefile
│   └── [... files]        # AAnimal (Abstract Base Class) with pure virtual functions
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
Each exercise generates its own executable (usually named Animal, Brain, or AAnimal), 
containing comprehensive test suites and custom memory visualization tables.

```bash
	$ ./AAnimal
```

## 🧠 Key Learnings & AI Mentorship
- **The Virtual Destructor Lifesaver:** Understanding exactly why deleting a derived object through a base class pointer without a virtual destructor leads to a catastrophic memory leak (the "Miopia do Compilador"), as proven by the WrongAnimal test in ex00.

- **Deep Copy vs Shallow Copy:** Experiencing the dangers of Segfaults and Double Frees firsthand. I learned how to properly implement the Rule of Three in ex01, ensuring that every copied Dog or Cat receives a brand new Brain allocation in the Heap, rather than just copying pointer addresses.

- **The Law of Abstraction:** Discovering that an Abstract Class in C++ is defined not by its name, but by the presence of a pure virtual function (= 0). This perfectly blocks physical object instantiation while still allowing generic pointers for array polymorphism.

- **AI as a Senior Mentor:** I used an AI assistant as an active code reviewer and theoretical mentor. Together, we built a custom Style class to render ASCII tables in the terminal, rendering Hexadecimal memory addresses dynamically to physically prove that my Deep Copies were allocating new spaces in the Heap, ensuring my defense met the "Gold Standard".
