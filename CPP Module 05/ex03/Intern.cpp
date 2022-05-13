#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &intern) {
	*this = intern;
}

Intern &Intern::operator=(const Intern &intern) {
	return *this;
}

Form *Intern::makeForm(std::string name, std::string target) {
	if (name.empty()) {
		cout << "Error: the form name is empty!" << endl;
		return 0;
	}

	std::string forms[3] = {"shrubbery", "robotomy", "presidential"};

	int index = -1;
	for (int i = 0; i < 3; ++i) {
		size_t pos = name.find(forms[i]);
		if (pos != std::string::npos) {
			index = i;
			break;
		}
	}

	switch (index) {
		case 0:
			return new ShrubberyCreationForm(target);
		case 1:
			return new RobotomyRequestForm(target);
		case 2:
			return new PresidentialPardonForm(target);
		default:
			cout << "Error: the form not found!" << endl;
			return 0;
	}
}