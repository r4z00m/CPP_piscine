#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	Bureaucrat bureaucrat(3);

	Form form(2, 1);
	Form form1(4, 1);
	cout << form << endl;
	cout << form1 << endl;

	bureaucrat.signForm(form);
	bureaucrat.signForm(form1);

	cout << form << endl;
	cout << form1 << endl;

	try {
		Form form(0, 1);
	} catch (std::exception &exception) {
		cout << "Error: " << exception.what() << endl;
	}

	try {
		Form form1(4, 151);
	} catch (std::exception &exception) {
		cout << "Error: " << exception.what() << endl;
	}
}