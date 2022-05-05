#include <iostream>

int main() {
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "address string - " << &string << std::endl;
	std::cout << "address pointer - " << &stringPTR << std::endl;
	std::cout << "address reference - " << &stringREF << std::endl;

	std::cout << "" << std::endl;

	std::cout << "value string: " << string << std::endl;
	std::cout << "value pointer: " << *stringPTR << std::endl;
	std::cout << "value reference: " << stringREF << std::endl;
}