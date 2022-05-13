#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {

public:
	RobotomyRequestForm();
	~RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm);

	void execute(Bureaucrat const & executor) const;

private:
	std::string target;

	RobotomyRequestForm &operator=(const RobotomyRequestForm &robotomyRequestForm);
};

#endif