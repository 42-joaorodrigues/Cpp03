# C++ Module 03 - Inheritance

![42 Badge](https://img.shields.io/badge/42-C++_Module_03-brightgreen)
![C++ Badge](https://img.shields.io/badge/Language-C++-blue)
![Status Badge](https://img.shields.io/badge/Status-Completed-success)

## Project Details

For full project requirements, see the [Subject File](./subject.md).

## What I Learned

Through this inheritance-focused module at 42 School, I developed essential Object-Oriented Programming skills:

- **Class Inheritance** - Mastered creating derived classes that inherit attributes and methods from base classes
- **Constructor/Destructor Chaining** - Understood the proper order of construction and destruction in inheritance hierarchies
- **Method Overriding** - Implemented different behaviors in derived classes while maintaining the same interface
- **Access Specifiers** - Learned when to use public, private, and protected inheritance for proper encapsulation
- **Virtual Inheritance** - Solved the diamond problem using virtual inheritance to prevent multiple base class instances
- **Orthodox Canonical Form** - Applied the rule of three (constructor, copy constructor, assignment operator, destructor) in inheritance
- **Polymorphism Foundations** - Built the groundwork for understanding virtual functions and runtime polymorphism
- **Multiple Inheritance** - Navigated the complexities of inheriting from multiple base classes
- **Memory Management in OOP** - Ensured proper resource management across inheritance hierarchies
- **Code Reusability** - Leveraged inheritance to reduce code duplication and improve maintainability

This module strengthened my understanding of OOP principles and prepared me for advanced C++ concepts like virtual functions and abstract classes.

## About the Project

C++ Module 03 focuses on inheritance, one of the fundamental pillars of Object-Oriented Programming. The project builds a hierarchy of robot classes, starting with a basic `ClapTrap` and evolving into more specialized robots through inheritance. The final exercise explores multiple inheritance and the diamond problem, demonstrating advanced OOP concepts.

## Implementation Details

The project consists of four exercises that progressively build complexity:

### Exercise 00: ClapTrap Base Class

A foundational robot class with basic combat capabilities:

**Core Attributes:**
- Name (constructor parameter)
- Hit Points (10) - health system
- Energy Points (10) - action cost system  
- Attack Damage (0) - damage output

**Combat System:**
- `attack()` - Deals damage to targets, costs 1 energy
- `takeDamage()` - Reduces hit points with damage cap protection
- `beRepaired()` - Restores health, costs 1 energy

**Smart Features:**
- Energy and health validation before actions
- Colorized console output for better readability
- Robust error handling for edge cases

### Exercise 01: ScavTrap Inheritance

Enhanced robot inheriting from ClapTrap with improved stats:

| Attribute | ClapTrap | ScavTrap |
|-----------|----------|----------|
| Hit Points | 10 | 100 |
| Energy Points | 10 | 50 |
| Attack Damage | 0 | 20 |

**Special Abilities:**
- `guardGate()` - Activates gate keeper mode
- Custom attack messages
- Different construction/destruction output

**Inheritance Features:**
- Proper constructor chaining demonstration
- Method overriding for specialized behavior
- Protected member access through inheritance

### Exercise 02: FragTrap Alternative

Another ClapTrap derivative with different specialization:

| Attribute | ScavTrap | FragTrap |
|-----------|----------|----------|
| Hit Points | 100 | 100 |
| Energy Points | 50 | 100 |
| Attack Damage | 20 | 30 |

**Unique Features:**
- `highFivesGuys()` - Positive interaction method
- Maximum energy capacity
- Highest damage output

### Exercise 03: DiamondTrap Multiple Inheritance

Advanced robot combining both ScavTrap and FragTrap capabilities:

**Multiple Inheritance Structure:**
```
    ClapTrap
    /      \
ScavTrap  FragTrap
    \      /
   DiamondTrap
```

**Attribute Selection:**
- Hit Points: Inherited from FragTrap (100)
- Energy Points: Inherited from ScavTrap (50)  
- Attack Damage: Inherited from FragTrap (30)
- Attack Method: Inherited from ScavTrap

**Diamond Problem Solution:**
- Virtual inheritance prevents duplicate ClapTrap instances
- Proper name management with `_name` shadowing
- Special `whoAmI()` method for identity display

## Technical Challenges Overcome

- **Constructor Chaining** - Ensuring proper initialization order in inheritance hierarchies
- **Diamond Problem** - Implementing virtual inheritance to solve multiple inheritance conflicts
- **Name Shadowing** - Managing multiple name attributes in DiamondTrap without conflicts
- **Method Resolution** - Explicitly choosing which parent's methods to inherit in multiple inheritance
- **Memory Layout** - Understanding how virtual inheritance affects object memory structure
- **Compilation Complexity** - Handling circular dependencies and proper include guard usage

## Usage

Each exercise is self-contained with its own Makefile:

```bash
# Navigate to any exercise directory
cd CPP_Module_03/ex00

# Compile the project
make

# Run the executable
./claptrap

# Clean up
make clean
```

## Code Example

```cpp
// Creating and using different robot types
ClapTrap basic("Basic");
ScavTrap guard("Guardian"); 
FragTrap warrior("Warrior");
DiamondTrap hybrid("Hybrid");

// Demonstrating inheritance behavior
basic.attack("Target");     // Basic attack
guard.attack("Target");     // Enhanced ScavTrap attack
guard.guardGate();          // Special ScavTrap ability

warrior.attack("Target");   // FragTrap attack
warrior.highFivesGuys();    // Special FragTrap ability

hybrid.attack("Target");    // Uses ScavTrap's attack method
hybrid.guardGate();         // Has ScavTrap abilities
hybrid.highFivesGuys();     // Has FragTrap abilities
hybrid.whoAmI();            // Unique DiamondTrap method
```

## Architecture Highlights

- **Clean Inheritance Design** - Each derived class adds meaningful functionality
- **Proper Encapsulation** - Protected members allow inheritance while maintaining security
- **Consistent Interface** - All robots share common combat methods with specialized implementations
- **Resource Management** - No memory leaks despite complex inheritance relationships
- **Error Prevention** - Comprehensive validation prevents invalid operations

## Learning Outcomes

This module provided hands-on experience with:
- **Inheritance Hierarchies** - Building logical class relationships
- **Code Reuse** - Leveraging base class functionality in derived classes
- **Complexity Management** - Organizing code through proper inheritance design
- **Problem Solving** - Addressing the diamond problem with virtual inheritance
- **C++ Best Practices** - Following Orthodox Canonical Form in complex scenarios

---

*This project was completed as part of the 42 School C++ curriculum, demonstrating proficiency in Object-Oriented Programming, inheritance concepts, and advanced C++ features.*

---

## License

This project is licensed under the [MIT License](./LICENSE).
