#ifndef AWESOME_HPP
#define AWESOME_HPP
#include <iostream>

class Awesome {

public:
	Awesome(void);
	int get(void) const;

private:
	int _n;
};

std::ostream &operator << (std::ostream &os, const Awesome &a);

template <typename T>
void print(T const &x) {
	std::cout << x << std::endl;
}

#endif
