#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>

template<typename T>
int easyfind(T &t, int i) {
	typename T::iterator iterator;
	iterator = t.begin();
	while (iterator != t.end()) {
		if (*iterator == i) {
			return *iterator;
		}
		iterator++;
	}
	throw std::runtime_error("Error: elem not found!");
}

#endif
