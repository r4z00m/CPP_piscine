#include "iter.hpp"

void func1(int i) {
	std::cout << i << std::endl;
}

void func2(std::string string) {
	std::cout << string << std::endl;
}

void func3(float f) {
	std::cout << f * f << std::endl;
}

int main() {
	int a[3] = {100, -213, 345};
	std::string string[5] = {"haha", "hehe", "huhu", "hihi", "sad"};
	float f[2] = {7.7, 8.8};

	::iter(a, 3, func1);
	::iter(string, 5, func2);
	::iter(f, 2, func3);
}