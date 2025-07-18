# C++ Module 03 - Inheritance

## 📘 Project Overview

**C++ Module 03** is part of the 42 C++ curriculum focusing on **Inheritance** in Object-Oriented Programming. This module introduces the concept of class inheritance, derived classes, and the diamond problem through implementing a series of robot classes.

> **Disclaimer:**  
> This document is an unofficial summary written for educational and documentation purposes.  
> It is not affiliated with or endorsed by 42 or its partners.  
> All 42 students are responsible for adhering to the academic integrity policy.  
> You may **not** publish or share any part of the official subject PDF, evaluation scripts, or Moulinette content.

---

## Contents

- [Goals](#goals)
- [General Requirements](#general-requirements)
- [Exercise 00 - Aaaaand... OPEN!](#exercise-00---aaaaand-open)
- [Exercise 01 - Serena, my love!](#exercise-01---serena-my-love)
- [Exercise 02 - Repetitive work](#exercise-02---repetitive-work)
- [Exercise 03 - Now it's weird!](#exercise-03---now-its-weird)
- [Submission Guidelines](#submission-guidelines)

---

## Goals

- Understand and implement class inheritance in C++
- Learn proper construction/destruction chaining
- Master derived class implementation
- Explore virtual inheritance and the diamond problem
- Practice Orthodox Canonical Form in derived classes

---

## General Requirements

- Written in **C++**, following **C++98 standard**
- Compile with `c++` and flags `-Wall -Wextra -Werror`
- Must still compile with `-std=c++98`
- Classes must follow **Orthodox Canonical Form** (unless stated otherwise)
- No memory leaks or undefined behavior
- Global variables and `using namespace` are **forbidden**
- STL containers and algorithms are **forbidden** (except Modules 08-09)
- Functions like `*printf()`, `*alloc()`, and `free()` are **forbidden**

### File Naming Conventions

- Exercise directories: `ex00`, `ex01`, `ex02`, `ex03`
- Class files: `ClassName.hpp`, `ClassName.cpp`
- Class names in **UpperCamelCase** format

### Makefile

Must include rules:
- `all`, `clean`, `fclean`, `re`, `$(NAME)`

---

## Exercise 00 - Aaaaand... OPEN!

**Turn-in directory:** `ex00/`  
**Files:** `Makefile`, `main.cpp`, `ClapTrap.{h,hpp}`, `ClapTrap.cpp`

### Requirements

Implement a `ClapTrap` class with:

**Private attributes (initialized values):**
- `name` (passed as constructor parameter)
- `hit_points` (10) - represents health
- `energy_points` (10)
- `attack_damage` (0)

**Public member functions:**
- `void attack(const std::string& target);`
- `void takeDamage(unsigned int amount);`
- `void beRepaired(unsigned int amount);`

**Behavior:**
- Attacking causes target to lose `<attack_damage>` hit points
- Repairing restores `<amount>` hit points
- Attacking and repairing cost 1 energy point each
- Cannot perform actions with 0 hit points or energy points

**Output:**
- All functions must print descriptive messages
- Constructors and destructors must display messages
- Example: `ClapTrap <name> attacks <target>, causing <damage> points of damage!`

---

## Exercise 01 - Serena, my love!

**Turn-in directory:** `ex01/`  
**Files:** Previous exercise files + `ScavTrap.{h,hpp}`, `ScavTrap.cpp`

### Requirements

Create `ScavTrap` class that **inherits from ClapTrap**:

**Attributes (different initialization values):**
- `name` (constructor parameter)
- `hit_points` (100)
- `energy_points` (50)
- `attack_damage` (20)

**Special features:**
- Different constructor/destructor messages than ClapTrap
- Different `attack()` message
- Special capacity: `void guardGate();` - displays Gate keeper mode message

**Important:**
- Must show proper construction/destruction chaining in tests
- Creation: ClapTrap constructor → ScavTrap constructor
- Destruction: ScavTrap destructor → ClapTrap destructor

---

## Exercise 02 - Repetitive work

**Turn-in directory:** `ex02/`  
**Files:** Previous exercise files + `FragTrap.{h,hpp}`, `FragTrap.cpp`

### Requirements

Create `FragTrap` class that **inherits from ClapTrap**:

**Attributes (different initialization values):**
- `name` (constructor parameter)
- `hit_points` (100)
- `energy_points` (100)
- `attack_damage` (30)

**Special features:**
- Different constructor/destructor messages than ClapTrap and ScavTrap
- Special capacity: `void highFivesGuys(void);` - displays positive high fives request

**Important:**
- Must show proper construction/destruction chaining
- Similar to ScavTrap but with different values and messages

---

## Exercise 03 - Now it's weird!

**Turn-in directory:** `ex03/`  
**Files:** Previous exercise files + `DiamondTrap.{h,hpp}`, `DiamondTrap.cpp`

### Requirements

Create `DiamondTrap` class that **inherits from BOTH FragTrap AND ScavTrap**:

**Attributes:**
- Private `name` attribute (same variable name as ClapTrap's)
- `name` (constructor parameter)
- `ClapTrap::name` (parameter + "_clap_name" suffix)
- `hit_points` (from FragTrap)
- `energy_points` (from ScavTrap)
- `attack_damage` (from FragTrap)
- `attack()` function (from ScavTrap)

**Special capacity:**
- `void whoAmI();` - displays both its name and ClapTrap name

**Important:**
- Solves the **diamond problem** - ClapTrap subobject created only once
- Requires understanding of virtual inheritance
- Can use `-Wshadow` and `-Wno-shadow` compiler flags

> **Note:** Exercise 03 is optional - you can pass the module without completing it.

---

## Submission Guidelines

- Submit to assigned Git repository
- Only repository contents will be evaluated
- Include comprehensive tests for each exercise
- Demonstrate proper construction/destruction chaining
- Show all required functionality in tests

---

## Key Learning Points

- **Inheritance:** Creating derived classes from base classes
- **Constructor/Destructor Chaining:** Understanding call order in inheritance hierarchy
- **Virtual Inheritance:** Solving the diamond problem in multiple inheritance
- **Access Specifiers:** Protected vs private in inheritance context
- **Method Overriding:** Different behaviors in derived classes

---

## Testing Recommendations

For each exercise, test:
- Object creation and destruction (check message output)
- All member functions
- Edge cases (0 hit points, 0 energy points)
- Inheritance-specific behavior
- Construction/destruction order (especially important for ex01-03)

---

## Final Note

This module introduces fundamental OOP concepts that are essential for advanced C++ programming. Understanding inheritance and the diamond problem will be crucial for future modules and real-world C++ development.

---
