#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>
#include <iostream>

using std::string;

class Weapon {

private:
	string type;

public:
	Weapon();
	Weapon(string type);

	const string &getType();
	void setType(string type);
};

#endif
