#include "Zombie.hpp"

int main() {
	Zombie zombie("One");
	zombie.announce();

	Zombie *dynamicZombie = newZombie("Two");
	dynamicZombie->announce();

	randomChump("Three");

	delete dynamicZombie;
}