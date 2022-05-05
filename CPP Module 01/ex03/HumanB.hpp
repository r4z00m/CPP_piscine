#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB {

public:
	HumanB(string name);

	void attack();
	void setWeapon(Weapon &weapon);

private:
	Weapon *weapon;
	string name;
};

#endif
