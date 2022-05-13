#include "Bureaucrat.hpp"

int main(void) {
	try {
		Bureaucrat bureaucrat(1);
		cout << bureaucrat << endl;
	} catch (std::exception &exception) {
		std::cerr << "Error: " << exception.what() << endl;
	}

	try {
		Bureaucrat bureaucrat(150);
		cout << bureaucrat << endl;
	} catch (std::exception &exception) {
		std::cerr << "Error: " << exception.what() << endl;
	}

	try {
		Bureaucrat bureaucrat(0);
		cout << bureaucrat << endl;
	} catch (std::exception &exception) {
		std::cerr << "Error: " << exception.what() << endl;
	}

	try {
		Bureaucrat bureaucrat(151);
		cout << bureaucrat << endl;
	} catch (std::exception &exception) {
		std::cerr << "Error: " << exception.what() << endl;
	}

	try {
		Bureaucrat bureaucrat(1);
		cout << bureaucrat << endl;
		bureaucrat.increment();
	} catch (std::exception &exception) {
		std::cerr << "Error: " << exception.what() << endl;
	}

	try {
		Bureaucrat bureaucrat(150);
		cout << bureaucrat << endl;
		bureaucrat.decrement();
	} catch (std::exception &exception) {
		std::cerr << "Error: " << exception.what() << endl;
	}

	try {
		Bureaucrat bureaucrat(3);
		cout << bureaucrat << endl;
		bureaucrat.increment();
		cout << bureaucrat << endl;
		bureaucrat.decrement();
		cout << bureaucrat << endl;
	} catch (std::exception &exception) {
		std::cerr << "Error: " << exception.what() << endl;
	}
}