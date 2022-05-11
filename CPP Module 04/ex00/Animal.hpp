#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

using std::cout;
using std::endl;

class Animal {

public:
	Animal();
	virtual ~Animal();
	Animal(const Animal &animal);
	Animal &operator = (const Animal &animal);

	virtual void makeSound() const;
	std::string getType() const;

protected:
	std::string type;
};

#endif
