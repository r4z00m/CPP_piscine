#include "FragTrap.hpp"

int main(void) {
	FragTrap one;
	FragTrap two("Frag");

	one.attack("Frag");
	two.takeDamage(1);

	two.beRepaired(1);

	one.highFivesGuys();
	two.highFivesGuys();
}