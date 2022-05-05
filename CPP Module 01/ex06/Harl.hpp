#ifndef HARL_HPP
#define HARL_HPP
#include <string>
#include <iostream>

using std::string;

class Harl {

public:
	void complain(string level);

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif
