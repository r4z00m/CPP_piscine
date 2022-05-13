#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <fstream>

#include "Form.hpp"

class ShrubberyCreationForm : public Form {

public:
	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyCreationForm);

	void execute(Bureaucrat const & executor) const;

private:
	std::string target;

	ShrubberyCreationForm &operator = (const ShrubberyCreationForm &shrubberyCreationForm);
};

#endif
