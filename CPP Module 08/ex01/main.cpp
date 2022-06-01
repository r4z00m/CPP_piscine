#include "Span.hpp"

int main() {
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "---" << std::endl;

	Span spa(10000);
	for (int i = 0; i < 10000; ++i) {
		spa.addNumber(i);
	}

	std::cout << spa.shortestSpan() << std::endl;
	std::cout << spa.longestSpan() << std::endl;
	std::cout << "---" << std::endl;

	Span span(1000);
	std::srand(time(0));
	for (int i = 0; i < 1000; ++i) {
		int random = std::rand();
		if (std::rand() % 2 == 0) {
			random = -random;
		}
		span.addNumber(random);
	}

	std::cout << span.shortestSpan() << std::endl;
	std::cout << span.longestSpan() << std::endl;
	std::cout << "---" << std::endl;

	std::vector<int> vector;
	for (int i = 0; i < 10; ++i) {
		vector.push_back(i);
	}

	Span range(15);
	range.addRange(vector.begin(), vector.end());

	try {
		range.addRange(vector.begin(), vector.end());
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}

	vector.clear();
	for (int i = 10; i < 15; ++i) {
		vector.push_back(i);
	}

	range.addRange(vector.begin(), vector.end());

	std::cout << range.shortestSpan() << std::endl;
	std::cout << range.longestSpan() << std::endl;

	return 0;
}
