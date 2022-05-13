#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <iostream>

using std::cout;
using std::endl;

class Bureaucrat {

public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(int grade);
	Bureaucrat(const Bureaucrat &bureaucrat);

	std::string getName() const;
	int getGrade() const;
	void increment();
	void decrement();

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
	int grade;

	Bureaucrat &operator = (const Bureaucrat &bureaucrat);
};

std::ostream &operator << (std::ostream &os, const Bureaucrat &bureaucrat);

#endif
