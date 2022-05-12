#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice &ice) {
	*this = ice;
}

Ice &Ice::operator=(const Ice &ice) {
	if (this != &ice) {
		this->type = ice.type;
	}
	return *this;
}

AMateria *Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter &target) {
	cout << "* shoots an ice bolt at " + target.getName() + " *" << endl;
}