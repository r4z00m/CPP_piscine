#include "Fixed.hpp"

Fixed::Fixed() : value(0) {}

Fixed::~Fixed() {}

Fixed::Fixed(const int i) : value(i) {}

Fixed::Fixed(const float f) {
	this->value = std::roundf(f * (1 << this->fractional));
}

Fixed::Fixed(const Fixed &fixed) {
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
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
	return (float) this->value / (1 << this->fractional);
}

int Fixed::toInt() const {
	return this->value >> this->fractional;
}

bool Fixed::operator>(const Fixed &fixed) {
	return this->value > fixed.value;
}

bool Fixed::operator<(const Fixed &fixed) {
	return this->value < fixed.value;
}

bool Fixed::operator>=(const Fixed &fixed) {
	return this->value >= fixed.value;
}

bool Fixed::operator<=(const Fixed &fixed) {
	return this->value <= fixed.value;
}

bool Fixed::operator==(const Fixed &fixed) {
	return this->value == fixed.value;
}

bool Fixed::operator!=(const Fixed &fixed) {
	return this->value != fixed.value;
}

Fixed Fixed::operator+(const Fixed &fixed) {
	return Fixed(this->value + fixed.value);
}

Fixed Fixed::operator-(const Fixed &fixed) {
	return Fixed(this->value - fixed.value);
}

Fixed Fixed::operator*(const Fixed &fixed) {
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed) {
	return Fixed(this->toFloat() / fixed.toFloat());
}

Fixed &Fixed::operator++() {
	this->value++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed prev = *this;
	this->value++;
	return prev;
}

Fixed &Fixed::operator--() {
	this->value--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed prev = *this;
	this->value--;
	return prev;
}

Fixed &Fixed::min(Fixed &l, Fixed &r) {
	if (l.value < r.value) {
		return l;
	}
	return r;
}

const Fixed &Fixed::min(const Fixed &l, const Fixed &r) {
	if (l.value < r.value) {
		return l;
	}
	return r;
}

Fixed &Fixed::max(Fixed &l, Fixed &r) {
	if (l.value > r.value) {
		return l;
	}
	return r;
}

const Fixed &Fixed::max(const Fixed &l, const Fixed &r) {
	if (l.value > r.value) {
		return l;
	}
	return r;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
	return os << fixed.toFloat();
}
