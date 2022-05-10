#include "Point.hpp"

int main(void) {
	cout << bsp(Point(4.6, -1.02),
				Point(6.3, 4.38),
				Point(12.14, 2.58),
				Point(7.78, 2.38)) << endl;

	cout << bsp(Point(4.6, -1.02),
				Point(6.3, 4.38),
				Point(12.14, 2.58),
				Point(4.72, 0.24)) << endl;
}