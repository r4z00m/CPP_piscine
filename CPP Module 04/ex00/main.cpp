#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void) {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << std::endl;

	const WrongAnimal* meta1 = new WrongAnimal();
	const WrongAnimal* i1 = new WrongCat();
	const WrongCat* wrongCat = new WrongCat();

	std::cout << i1->getType() << " " << std::endl;
	i1->makeSound(); //will output the wrong sound!
	meta1->makeSound();
	wrongCat->makeSound();

	delete meta1;
	delete i1;
	delete wrongCat;

	return 0;
}