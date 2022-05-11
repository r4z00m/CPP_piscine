#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

using std::cout;
using std::endl;

class Brain {

public:
	Brain();
	~Brain();
	Brain(const Brain &brain);
	Brain &operator = (const Brain &brain);

private:
	std::string ideas[100];
};

#endif
