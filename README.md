# 🧮 Advanced Calculator

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge&logo=c%2B%2B" alt="C++">
  <img src="https://img.shields.io/badge/Project-Scientific%20Calculator-purple?style=for-the-badge" alt="Scientific Calculator">
  <img src="https://img.shields.io/badge/OOP-Implemented-green?style=for-the-badge" alt="OOP">
  <img src="https://img.shields.io/badge/STL-Used-orange?style=for-the-badge" alt="STL">
</p>

<p align="center">
  <b>🔢 Calculate • 📊 Analyze • 🧮 Solve • 📐 Explore</b>
</p>

<p align="center">
  A powerful console-based C++ calculator combining scientific mathematics, matrices, statistics, calculus, equation solving, number systems, and expression evaluation.
</p>

---

## 📌 Overview

The **Advanced Scientific Calculator** is a console-based C++ application designed to perform a wide range of mathematical operations through a unified, menu-driven interface.

It combines:

* 🔢 Basic arithmetic
* 📐 Scientific calculations
* 📊 Statistics
* 🧮 Matrix operations
* 🔄 Number system conversions
* 🧠 Expression parsing
* 📈 Calculus
* 📊 Equation solving
* 💾 Calculation history
* 🧮 Memory operations

This project demonstrates the practical application of **Object-Oriented Programming (OOP)**, data structures, algorithms, file handling, and mathematical computation in C++.

---

## ✨ Highlights

<table>
<tr>
<td align="center">🔢<br><b>Basic Math</b></td>
<td align="center">📐<br><b>Scientific</b></td>
<td align="center">🧮<br><b>Matrices</b></td>
<td align="center">📊<br><b>Statistics</b></td>
</tr>
<tr>
<td align="center">🔄<br><b>Conversions</b></td>
<td align="center">🧠<br><b>Expression Parser</b></td>
<td align="center">📈<br><b>Calculus</b></td>
<td align="center">💾<br><b>History</b></td>
</tr>
</table>

---

## 🧭 Quick Navigation

* [📌 Overview](#-overview)
* [✨ Highlights](#-highlights)
* [🎯 Objectives](#-objectives)
* [🚀 Features](#-features)
* [🧠 Working Principle](#-working-principle)
* [💻 Technologies Used](#-technologies-used)
* [🧩 Key Concepts](#-key-concepts)
* [📋 Feature Guide](#-feature-guide)
* [👨‍💻 Author](#-author)

---

## 🎯 Objectives

The project aims to:

* Develop a multi-functional calculator using **C++**
* Implement real-world mathematical computations
* Strengthen understanding of **Object-Oriented Programming**
* Provide a user-friendly **menu-driven interface**
* Apply data structures and algorithms to mathematical problems
* Combine multiple mathematical functionalities into one application

---

# 🖥️ User-Friendly Interaction

The calculator uses a **menu-driven interface** so users can select the required operation without remembering complicated commands.

A typical interaction follows this flow:

```text
╔══════════════════════════════════════╗
║       🧮 ADVANCED CALCULATOR         ║
╠══════════════════════════════════════╣
║                                      ║
║  1. Basic Operations                 ║
║  2. Trigonometry                     ║
║  3. Logarithms                       ║
║  4. Statistics                       ║
║  5. Matrix Operations                ║
║  6. Number Conversion                ║
║  7. Memory Functions                 ║
║  8. Expression Parser                ║
║  9. Equation Solver                  ║
║ 10. Calculus                         ║
║ 11. Prime Number Checker             ║
║ 12. Calculation History              ║
║  0. Exit                             ║
║                                      ║
╚══════════════════════════════════════╝

Enter your choice:
```

### 💡 Example

```text
Enter your choice: 1

========== BASIC OPERATIONS ==========

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Square
6. Cube
7. Square Root
8. Factorial

Enter your choice: 1

Enter first number: 25
Enter second number: 15

Result: 40
```

---

## 🧠 Working Principle

The calculator follows a **menu-driven approach**.

```text
              ┌─────────────────────┐
              │    Start Program    │
              └──────────┬──────────┘
                         ↓
              ┌─────────────────────┐
              │    Display Menu     │
              └──────────┬──────────┘
                         ↓
              ┌─────────────────────┐
              │  User Selects Tool  │
              └──────────┬──────────┘
                         ↓
              ┌─────────────────────┐
              │   Take Input        │
              └──────────┬──────────┘
                         ↓
              ┌─────────────────────┐
              │ Process Calculation │
              └──────────┬──────────┘
                         ↓
              ┌─────────────────────┐
              │  Display Result     │
              └──────────┬──────────┘
                         ↓
              ┌─────────────────────┐
              │ Continue / Exit     │
              └─────────────────────┘
```

### Processing Flow

1. Input is taken from the user through the console.
2. The selected menu option determines the operation.
3. Mathematical logic or algorithms process the input.
4. The result is displayed immediately.
5. Calculation history can be stored in `history.txt`.
6. The user can continue using another calculator feature or exit.

---

# 💻 Technologies Used

| Technology / Concept | Usage                     |
| -------------------- | ------------------------- |
| **C++**              | Core programming language |
| **OOP**              | Classes and objects       |
| **STL**              | Vectors and stacks        |
| **File Handling**    | Calculation history       |
| **`<cmath>`**        | Mathematical operations   |
| **Stack**            | Expression evaluation     |
| **Algorithms**       | Mathematical computations |

---

# 🧩 Key Concepts

### 🔒 Encapsulation

All calculator functionalities are organized inside the **Calculator class**, keeping related data and operations together.

### 🧱 Modularity

Each operation is implemented as a separate function, making the application easier to understand and maintain.

### 📚 Stack Data Structure

Stacks are used in the **expression parser** to evaluate mathematical expressions while handling parentheses and operator precedence.

### 💾 File Handling

File handling is used to store calculation history in:

```text
history.txt
```

### 🧮 Mathematical Algorithms

The project applies mathematical logic for:

* Matrix operations
* Statistics
* Equation solving
* Numerical differentiation
* Numerical integration
* Number conversions
* Prime number checking

---

# 📋 Feature Guide

| Category        | Available Operations                                             |
| --------------- | ---------------------------------------------------------------- |
| 🔢 Basic        | Arithmetic, square, cube, √, factorial                           |
| 📐 Trigonometry | sin, cos, tan, cot, sec, cosec                                   |
| 📊 Logarithms   | log₁₀, ln                                                        |
| 📈 Statistics   | Mean, variance                                                   |
| 🧮 Matrix       | Add, subtract, multiply, divide, transpose, inverse, determinant |
| 🔄 Conversion   | Binary, decimal, hexadecimal, octal                              |
| 💾 Memory       | Add, recall, clear                                               |
| 🧠 Expression   | Parentheses, precedence, stack evaluation                        |
| 📊 Equations    | Linear and quadratic                                             |
| 📐 Calculus     | Differentiation, integration                                     |
| 🔢 Numbers      | Prime checking                                                   |
| 📝 History      | Save and view calculations                                       |

---

# 🏁 Conclusion

This project demonstrates the implementation of a **comprehensive scientific calculator using C++**.

It integrates multiple mathematical domains into a single application while demonstrating practical knowledge of:

**C++ • OOP • STL • Data Structures • Algorithms • File Handling • Mathematical Computation**

The project serves as a strong portfolio application for showcasing **programming, problem-solving, mathematical logic, and software design skills**.

---

# 👨‍💻 Author

### **Suniyan Jana**

---

<p align="center">
  <b>🧮 Calculate Smarter • 📊 Solve Faster • 💻 Code Better</b>
</p>

<p align="center">
  ⭐ If you find this project useful, consider giving it a star!
</p>

---

<p align="center">
  <i>This project is open-source and available for educational purposes.</i>
</p>
