#include "Form.hpp"

Form::Form() : name("Form"), isSigned(false), gradeToSign(1), gradeToExecute(1) {}

Form::~Form() {}

Form::Form(int gradeToSign, int gradeToExecute)
: name("Form"), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1 || gradeToExecute < 1) {
		throw Form::GradeTooHighException("Grade too high");
	} else if (gradeToSign > 150 || gradeToExecute > 150) {
		throw Form::GradeTooLowException("Grade too low");
	}
}

Form::Form(const Form &form)
: name(form.name), isSigned(form.isSigned), gradeToSign(form.gradeToSign), gradeToExecute(form.gradeToExecute) {}

std::string Form::getName() const {
	return this->name;
}

bool Form::getSigned() const {
	return this->isSigned;
}

int Form::getGradeToSign() const {
	return this->gradeToSign;
}

int Form::getGradeToExecute() const {
	return this->gradeToExecute;
}

void Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() <= this->gradeToSign) {
		this->isSigned = true;
	} else {
		throw Form::GradeTooLowException("Grade too low");
	}
}

std::ostream &operator << (std::ostream &os, const Form &form) {
	return os << "Form name: " << form.getName()
	<< "\nForm signed: " << form.getSigned()
	<< "\nMin grade to sign: " << form.getGradeToSign()
	<< "\nMin grade to execute: " << form.getGradeToExecute();
}
