<h1 align="center">
    <img alt="cpp02" width="200px" src="https://raw.githubusercontent.com/NataliaMatias2024/42-project-badges/main/badges/cppe.png">
</h1>

# 🧠 CPP Module 03 - @42SP
**Score:** 80/100 (100% Mandatory Part Completed) ✅

This repository contains the fourth module (Module 03) of the C++ curriculum at [42 São Paulo](https://www.42sp.org.br/). 
The core focus of this module is to introduce **Inheritance** in Object-Oriented Programming, demonstrating how derived classes can reuse, extend, and override properties and behaviors from a base class.

## 🚀 Objectives
The main goal is to build a hierarchy of robotic characters (`ClapTrap`, `ScavTrap`, and `FragTrap`). 
Through this project, you learn how object lifecycles work during inheritance (constructor/destructor chaining) and how to properly use the `protected` access modifier to maintain encapsulation while allowing child classes to manipulate base data.

## 🛠️ Technologies and Concepts
<div align="left">
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++" />
  <img src="https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black" alt="Linux" />
</div>

> - **Inheritance:** Creating derived classes that inherit attributes and methods from a base class to avoid code duplication.
> - **Constructor Chaining:** Understanding the strict order of object creation (base builds first, derived builds second) and destruction (from outside in).
> - **Protected Modifiers:** Using `protected` to allow derived classes to access base attributes while keeping them strictly hidden from external code.
> - **Orthodox Canonical Form:** Applying the Rule of Four to derived classes while correctly invoking base class operators and constructors.

## 📁 Project Structure

```bash
.
├── ex00/
│   ├── Makefile           
│   └── [... files]        # ClapTrap base class implementation and lifecycle tests.
│
├── ex01/
│   ├── Makefile
│   └── [... files]        # ScavTrap class inheriting from ClapTrap, overriding attack(), and adding guardGate()[cite: 19].
│
├── ex02/
│   ├── Makefile
│   └── [... files]        # FragTrap class inheriting from ClapTrap, implementing highFivesGuys()[cite: 19].
└──
└──
```

## ⚙️️ Compilation and Usage
### 1. Prerequisites
You need a C++ compiler (c++, clang++, or g++) and make installed.

### 2. Compilation
Navigate to any exercise folder (from ex00 to ex02) and run make:

```bash
	$cd ex02
	$ make
```

### 3. Execution
Each exercise generates its own executable, testing the specific behavior of the Fixed class. For example, running ex02:

```bash
	$ ./FragTrap
```

## 🧠 Key Learnings & AI Mentorship
- *The Custom Style Class:* To make peer evaluations, I developed a custom Style class that formats the terminal output into clean, dynamic tables. This effectively isolates the testing noise, strictly proving the proper constructor chaining and the exact attribute math (Hit Points, Energy Points, Attack Damage) without terminal clutter.
- *Method Overriding vs Reusing:* Understanding when to explicitly override a base method (like attack() in ScavTrap to print a specific message) versus letting the derived class natively use the base method (like FragTrap inheriting attack() directly to promote true code reuse).
- *Encapsulation Balance:* Realizing that private is too restrictive for inheritance, and public breaks encapsulation. The protected keyword is the exact middle ground required for solid OOP architecture.
- *AI as a Senior Mentor:* I used an AI assistant to dissect the low-level behavior of C++ and ensuring my technical vocabulary met the "Gold Standard" before the evaluation.
