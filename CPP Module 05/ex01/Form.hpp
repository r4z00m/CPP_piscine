#ifndef FORM_HPP
#define FORM_HPP
#include <string>
#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

using std::cout;
using std::endl;

class Form {

public:
	Form();
	~Form();
	Form(int gradeToSign, int gradeToExecute);
	Form(const Form &form);

	std::string getName() const;
	bool getSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	void beSigned(Bureaucrat &bureaucrat);

	class GradeTooHighException : public std::runtime_error {

	public:
		GradeTooHighException(const std::string &error) : std::runtime_error(error) {}
	};

	class GradeTooLowException : public std::runtime_error {

	public:
		GradeTooLowException(const std::string &error) : std::runtime_error(error) {}
	};

private:
	const std::string name;
	bool isSigned;
	const int gradeToSign;
	const int gradeToExecute;

	Form &operator = (const Form &form);
};

std::ostream &operator << (std::ostream &os, const Form &form);

#endif
