# C++ Modules (42 School: CPP00 to CPP04)

This repository contains my solutions for the C++ Piscine modules at 42, covering the fundamentals of Object Oriented Programming in C++, from basic class design to polymorphism.

## 📚 Overview

| Module | Topic |
|--------|-------|
| [CPP00](./CPP00) | Namespaces, Classes, Member Functions, Stdio Streams, Initialization Lists, Static, Const |
| [CPP01](./CPP01) | Memory Allocation, Pointers to Members, References, Switch Statement |
| [CPP02](./CPP02) | Ad hoc Polymorphism, Operator Overloading, Orthodox Canonical Form |
| [CPP03](./CPP03) | Inheritance |
| [CPP04](./CPP04) | Subtype Polymorphism, Abstract Classes |

---

## CPP00: Namespaces, Classes, Member Functions

Introduction to Object Oriented Programming in C++: basic class structure, constructors and destructors, member functions, and the use of the `const` keyword.

- **ex00**: Megaphone: introduction to string manipulation
- **ex01**: Basic class implementation with a form of contact management

## CPP01: Memory Allocation, Pointers, References

Focuses on the difference between stack and heap allocation, the use of pointers vs. references, and switch statements.

- **ex00 to ex03**: Zombie creation via stack and heap allocation
- **ex04 to ex05**: File manipulation and pointer to member usage

## CPP02: Ad hoc Polymorphism, Operator Overloading

Introduces operator overloading and the Orthodox Canonical Form (default constructor, copy constructor, copy assignment operator, destructor).

- **ex00**: Implementation of a `Fixed` class using fixed point numbers
- **ex01 to ex02**: Operator overloading (arithmetic, comparison, increment/decrement)

## CPP03: Inheritance

Covers class inheritance, constructors/destructors in inheritance chains, and multiple inheritance.

- **ex00 to ex02**: Building a class hierarchy simulating gear/equipment, applying single and multiple inheritance

## CPP04: Subtype Polymorphism, Abstract Classes

Explores polymorphism, abstract classes, interfaces, and deep vs. shallow copy.

- **ex00**: Base class and derived classes with virtual functions
- **ex01**: Deep copy vs. shallow copy
- **ex02**: Abstract classes

---

## 🛠️ Compilation

Each exercise includes its own `Makefile`. To compile:

```bash
cd CPPXX/exYY
make
```
