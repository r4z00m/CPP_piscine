#include "ScavTrap.hpp"

int main(void) {
	ScavTrap one;
	ScavTrap two("Tony");

	ScavTrap three = two;
	three.beRepaired(100);

	one.attack("Tony");
	two.takeDamage(30);

	two.attack("default");

	two.guardGate();
}