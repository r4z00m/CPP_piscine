#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <algorithm>

template<typename T>
int easyfind(T &t, int i) {
	typename T::iterator it;

	it = std::find(t.begin(), t.end(), i);

	if (it != t.end()) {
		return *it;
	} else {
		throw std::runtime_error("Error: elem not found!");
	}
}

#endif
