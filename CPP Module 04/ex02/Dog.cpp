#include "Dog.hpp"

Dog::Dog() {
	cout << "Dog default constructor" << endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog() {
	cout << "Dog destructor" << endl;
	delete this->brain;
}

Dog::Dog(const Dog &dog) {
	cout << "Dog copy constructor" << endl;
	this->type = dog.type;
	if (dog.brain) {
		this->brain = new Brain(*dog.brain);
	}
}

Dog &Dog::operator=(const Dog &dog) {
	if (this != &dog) {
		this->type = dog.type;
		if (dog.brain) {
			delete this->brain;
			this->brain = new Brain(*dog.brain);
		}
	}
	return *this;
}

void Dog::makeSound() const {
	cout << "wof-wof!" << endl;
}

std::string Dog::getType() const {
	return this->type;
}

Brain Dog::getBrain() {
	return *this->brain;
}