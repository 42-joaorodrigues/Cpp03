#include "DiamondTrap.hpp"

int main() {
	DiamondTrap dt1("DT-One");

	dt1.attack("Enemy");
	dt1.takeDamage(25);
	dt1.beRepaired(15);
	dt1.guardGate();
	dt1.highFivesGuys();
	dt1.whoAmI();

	return 0;
}
