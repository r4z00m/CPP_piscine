#include "Fixed.hpp"

using std::cout;
using std::endl;

Fixed::Fixed() : value(0) {
	cout << "Default constructor called" << endl;
}

Fixed::~Fixed() {
	cout << "Destructor called" << endl;
}

Fixed::Fixed(const Fixed &fixed) {
	cout << "Copy constructor called" << endl;
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	cout << "Copy assignment operator called" << endl;
	if (this != &fixed) {
		this->value = fixed.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits() const {
	cout << "getRawBits member function called" << endl;
	return this->value;
}

void Fixed::setRawBits(const int raw) {
	cout << "setRawBits member function called" << endl;
	this->value = raw;
}