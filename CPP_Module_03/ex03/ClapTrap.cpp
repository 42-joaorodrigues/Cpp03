#include "ClapTrap.hpp"
#include <iostream>

static const char*	green = "\033[38;5;121m";
static const char*	bold = "\033[1m";
static const char*	reset = "\033[0m";

// #start Mandatory
ClapTrap::ClapTrap() :
    _name("Unnamed"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) :
	_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap Name Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) {
	std::cout << "ClapTrap Copy Constructor Called" << std::endl;

	*this = src;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src) {
	std::cout << "ClapTrap Assignation Operator Called" << std::endl;

	if (this != &src) {
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}

	return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap Destructor Called" << std::endl;
}
// #end Mandatory

// #start Combat
void ClapTrap::attack(const std::string& target) {
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
              << " with a slap, causing " << bold << this->_attackDamage << reset
              << " points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    // Can't take damage
    if (this->_hitPoints < 1) {
    	std::cout << green << this->_name << reset
    			  << " can't take damage."
                  << " It's already destroyed" << std::endl;
        return ;
    }
    // Take Damage
    unsigned int    damage = amount > this->_hitPoints ? this->_hitPoints : amount;
    this->_hitPoints -= damage;
	std::cout << green << this->_name << reset
			  << " took " << bold << damage << reset << " points of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	// No Hit Points
	if (this->_hitPoints < 1) {
		std::cout << green << this->_name << reset
				  << " can't repair itself."
				  << " It's already destroyed" << std::endl;
		return ;
	}
	// No Energy Points
	if (this->_energyPoints < 1) {
		std::cout << green << this->_name << reset
				  << " can't repair itself."
				  << " It has no energy" << std::endl;
		return ;
	}
	// Repair
    --this->_energyPoints;
    this->_hitPoints += amount;
	std::cout << green << this->_name << reset
			  << " repaired itself."
			  << " It gained " << bold << amount << reset
			  << " points of " << bold << "HP" << reset << std::endl;
}
// #end Combat
