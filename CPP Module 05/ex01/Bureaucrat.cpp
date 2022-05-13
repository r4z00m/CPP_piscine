#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(1) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(int grade) : name("Bureaucrat") {
	if (grade < 1) {
		throw Bureaucrat::GradeTooHighException("Grade too high");
	} else if (grade > 150) {
		throw Bureaucrat::GradeTooLowException("Grade too low");
	}
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) {
	*this = bureaucrat;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
	if (this != &bureaucrat) {
		this->grade = bureaucrat.grade;
	}
	return *this;
}

std::string Bureaucrat::getName() const {
	return this->name;
}

int Bureaucrat::getGrade() const {
	return this->grade;
}

void Bureaucrat::increment() {
	if (this->grade > 1) {
		this->grade--;
	} else {
		throw Bureaucrat::GradeTooHighException("Grade too high");
	}
}

void Bureaucrat::decrement() {
	if (this->grade < 150) {
		this->grade++;
	} else {
		throw Bureaucrat::GradeTooLowException("Grade too low");
	}
}

void Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
		cout << this->name << " signed " << form.getName() << endl;
	} catch (std::exception &exception) {
		cout << this->name << " couldn’t sign " << form.getName() << " because " << exception.what() << endl;
	}
}

std::ostream &operator << (std::ostream &os, const Bureaucrat &bureaucrat) {
	return os << bureaucrat.getName() << ", bureaucrat grade "
	<< bureaucrat.getGrade() << ".";
}