#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
private:

public:
    FragTrap();
    FragTrap(const std::string& name);
    FragTrap(const FragTrap& src);
    FragTrap& operator=(const FragTrap& src);
    ~FragTrap();
    // Combat
    void    highFivesGuys();
};

#endif //FRAGTRAP_HPP
