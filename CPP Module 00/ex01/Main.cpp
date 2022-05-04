#include "PhoneBook.hpp"

int main()
{
	std::string input;

	std::cout << "Welcome to Phonebook!" << std::endl;
	std::cout << "Supported commands: ADD, SEARCH, EXIT." << std::endl;

	PhoneBook phoneBook;

	while (getline(std::cin, input)) {
		if (input.empty()) {
			std::cout << "You can input only: ADD, SEARCH, EXIT." << std::endl;
			continue;
		} else if (input == "EXIT") {
			break;
		} else if (input == "ADD") {
			phoneBook.add();
		} else if (input == "SEARCH") {
			phoneBook.search();
		} else
			std::cout << "You can input only: ADD, SEARCH, EXIT." << std::endl;
	}

	if (std::cin.eof()) {
		std::cout << "BYE-BYE!" << std::endl;
	}
}