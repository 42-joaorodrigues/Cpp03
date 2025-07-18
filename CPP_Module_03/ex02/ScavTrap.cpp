#include "ScavTrap.hpp"
#include "iostream"

static const char*	green = "\033[38;5;121m";
static const char*	bold = "\033[1m";
static const char*	reset = "\033[0m";

// #start Mandatory
ScavTrap::ScavTrap() : ClapTrap(), _guarding_gate(false) {
    std::cout << "ScavTrap Default Constructor Called" << std::endl;

    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name), _guarding_gate(false) {
    std::cout << "ScavTrap Name Constructor Called" << std::endl;

    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src) {
    std::cout << "ScavTrap Copy Constructor Called" << std::endl;

    this->_guarding_gate = src._guarding_gate;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src) {
    std::cout << "ScavTrap Assignation Operator Called" << std::endl;

    if (this != &src) {
        this->_name = src._name;
        this->_hitPoints = src._hitPoints;
        this->_energyPoints = src._energyPoints;
        this->_attackDamage = src._attackDamage;
        this->_guarding_gate = src._guarding_gate;
    }

    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor Called" << std::endl;
}
// #end Mandatory

// #start Combat
void ScavTrap::guardGate() {
    std::cout << green << this->_name << reset;
    if (this->_guarding_gate) {
        std::cout << bold << " is already" << reset;
    } else {
        this->_guarding_gate = true;
        std::cout << bold << " is now" << reset;
    }
    std::cout << " guarding the gate" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    // No Hit Points
    if (this->_hitPoints < 1) {
        std::cout << green << this->_name << reset
                  << " can't attack."
                  << " It's already destroyed" << std::endl;
        return ;
    }
    // No Energy Points
    if (this->_energyPoints < 1) {
        std::cout << green << this->_name << reset
                  << " can't attack."
                  << " It has no energy" << std::endl;
        return ;
    }
    // Attacks
    --this->_energyPoints;
    std::cout << green << this->_name << reset
              << " attacked " << green << target << reset
              << " with a finger flick, causing " << bold << this->_attackDamage << reset
              << " points of damage" << std::endl;
}
// #end Combat
