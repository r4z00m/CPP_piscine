#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default"), hitPoints(10), energyPoints(10), attackDamage(0) {
	cout << "Default constructor called" << endl;
}

ClapTrap::~ClapTrap() {
	cout << this->name << " deleted" << endl;
}

ClapTrap::ClapTrap(string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	cout << "Name parameter constructor called" << endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) {
	cout << "ClapTrap copy constructor called" << endl;
	*this = clapTrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap) {
	if (this != &clapTrap) {
		this->name = clapTrap.name;
		this->hitPoints = clapTrap.hitPoints;
		this->energyPoints = clapTrap.energyPoints;
		this->attackDamage = clapTrap.attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string &target) {
	if (this->hitPoints < 1) {
		cout << "I'm dead :(" << endl;
		return;
	}

	if (this->energyPoints > 0) {
		cout << "ClapTrap " << this->name << " attacks " << target <<
			 ", causing 1 points of damage!" << endl;
	} else {
		cout << "Not enough energy to attack! :(" << endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->hitPoints -= amount;
	cout << this->name << " taken of " << amount << " damage!" << endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->hitPoints < 1) {
		cout << "I'm dead :(" << endl;
		return;
	}

	if (this->energyPoints > 0) {
		this->hitPoints += amount;
		cout << this->name << " repaired " << amount << " hit points!" << endl;
	} else {
		cout << "Not enough energy to repair! :(" << endl;
	}
}