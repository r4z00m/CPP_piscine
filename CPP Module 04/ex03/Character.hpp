#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {

public:
	Character();
	virtual ~Character();
	Character(std::string name);
	Character(const Character &character);
	Character &operator = (const Character &character);

	std::string const &getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

private:
	std::string name;
	AMateria *slot[4];
};

#endif
