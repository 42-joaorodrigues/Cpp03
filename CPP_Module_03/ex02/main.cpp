#include "FragTrap.hpp"

int main() {
	FragTrap ft1("FT-One");
	FragTrap ft2("FT-Two");

	ft1.attack("FT-Two");
	ft2.takeDamage(30);
	ft2.beRepaired(20);
	ft1.highFivesGuys();

	return 0;
}
