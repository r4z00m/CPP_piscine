#include "Awesome.hpp"

Awesome::Awesome() : _n(42) {}

int Awesome::get() const {
	return this->_n;
}

std::ostream &operator << (std::ostream &os, const Awesome &a) {
	return os << a.get();
}