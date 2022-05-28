#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	cout << "ScavTrap default constructor called" << endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap() {
	cout << "ScavTrap destructor called" << endl;
}

ScavTrap::ScavTrap(string name) : ClapTrap(name) {
	cout << "ScavTrap name parameter constructor called" << endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) {
	cout << "ScavTrap copy constructor called" << endl;
	*this = scavTrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap) {
	if (this != &scavTrap) {
		this->name = scavTrap.name;
		this->hitPoints = scavTrap.hitPoints;
		this->energyPoints = scavTrap.energyPoints;
		this->attackDamage = scavTrap.attackDamage;
	}
	return *this;
}

void ScavTrap::attack(const std::string &target) {
	if (this->hitPoints < 1) {
		cout << "I'm dead :(" << endl;
		return;
	}

	if (this->energyPoints > 0) {
		cout << "ScavTrap " << this->name << " attacks " << target <<
			 ", causing 1 points of damage!" << endl;
	} else {
		cout << "Not enough energy to attack! :(" << endl;
	}
}

void ScavTrap::guardGate() {
	cout << "ScavTrap is now in Gate keeper mode." << endl;
}