#include <string>
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;

void print_inf(int i) {
	cout << "char: impossible" << endl;
	cout << "int: impossible" << endl;
	switch (i) {
		case 0:
			cout << "float: -inff" << endl;
			cout << "double: -inf" << endl;
			break;
		case 1:
			cout << "float: inff" << endl;
			cout << "double: inf" << endl;
			break;
		case 2:
			cout << "float: nanf" << endl;
			cout << "double: nan" << endl;
			break;
	}
}

void print_one_symbol(char **argv) {
	if (isdigit(argv[1][0])) {
		int i = std::stoi(argv[1]);
		cout << "char: Non displayable" << endl;
		cout << "int: " << i << endl;
		cout << "float: " << static_cast<float>(i) << "f" << endl;
		cout << "double: " << static_cast<double>(i) << endl;
	} else {
		char c = argv[1][0];
		cout << "char: '" << c << "'" << endl;
		cout << "int: " << static_cast<int>(c) << endl;
		cout << "float: " << static_cast<float>(c) << "f" << endl;
		cout << "double: " << static_cast<double>(c) << endl;
	}
}

void print_float(char **argv) {
	try {
		float f = std::stof(argv[1]);
		if (f < 32 || f > 127) {
			cout << "char: Non displayable" << endl;
		} else {
			cout << "char: '" << static_cast<char>(f) << "'" << endl;
		}
		if (f < std::numeric_limits<int>::min()) {
			cout << "int: impossible" << endl;
		} else {
			int i = static_cast<int>(f);
			if (i == std::numeric_limits<int>::min()) {
				cout << "int: impossible" << endl;
			} else {
				cout << "int: " << i << endl;
			}
		}
		cout << "float: " << f << "f" << endl;
		cout << "double: " << static_cast<double>(f) << endl;
	} catch (std::exception &e) {
		cout << e.what() << endl;
	}
}

void print_double(char **argv) {
	try {
		double d = std::stod(argv[1]);
		if (d < 32 || d > 127) {
			cout << "char: Non displayable" << endl;
		} else {
			cout << "char: '" << static_cast<char>(d) << "'" << endl;
		}
		if (d < std::numeric_limits<int>::min()) {
			cout << "int: impossible" << endl;
		} else {
			int i = static_cast<int>(d);
			if (i == std::numeric_limits<int>::min()) {
				cout << "int: impossible" << endl;
			} else {
				cout << "int: " << i << endl;
			}
		}
		cout << "float: " << static_cast<float>(d) << "f" << endl;
		cout << "double: " << d << endl;
	} catch (std::exception &e) {
		cout << e.what() << endl;
	}
}

void print_int(char **argv) {
	try {
		int i = std::stoi(argv[1]);
		if (i < 32 || i > 127) {
			cout << "char: Non displayable" << endl;
		} else {
			cout << "char: '" << static_cast<char>(i) << "'" << endl;
		}
		cout << "int: " << i << endl;
		cout << "float: " << static_cast<float>(i) << "f" << endl;
		cout << "double: " << static_cast<double>(i) << endl;
	} catch (std::exception &e) {
		cout << e.what() << endl;
	}
}

int main(int argc, char **argv) {
	if (argc != 2) {
		cout << "Error: bad arguments!" << endl;
		return 1;
	}

	cout << std::fixed << std::setprecision(1);

	std::string input(argv[1]);

	if (input.empty()) {
		cout << "Error: empty argument" << endl;
		return 1;
	}

	if (input == "-inff" || input == "-inf") {
		print_inf(0);
		return 1;
	} else if (input == "+inff" || input == "inff" || input == "+inf" || input == "inf") {
		print_inf(1);
		return 1;
	} else if (input == "nanf" || input == "-nanf" || input == "+nanf" ||
				input == "nan" || input == "-nan" || input == "+nan") {
		print_inf(2);
		return 1;
	}

	for (int i = 0; i < input.size() - 1; ++i) {
		if (!isdigit(input[i]) && input[i] != '.') {
			cout << "Error: wrong argument" << endl;
			return 1;
		}
	}

	if (input.size() == 1) {
		print_one_symbol(argv);
	} else {
		if (input[input.size() - 1] == 'f') {
			print_float(argv);
		} else if (input.find(".") != std::string::npos) {
			print_double(argv);
		} else {
			print_int(argv);
		}
	}
}