#include <iostream>

int main(int argc, char **argv) {
	if (argc > 1) {
		for (int i = 1; argv[i]; i++) {
			for (int j = 0; argv[i][j]; j++) {
				if ((j == 0 && argv[i][j] == ' ')
				|| (argv[i][j] == ' ' && argv[i][j + 1] == 0))
					continue;
				std::cout << (char)std::toupper(argv[i][j]);
			}
			if (argv[i + 1])
				std::cout << " ";
		}
		std::cout << std::endl;
	} else {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
}