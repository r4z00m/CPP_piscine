#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>

using std::cout;
using std::endl;

Base *generate(void) {
	std::srand(time(0));

	int i = rand() % 3;

	switch (i) {
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
	}
	return 0;
}

void identify(Base *p) {
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);

	if (a) {
		cout << "A" << endl;
	} else if (b) {
		cout << "B" << endl;
	} else if (c) {
		cout << "C" << endl;
	}
}

void identify(Base &p) {
	try {
		A &a = dynamic_cast<A&>(p);
		cout << "A" << endl;
	} catch (std::bad_cast &e) {}

	try {
		B &b = dynamic_cast<B&>(p);
		cout << "B" << endl;
	} catch (std::bad_cast &e) {}

	try {
		C &c = dynamic_cast<C&>(p);
		cout << "C" << endl;
	} catch (std::bad_cast &e) {}
}

int main() {
	Base *base = generate();

	if (base) {
		identify(base);
		identify(*base);

		delete base;
	}
}