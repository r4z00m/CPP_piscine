#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon &weapon) {
	this->name = name;
	this->weapon = &weapon;
}

void HumanA::attack() {
	std::cout << name + " attacks with their " + weapon->getType() << std::endl;
}