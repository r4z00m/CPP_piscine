#ifndef INTERN_HPP
#define INTERN_HPP
#include <string>

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

public:
	Intern();
	~Intern();
	Intern(const Intern &intern);
	Intern &operator = (const Intern &intern);

	Form *makeForm(std::string name, std::string target);
};

#endif
