#include "whatever.hpp"
#include "Awesome.hpp"

int main() {
	int a = 2;
	int b = 3;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

	Awesome awesome1(2), awesome2(4);

	::swap(awesome1, awesome2);
	std::cout << awesome1 << " " << awesome2 << std::endl;
	std::cout << ::max(awesome1, awesome2) << std::endl;
	std::cout << ::min(awesome1, awesome2) << std::endl;

	return 0;
}