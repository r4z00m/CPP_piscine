#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	float one = (a.getX() - point.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (a.getY() - point.getY());
	float two = (b.getX() - point.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (b.getY() - point.getY());
	float three = (c.getX() - point.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (c.getY() - point.getY());
	return (one > 0 && two > 0 && three > 0) || (one < 0 && two < 0 && three < 0);
}