#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <algorithm>

class Span {
public:
	~Span();
	Span(unsigned int N);
	Span(const Span &span);
	Span &operator = (const Span &span);

	void addNumber(int i);
	void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int shortestSpan();
	int longestSpan();

private:
	Span();
	unsigned int size;
	std::vector<int> vector;
};

#endif
