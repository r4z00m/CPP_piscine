#include <string>
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;

int main(int argc, char **argv) {
	if (argc != 2) {
		cout << "Error: bad arguments!" << endl;
		return 1;
	}

	cout << std::fixed << std::setprecision(1);

	try {
		int i = std::stoi(argv[1]);
		if (i < 32 || i > 127) {
			cout << "char: Non displayable" << endl;
		} else {
			cout << "char: '" << static_cast<char>(i) << "'" << endl;
		}
		cout << "int: " << i << endl;
	} catch (std::exception &e) {
		cout << "char: impossible" << endl;
		cout << "int: impossible" << endl;
	}

	try {
		float f = std::stof(argv[1]);
		cout << "float: " << f << "f" << endl;
	} catch (std::exception &e) {
		cout << "float: impossible" << endl;
	}

	try {
		double d = std::stod(argv[1]);
		cout << "double: " << d << endl;
	} catch (std::exception &e) {
		cout << "double: impossible" << endl;
	}
}