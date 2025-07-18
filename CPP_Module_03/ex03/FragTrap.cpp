#include "FragTrap.hpp"
#include "iostream"

static const char*	green = "\033[38;5;121m";
static const char*	reset = "\033[0m";

// \#start Mandatory
FragTrap::FragTrap() : ClapTrap() {
    std::cout << "FragTrap Default Constructor Called" << std::endl;

    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name){
    std::cout << "FragTrap Name Constructor Called" << std::endl;

    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src) {
    std::cout << "FragTrap Copy Constructor Called" << std::endl;
    *this = src;
}

FragTrap& FragTrap::operator=(const FragTrap& src) {
    std::cout << "FragTrap Assignation Operator Called" << std::endl;
    if (this != &src) {
        this->_name = src._name;
        this->_hitPoints = src._hitPoints;
        this->_energyPoints = src._energyPoints;
        this->_attackDamage = src._attackDamage;
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap Destructor Called" << std::endl;
}
// #end Mandatory

// Combat
void FragTrap::highFivesGuys() {
    std::cout << green << this->_name << reset
              << " is kindly asking for an HighFive" << std::endl;
}
