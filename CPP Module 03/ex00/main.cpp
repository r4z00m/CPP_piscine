#include "ClapTrap.hpp"

int main(void) {
	ClapTrap bob("Bob");
	ClapTrap ted("Ted");

	bob.attack("Ted");
	ted.takeDamage(1);

	ted.attack("Bob");
	bob.takeDamage(1);

	bob.beRepaired(1);
	ted.beRepaired(1);
}