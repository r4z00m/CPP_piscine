#include "Fixed.hpp"

using std::cout;
using std::endl;

Fixed::Fixed() {
	cout << "Default constructor called" << endl;
	value = 0;
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
	value = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits() const {
	cout << "getRawBits member function called" << endl;
	return value;
}

void Fixed::setRawBits(const int raw) {
	cout << "setRawBits member function called" << endl;
	value = raw;
}