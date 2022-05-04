#include "PhoneBook.hpp"

void PhoneBook::add() {
	Contact contact;

	std::string input;
	int number;

	std::cout << "Enter first name:" << std::endl;

	while (getline(std::cin, input)) {
		if (input.empty()) {
			std::cout << "First name can't be empty" << std::endl;
			continue;
		} else {
			break;
		}
	}

	std::cout << "Enter last name:" << std::endl;

	contact.setFirstName(input);

	while (getline(std::cin, input)) {
		if (input.empty()) {
			std::cout << "Last name can't be empty" << std::endl;
			continue;
		} else {
			break;
		}
	}

	contact.setLastName(input);

	std::cout << "Enter nickname:" << std::endl;

	while (getline(std::cin, input)) {
		if (input.empty()) {
			std::cout << "Nickname can't be empty" << std::endl;
			continue;
		} else {
			break;
		}
	}

	contact.setNickname(input);

	std::cout << "Enter phone number:" << std::endl;

	while (getline(std::cin, input)) {
		if (input.empty()) {
			std::cout << "Phone number can't be empty" << std::endl;
			continue;
		} else {
			number = atoi(input.c_str());

			if (number < 1) {
				std::cout << "Invalid number" << std::endl;
				std::cout << "Enter phone number:" << std::endl;
				continue;
			} else {
				break;
			}
		}
	}

	contact.setPhoneNumber(number);

	std::cout << "Enter darkest secret:" << std::endl;

	while (getline(std::cin, input)) {
		if (input.empty()) {
			std::cout << "Darkest secret can't be empty" << std::endl;
			continue;
		} else {
			number = atoi(input.c_str());

			if (number < 1) {
				std::cout << "Invalid number" << std::endl;
				std::cout << "Enter darkest secret:" << std::endl;
				continue;
			} else {
				break;
			}
		}
	}

	contact.setDarkestSecret(number);

	if (this->index == 8) {
		this->overflow = 1;
		this->index = 0;
	}

	this->contacts[this->index++] = contact;

	std::cout << "Contact added" << std::endl;
	std::cout << "Supported commands: ADD, SEARCH, EXIT." << std::endl;
}

void PhoneBook::search() {
	std::string input;
	int number;

	std::cout << "Enter the index of contact or BACK to return:" << std::endl;

	while (getline(std::cin, input)) {
		if (input.empty()) {
			std::cout << "Index can't be empty" << std::endl;
			std::cout << "Enter the index of contact or BACK to return:" << std::endl;
			continue;
		} else if (input == "BACK") {
			std::cout << "Supported commands: ADD, SEARCH, EXIT." << std::endl;
			return;
		} else {
			number = atoi(input.c_str());

			if (this->overflow) {
				if (number < 1 || number > 8) {
					std::cout << "Invalid index" << std::endl;
					std::cout << "Enter the index of contact or BACK to return:" << std::endl;
					continue;
				}
			} else {
				if (number < 1 || number > this->index) {
					std::cout << "Contact not found" << std::endl;
					std::cout << "Enter the index of contact or BACK to return:" << std::endl;
					continue;
				}
			}

			printFiled(this->contacts[number - 1].getFirstName());
			printFiled(this->contacts[number - 1].getLastName());
			printFiled(this->contacts[number - 1].getNickname());
			printFiled(std::to_string(this->contacts[number - 1].getPhoneNumber()));
			std::cout << "|" << std::endl;
			std::cout << "Enter the index of contact or BACK to return:" << std::endl;
		}
	}

	std::cout << "Supported commands: ADD, SEARCH, EXIT." << std::endl;
}

void PhoneBook::printFiled(std::string string) {
	std::cout << "|";

	if (string.length() > 10) {
		std::cout << string.substr(0, 9) + ".";
	} else {
		int spaces = 10 - string.length();

		for (int i = 0; i < spaces; ++i) {
			std::cout << " ";
		}

		std::cout << string;
	}
}