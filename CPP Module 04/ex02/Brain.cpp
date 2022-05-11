#include "Brain.hpp"

Brain::Brain() {
	cout << "Brain default constructor" << endl;
}

Brain::~Brain() {
	cout << "Brain destructor" << endl;
}

Brain::Brain(const Brain &brain) {
	cout << "Brain copy constructor" << endl;
	*this = brain;
}

Brain &Brain::operator=(const Brain &brain) {
	if (this != &brain) {
		for (int i = 0; i < 100; ++i) {
			this->ideas[i] = brain.ideas[i];
		}
	}
	return *this;
}
