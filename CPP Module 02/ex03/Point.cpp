#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::~Point() {}

Point::Point(const Point &point) {
	*this = point;
}

Point &Point::operator=(const Point &point) {
	if (this != &point) {
		cout << "Error: can't overload operator \"=\"!" << endl;
		cout << "The object was not changed!" << endl;
	}
	return *this;
}

Point::Point(const float x, const float y) : x(x), y(y) {}

float Point::getX() const {
	return x.toFloat();
}

float Point::getY() const {
	return y.toFloat();
}
