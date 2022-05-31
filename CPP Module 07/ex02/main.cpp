#include "Array.hpp"

int main() {
	Array<int> array;
	std::cout << "array size: " << array.size() << std::endl;

	Array<int> ints(5);
	std::cout << "ints size: " << ints.size() << std::endl;
	for (int i = 0; i < ints.size(); ++i) {
		std::cout << "def value: " << ints[i] << std::endl;
		ints[i] = 5;
	}

	for (int i = 0; i < ints.size(); ++i) {
		std::cout << "value: " << ints[i] << std::endl;
	}

	try {
		std::cout << ints[-1] << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << ints[5] << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	Array<int> copy(ints);
	std::cout << "copy size: " << copy.size() << std::endl;
	for (int i = 0; i < copy.size(); ++i) {
		std::cout << "copy value: " << copy[i] << std::endl;
	}

	Array<int> operator_arr = ints;
	std::cout << "operator_arr size: " << operator_arr.size() << std::endl;
	for (int i = 0; i < operator_arr.size(); ++i) {
		std::cout << "operator_arr value: " << operator_arr[i] << std::endl;
	}

	Array<double> d(3);
	for (int i = 0; i < d.size(); ++i) {
		std::cout << "def: " << d[i] << std::endl;
		d[i] = 5.5;
	}

	for (int i = 0; i < d.size(); ++i) {
		std::cout << "val: " << d[i] << std::endl;
	}

	Array<char> c(1);
	c[0] = 'a';
	std::cout << c[0] << std::endl;
}
