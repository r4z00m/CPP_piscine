#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {

public:
	PresidentialPardonForm();
	~PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &presidentialPardonForm);

	void execute(Bureaucrat const & executor) const;

private:
	std::string target;

	PresidentialPardonForm &operator = (const PresidentialPardonForm &presidentialPardonForm);
};

#endif