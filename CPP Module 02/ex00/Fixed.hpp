#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &fixed);
	Fixed &operator = (const Fixed &fixed);

	int getRawBits(void) const;
	void setRawBits(const int raw);

private:
	static const int fractional = 8;
	int value;
};

#endif
