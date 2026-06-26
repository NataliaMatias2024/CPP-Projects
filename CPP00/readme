<h1 align="center">
    <img alt="cpp00" width="200px" src="https://raw.githubusercontent.com/NataliaMatias2024/42-project-badges/main/badges/cpp00e.png">
</h1>

# 📞 CPP Module 00 - @42SP
**Score:** - in progress

This repository contains the first module of the C++ curriculum at [42 São Paulo](https://www.42sp.org.br/). 
The goal of this module is to introduce the basics of **Object-Oriented Programming (OOP)** in C++98, transitioning away from procedural C. It features a string manipulation exercise and a fully functional CLI PhoneBook application.

## 🚀 Objectives

> - Understand the fundamental differences between C and C++.
> - Transition from manual memory management (`malloc`/`free`) to object-oriented memory handling using the `std::string` class.
> - Implement Encapsulation (`private`/`public`) to protect object states.
> - Build an interactive command-line interface with strict input validation and robust EOF (`Ctrl+D`) handling.

## 🛠️ Technologies and Concepts
<div align="left">
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++" />
  <img src="https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black" alt="Linux" />
</div>

> - **Encapsulation:** Protecting data using `private` attributes and safely accessing them via `public` methods.
> - **Standard Classes:** Leveraging `<string>`, `<iostream>`, and `<iomanip>` to replace older C standard libraries.
> - **Const Correctness:** Using the `const` keyword on methods to create strict, read-only contracts with the compiler.
> - **Internal Linkage:** Utilizing `static` functions inside `.cpp` files to keep the global scope and header files clean.

## 📁 Project Structure

```bash
.
├── ex00/
│   ├── Makefile
│   └── megaphone.cpp      # Simple string manipulation exercise
└── ex01/
    ├── include/           # Header files (.hpp)
    │   ├── Contact.hpp
    │   └── PhoneBook.hpp
    ├── src/               # Source code files (.cpp)
    │   ├── Contact.cpp
    │   ├── PhoneBook.cpp
    │   └── main.cpp
    └── Makefile           # Compilation automation
```

## ⚙️ Compilation and Usage
### 1. Prerequisites
You need a C++ compiler (c++, clang++, or g++) and Make installed.

### 2. Compilation
Navigate to the desired exercise folder and run make:

```bash
	$cd ex01
	$ make
```

### 3. Execution
The PhoneBook program runs directly in the terminal without accepting external arguments:

```bash
	$ ./contacts
```

## 🎮 Interactive Controls (PhoneBook)

| Command | Action |
| :---: | :--- |
| `ADD` | Prompts the user to input data to register a new contact. |
| `SEARCH` | Displays a formatted ASCII table of all saved contacts<br>and allows searching by index. |
| `EXIT` | Quits the program safely and erases all contacts from memory. |
| `Ctrl+D` | EOF detection. Safely aborts inputs and exits the application<br>without infinite loops. |

## 🧠 Key Learnings & AI Mentorship
- *Transitioning Paradigms:* Moving from procedural programming in C to Object-Oriented Programming (OOP) in C++ required a deep shift in mindset, especially regarding how data and functions are bound together inside classes.

- *Smart Memory Management:* Understanding how the std::string class dynamically allocates and frees memory under the hood using its constructors and destructors, eliminating the need for manual malloc calls.

- *AI as a Senior Mentor:* I integrated an AI assistant into my workflow as a pair-programming mentor. Instead of using it to write code, I used it to discuss architectural choices, validate C++98 strict compliance, and simulate rigorous 42 evaluations, solidifying my theoretical foundation.
