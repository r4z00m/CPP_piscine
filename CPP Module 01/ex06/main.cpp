#include "Harl.hpp"

using std::cout;
using std::endl;

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Error: bad arguments!" << endl;
		return 1;
	}

	string input(argv[1]);

	if (input != "DEBUG" && input != "INFO" && input != "WARNING" && input != "ERROR") {
		cout << "[ Probably complaining about insignificant problems ]" << endl;
		return 1;
	}

	Harl harl;
	harl.complain(argv[1]);
}