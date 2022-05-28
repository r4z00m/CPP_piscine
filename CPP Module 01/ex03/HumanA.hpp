#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA {

public:
	HumanA(string name, Weapon &weapon);

	void attack();

private:
	Weapon &weapon;
	string name;
};

#endif
