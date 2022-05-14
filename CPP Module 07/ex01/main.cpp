#include "iter.hpp"
#include "Awesome.hpp"

void func1(int const &i) {
	std::cout << i << std::endl;
}

void func2(std::string const &string) {
	std::cout << string << std::endl;
}

void func3(float const &f) {
	std::cout << f * f << std::endl;
}

int main() {
	int a[3] = {100, -213, 345};
	std::string string[5] = {"haha", "hehe", "huhu", "hihi", "sad"};
	float f[2] = {7.7, 8.8};

	::iter(a, 3, func1);
	::iter(string, 5, func2);
	::iter(f, 2, func3);

	int tab[5] = {0, 1, 2, 3, 4};
	Awesome tab2[5];

	::iter(tab, 5, print);
	::iter(tab2, 5, print);
}