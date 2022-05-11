#include "Cat.hpp"

Cat::Cat() {
	cout << "Cat default constructor" << endl;
	this->type = "Cat";
}

Cat::~Cat() {
	cout << "Cat destructor" << endl;
}

Cat::Cat(const Cat &cat) {
	cout << "Cat copy constructor" << endl;
	*this = cat;
}

Cat &Cat::operator=(const Cat &cat) {
	if (this != &cat) {
		this->type = cat.type;
	}
	return *this;
}

void Cat::makeSound() const {
	cout << "meow!" << endl;
}

std::string Cat::getType() const {
	return this->type;
}