#include "Harl.hpp"

using std::cout;
using std::endl;

void Harl::complain(string level) {
	void (Harl::*debug_p) (void) = &Harl::debug;
	void (Harl::*info_p) (void) = &Harl::info;
	void (Harl::*warning_p) (void) = &Harl::warning;
	void (Harl::*error_p) (void) = &Harl::error;

	string arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int index = -1;

	for (int i = 0; i < arr->length(); ++i) {
		if (arr[i] == level) {
			index = i;
			cout << "[ " + arr[i] + " ]" << endl;
			break;
		}
	}

	switch (index) {
		case 0:
			(this->*debug_p)();
		case 1:
			(this->*info_p)();
		case 2:
			(this->*warning_p)();
		case 3:
			(this->*error_p)();
	}
}

void Harl::debug() {
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-"
			"ketchup burger. I really do!" << endl;
}

void Harl::info() {
	cout << "I cannot believe adding extra bacon costs more money. You didn’t put "
			"enough bacon in my burger! If you did, I wouldn’t be asking for more!" << endl;
}

void Harl::warning() {
	cout << "I think I deserve to have some extra bacon for free. I’ve been coming for "
			"years whereas you started working here since last month." << endl;
}

void Harl::error() {
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
}
