#include "WrongCat.hpp"

WrongCat::WrongCat() {
	cout << "WrongCat default constructor" << endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat() {
	cout << "WrongCat destructor" << endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat) {
	cout << "WrongCat copy constructor" << endl;
	*this = wrongCat;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongCat) {
	if (this != &wrongCat) {
		this->type = wrongCat.type;
	}
	return *this;
}

void WrongCat::makeSound() const {
	cout << "meow!" << endl;
}

std::string WrongCat::getType() const {
	return this->type;
}