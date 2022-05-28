#include "HumanB.hpp"

HumanB::HumanB(string name) : name(name) {}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}

void HumanB::attack() {
	if (this->weapon) {
		std::cout << name + " attacks with their " + weapon->getType() << std::endl;
	} else {
		std::cout << "I haven't any weapon!" << std::endl;
	}
}
