#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
: Form("RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: Form("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm)
: Form("RobotomyRequestForm", 72, 45), target(robotomyRequestForm.target) {}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (!this->getSigned()) {
		throw Form::NotSignedException("Form is not signed!");
	}
	if (executor.getGrade() > this->getGradeToExecute()) {
		throw Form::GradeTooLowException("Grade too low");
	}
	cout << "* drilling noises *" << endl;
	std::srand(time(0));
	if (std::rand() % 2 == 0) {
		cout << this->target << " has been robotomized successfully!" << endl;
	} else {
		cout << this->target << " robotomize failed!" << endl;
	}
}