#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public:
	FragTrap();
	~FragTrap();
	FragTrap(string name);
	FragTrap(const FragTrap &fragTrap);
	FragTrap &operator = (const FragTrap &fragTrap);

	void highFivesGuys(void);

	int getFragHitPoints();
	int getFragAttackDamage();

private:
	int fragHitPoints;
	int fragAttackDamage;
};

#endif
