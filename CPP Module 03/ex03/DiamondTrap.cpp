#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	cout << "DiamondTrap default constructor called" << endl;
	this->name = "default";
	ClapTrap::name = name + "_clap_name";
	this->hitPoints = FragTrap::getFragHitPoints();
	this->energyPoints = ScavTrap::getScavEnergyPoints();
	this->attackDamage = FragTrap::getFragAttackDamage();
}

DiamondTrap::~DiamondTrap() {
	cout << "DiamondTrap destructor called" << endl;
}

DiamondTrap::DiamondTrap(string name) : ClapTrap(name), FragTrap(name), ScavTrap(name) {
	cout << "DiamondTrap name parameter constructor called" << endl;
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	this->hitPoints = FragTrap::getFragHitPoints();
	this->energyPoints = ScavTrap::getScavEnergyPoints();
	this->attackDamage = FragTrap::getFragAttackDamage();
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap) {
	cout << "DiamondTrap copy constructor called" << endl;
	*this = diamondTrap;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondTrap) {
	if (this != &diamondTrap) {
		this->name = diamondTrap.name;
		this->hitPoints = diamondTrap.hitPoints;
		this->energyPoints = diamondTrap.energyPoints;
		this->attackDamage = diamondTrap.attackDamage;
	}
	return *this;
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	cout << "DiamondTrap name: " << this->name << endl;
	cout << "DiamondTrap hitPoints: " << this->hitPoints << endl;
	cout << "DiamondTrap energyPoints: " << this->energyPoints << endl;
	cout << "DiamondTrap attackDamage: " << this->attackDamage << endl;
	cout << "ClapTrap name: " << ClapTrap::name << endl;
}
