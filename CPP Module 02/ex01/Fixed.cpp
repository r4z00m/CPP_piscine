#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
	cout << "Default constructor called" << endl;
}

Fixed::~Fixed() {
	cout << "Destructor called" << endl;
}

Fixed::Fixed(const int i) {
	cout << "Int constructor called" << endl;
	this->value = i << fractional;
}

Fixed::Fixed(const float f) {
	cout << "Float constructor called" << endl;
	this->value = std::roundf(f * (1 << fractional));
}

Fixed::Fixed(const Fixed &fixed) {
	cout << "Copy constructor called" << endl;
	*this = fixed;
}

Fixed &Fixed::operator = (const Fixed &fixed) {
	cout << "Copy assignment operator called" << endl;
	if (this != &fixed) {
		this->value = fixed.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits() const {
	return this->value;
}

void Fixed::setRawBits(const int raw) {
	this->value = raw;
}

float Fixed::toFloat() const {
	return (float) this->value / (1 << fractional);
}

int Fixed::toInt() const {
	return this->value >> fractional;
}

std::ostream &operator << (std::ostream &os, const Fixed &fixed) {
	return os << fixed.toFloat();
}
