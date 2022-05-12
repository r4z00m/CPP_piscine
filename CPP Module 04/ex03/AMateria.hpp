#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>

#include "ICharacter.hpp"

using std::cout;
using std::endl;

class ICharacter;

class AMateria {

public:
	AMateria();
	virtual ~AMateria();
	AMateria(const AMateria &aMateria);
	AMateria &operator = (const AMateria &aMateria);
	AMateria(std::string const &type);

	std::string const &getType() const; //Returns the materia type

	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);

protected:
	std::string type;
};

#endif
