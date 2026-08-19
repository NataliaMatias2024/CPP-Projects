<h1 align="center">
    <img alt="cpp05" width="200px" src="https://raw.githubusercontent.com/NataliaMatias2024/42-project-badges/main/badges/cppe.png">
</h1>

# 🧠 CPP Module 05 - @42SP
**Score:** 

This repository contains the fifth module of the C++ curriculum at [42 São Paulo](https://www.42sp.org.br/).
The focus of this module is to deeply understand exception handling (`try`, `catch`, `throw`), abstract classes, and advanced object instantiation using member function pointers in C++98.

## 🚀 Objectives
The main goal is to build a simulated bureaucratic system filled with strict rules, incompetent interns, and mountains of paperwork. Through this scenario, the project forces you to secure your code architecture against invalid states and invalid executions by throwing and catching custom exceptions.

## 🛠️ Technologies and Concepts
<div align="left">
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++" />
  <img src="https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black" alt="Linux" />
</div>

> - **Orthodox Canonical Form:** Ensuring safe copies and proper resource management.
> - **Exception Handling:** Managing runtime errors gracefully using `try`, `catch`, and `throw`, and inheriting from `std::exception`.
> - **Abstract Classes:** Designing base classes with pure virtual functions (`= 0`) to enforce a contract on child classes.
> - **Factory Pattern:** Dynamically allocating objects at runtime based on string inputs, completely avoiding `if/else if` chains by utilizing arrays of member function pointers.

## 📁 Project Structure

```bash
.
├── ex00/                  # Mommy, when I grow up, I want to be a bureaucrat!
│   ├── Makefile           # GNU Make compilation
│   └── [... files]        # Bureaucrat class with grade validation and custom exceptions
│
├── ex01/                  # Form up, maggots!
│   ├── Makefile
│   └── [... files]        # Form class introduction, signing logic, and grade thresholds
│
├── ex02/                  # No, you need form 28B, not 28C...
│   ├── Makefile
│   └── [... files]        # AForm (Abstract), Shrubbery, Robotomy, and Presidential forms execution
│
├── ex03/                  # At least this beats coffee-making
│   ├── Makefile
│   └── [... files]        # Intern class, dynamic form creation via pointer to member functions
└──
```

## ⚙️ Compilation and Usage
### 1. Prerequisites
You need a C++ compiler (`c++`, `clang++`, or `g++`) and `make` installed.

### 2. Compilation
Navigate to any exercise folder (from `ex00` to `ex03`) and run `make`:

```bash
	$ cd ex02
	$ make
```

### 3. Execution
Each exercise generates its own executable, testing the specific behavior of the Bureaucrats and Forms. For example, running `ex02`:

```bash
	$ ./bureaucrat
```

## 🧠 Key Learnings & AI Mentorship

- **The Orthodox Canonical Form:** Understanding why the compiler's default shallow copies are dangerous, and how the Rule of Three/Four (Constructor, Copy, Assignment, Destructor) is critical for object safety and deep copying.

- **Exception Safety:** Realizing that in C++, returning `NULL` for errors is a C-style legacy. Embracing `throw` to immediately halt execution when an object reaches an invalid state (like a Bureaucrat with a grade of 151), and using polymorphism in `catch (const std::exception& e)` to handle multiple custom exceptions efficiently.

- **Abstract Classes & Reusability:** Discovering how to use an Abstract Base Class (`AForm`) not just as an interface, but as a central hub for shared logic. By creating a `const checkExecute()` method in the base class, I avoided repeating validation code across all derived forms.

- **Avoiding If/Else Trees:** Mastering the syntax of arrays of pointers to member functions. This allowed the `Intern` class to instantiate forms dynamically, mapping strings to functions directly, keeping the code scalable and adhering strictly to the subject's ban on messy `if/elseif` chains.

- **AI as a Senior Mentor:** I used an AI assistant to dissect the low-level behavior of C++, specifically breaking down the syntax of pointers to member functions, clarifying the concept of "Const Correctness" during execution pipelines, and ensuring my terminal output and technical vocabulary met the "Gold Standard" before the evaluation.
