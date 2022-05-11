#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

public:
	Dog();
	virtual ~Dog();
	Dog(const Dog &dog);
	Dog &operator = (const Dog &dog);

	void makeSound() const;
	std::string getType() const;
	Brain getBrain();

private:
	Brain *brain;
};

#endif
