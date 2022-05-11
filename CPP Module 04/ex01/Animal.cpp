#include "Animal.hpp"

Animal::Animal() {
	cout << "Animal default constructor" << endl;
}

Animal::~Animal() {
	cout << "Animal destructor" << endl;
}

Animal::Animal(const Animal &animal) {
	cout << "Animal copy constructor" << endl;
	*this = animal;
}

Animal &Animal::operator=(const Animal &animal) {
	if (this != &animal) {
		this->type = animal.type;
	}
	return *this;
}

void Animal::makeSound() const {
	cout << "I'm an Animal" << endl;
}

std::string Animal::getType() const {
	return this->type;
}