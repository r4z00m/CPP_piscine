#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class ClapTrap {

public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(string name);
	ClapTrap(const ClapTrap &clapTrap);
	ClapTrap &operator = (const ClapTrap &clapTrap);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:
	string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;
};

#endif
