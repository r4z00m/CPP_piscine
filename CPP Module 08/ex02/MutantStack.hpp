#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>

template<class T>
class MutantStack : public std::stack<T> {

public:
	MutantStack() {}

	~MutantStack() {}

	MutantStack(const MutantStack<T> &mutantStack) {
		*this = mutantStack;
	}

	MutantStack &operator = (const MutantStack<T> &mutantStack) {
		if (this != &mutantStack) {
			*this = mutantStack;
		}
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() {
		return this->c.begin();
	};

	iterator end() {
		return this->c.end();
	};
};

#endif
