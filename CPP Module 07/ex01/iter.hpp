#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>

template <typename T>
void iter(T array[], int size, void (*f) (T t)) {
	for (int i = 0; i < size; ++i) {
		f(array[i]);
	}
}

#endif
