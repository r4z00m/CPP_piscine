#ifndef AWESOME_HPP
#define AWESOME_HPP
#include <iostream>

class Awesome {

public:
	Awesome(void);
	Awesome(int n);
	Awesome &operator = (Awesome &a);
	bool operator == (const Awesome &a) const;
	bool operator != (const Awesome &a) const;
	bool operator > (const Awesome &a) const;
	bool operator < (const Awesome &a) const;
	bool operator >= (const Awesome &a) const;
	bool operator <= (const Awesome &a) const;
	int get_n() const;

private:
	int _n;
};

std::ostream &operator << (std::ostream &os, const Awesome &a);

#endif
