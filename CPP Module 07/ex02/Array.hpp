#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <class T>
class Array {
public:
	Array();
	~Array();
	Array(unsigned int n);
	Array(const Array<T> &array);

	Array &operator = (const Array<T> &new_array);
	T &operator [] (int index);

	int size() const;

private:
	int _size;
	T *array;
};

template<typename T>
Array<T>::Array() : array(0), _size(0) {}

template<typename T>
Array<T>::~Array<T>() {
	delete [] array;
}

template<typename T>
Array<T>::Array(unsigned int n) {
	array = new T[n];
	_size = n;
	for (int i = 0; i < n; ++i) {
		array[i] = 0;
	}
}

template<typename T>
Array<T>::Array(const Array<T> &new_array) : _size(new_array._size) {
	array = new T[new_array.size()];
	for (int i = 0; i < new_array.size(); ++i) {
		array[i] = new_array.array[i];
	}
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &new_array) {
	if (this != &new_array) {
		_size = new_array.size();
		delete [] array;
		array = new T[new_array.size()];
		for (int i = 0; i < new_array.size(); ++i) {
			array[i] = new_array.array[i];
		}
	}
	return *this;
}

template<typename T>
T &Array<T>::operator[](int index) {
	if (index >= 0 && index < _size) {
		return array[index];
	} else {
		throw std::runtime_error("IndexOutOfBoundException");
	}
}

template<typename T>
int Array<T>::size() const {
	return _size;
}

#endif
