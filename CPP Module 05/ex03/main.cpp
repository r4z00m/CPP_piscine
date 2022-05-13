#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void) {
	Bureaucrat bureaucrat(1);

	Intern someRandomIntern;

	Form *rrf;
	Form *rrf1;
	Form *rrf2;
	Form *rrf3;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf1 = someRandomIntern.makeForm("shrubbery request", "Bender");
	rrf2 = someRandomIntern.makeForm("presidential request", "Bender");
	rrf3 = someRandomIntern.makeForm("some request", "Bender");

	if (rrf) {
		bureaucrat.signForm(*rrf);
		bureaucrat.executeForm(*rrf);
	}

	if (rrf1) {
		bureaucrat.signForm(*rrf1);
		bureaucrat.executeForm(*rrf1);
	}

	if (rrf2) {
		bureaucrat.signForm(*rrf2);
		bureaucrat.executeForm(*rrf2);
	}

	if (rrf3) {
		bureaucrat.signForm(*rrf3);
		bureaucrat.executeForm(*rrf3);
	}

	delete rrf;
	delete rrf1;
	delete rrf2;
	delete rrf3;
}