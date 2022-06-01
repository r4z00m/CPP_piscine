#include "Span.hpp"

Span::~Span() {}

Span::Span(unsigned int N) : size(N) {}

Span::Span(const Span &span) {
	*this = span;
}

Span &Span::operator=(const Span &span) {
	if (this != &span) {
		this->size = span.size;
		this->vector = span.vector;
	}
	return *this;
}

void Span::addNumber(int i) {
	if (vector.size() < this->size) {
		vector.push_back(i);
	} else {
		throw std::runtime_error("Error: the span is full!");
	}
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	int available = this->size - this->vector.size();
	int toAdd = end - begin;
	if (available >= toAdd) {
		vector.insert(vector.end(), begin, end);
	} else {
		throw std::runtime_error("Error: not enough space!");
	}
}

int Span::shortestSpan() {
	if (vector.size() < 2) {
		throw std::runtime_error("Error: to little count of numbers in the span!");
	}
	std::sort(vector.begin(), vector.end());
	int res = INT_MAX;
	for (int i = 0; i < vector.size() - 1; ++i) {
		int dis = std::abs(vector.at(i) - vector.at(i + 1));
		if (dis < res) {
			res = dis;
		}
	}
	return res;
}

int Span::longestSpan() {
	if (vector.size() < 2) {
		throw std::runtime_error("Error: to little count of numbers in the span!");
	}
	int min = *std::min_element(vector.begin(), vector.end());
	int max = *std::max_element(vector.begin(), vector.end());
	return std::abs(max - min);
}
