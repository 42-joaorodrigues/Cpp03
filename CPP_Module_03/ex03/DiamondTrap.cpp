#include "DiamondTrap.hpp"
#include "iostream"

static const char*	green = "\033[38;5;121m";
static const char*	reset = "\033[0m";

DiamondTrap::DiamondTrap() :
    ClapTrap("Unnamed_clap_name"), ScavTrap(), FragTrap(), _name("Unnamed") {
    std::cout << "DiamondTrap Default Constructor Called" << std::endl;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const std::string& name) :
    ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name) {
    std::cout << "DiamondTrap Name Constructor Called" << std::endl;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src) {
    std::cout << "DiamondTrap Copy Constructor Called" << std::endl;
    *this = src;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src) {
    std::cout << "DiamondTrap Assignation Operator Called" << std::endl;
    if (this != &src) {
        this->_name = src._name;
        this->_hitPoints = src._hitPoints;
        this->_energyPoints = src._energyPoints;
        this->_attackDamage = src._attackDamage;
    }
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap Destructor Called" << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "I am " << green << this->_name << reset
              << " and my Clap Name is " << green << ClapTrap::_name << reset << std::endl;
}

