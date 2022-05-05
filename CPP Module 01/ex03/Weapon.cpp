#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(string type) {
	this->type = type;
}

const string &Weapon::getType() {
	return type;
}

void Weapon::setType(string type) {
	this->type = type;
}