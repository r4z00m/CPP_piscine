#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include "Contact.hpp"

class PhoneBook {

public:
	int index;
	int overflow;

	void add();
	void search();

private:
	Contact contacts[8];
	void printFiled(std::string string);
};

#endif
