#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char **argv) {
	if (argc != 4) {
		cout << "Error: bad arguments!" << endl;
		return 1;
	}

	string filename(argv[1]);
	string s1(argv[2]);
	string s2(argv[3]);
	string line;
	string result;

	std::fstream filestream(filename);

	if (filestream.is_open()) {
		while (std::getline(filestream, line)) {
			result.append(line).append("\n");
		}
		filestream.close();
	} else {
		std::cerr << "Error: can't open file!" << endl;
		return 1;
	}

	result = result.substr(0, result.length() - 1);

	cout << "File content: " << result << endl;

	int i;
	while ((i = result.find(s1)) != -1) {
		string start = result.substr(0, i);
		string end = result.substr(i + s1.length());
		result = start + s2 + end;
	}

	std::ofstream output_stream(filename + ".replace");

	if (output_stream.is_open()) {
		output_stream << result;
		output_stream.close();
	} else {
		std::cerr << "Error: can't open file!" << endl;
		return 1;
	}

	result = "";
	line = "";

	std::fstream second_filestream(filename + ".replace");

	if (second_filestream.is_open()) {
		while (std::getline(second_filestream, line)) {
			result.append(line).append("\n");
		}
		second_filestream.close();
	} else {
		std::cerr << "Error: can't open file!" << endl;
		return 1;
	}

	result = result.substr(0, result.length() - 1);

	cout << "Created file content after replacing: " << result << endl;
}