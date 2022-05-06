#include "Fixed.hpp"

Fixed::Fixed() {
	cout << "Default constructor called" << endl;
	value = 0;
}

Fixed::~Fixed() {
	cout << "Destructor called" << endl;
}

Fixed::Fixed(const int i) {
	cout << "Int constructor called" << endl;
	value = i << fractional;
}

Fixed::Fixed(const float f) {
	cout << "Float constructor called" << endl;
	value = std::roundf(f * (1 << fractional));
}

Fixed::Fixed(const Fixed &fixed) {
	cout << "Copy constructor called" << endl;
	*this = fixed;
}

Fixed &Fixed::operator = (const Fixed &fixed) {
	cout << "Copy assignment operator called" << endl;
	value = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits() const {
	return value;
}

void Fixed::setRawBits(const int raw) {
	value = raw;
}

float Fixed::toFloat() const {
	return (float) value / (1 << fractional);
}

int Fixed::toInt() const {
	return value >> fractional;
}

std::ostream &operator << (std::ostream &os, const Fixed &fixed) {
	return os << fixed.toFloat();
}
