#include "Dog.hpp"

Dog::Dog() {
	cout << "Dog default constructor" << endl;
	this->type = "Dog";
}

Dog::~Dog() {
	cout << "Dog destructor" << endl;
}

Dog::Dog(const Dog &dog) {
	cout << "Dog copy constructor" << endl;
	*this = dog;
}

Dog &Dog::operator=(const Dog &dog) {
	if (this != &dog) {
		this->type = dog.type;
	}
	return *this;
}

void Dog::makeSound() const {
	cout << "wof-wof!" << endl;
}

std::string Dog::getType() const {
	return this->type;
}