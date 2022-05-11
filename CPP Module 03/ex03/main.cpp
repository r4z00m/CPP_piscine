#include "DiamondTrap.hpp"

int main(void) {
	DiamondTrap one;

	cout << endl;

	DiamondTrap two("Diamond");

	cout << endl;

	one.attack("SomeTrap");
	two.attack("AnotherTrap");

	cout << endl;

	one.highFivesGuys();
	two.guardGate();

	cout << endl;

	one.whoAmI();
	two.whoAmI();

	cout << endl;
}
