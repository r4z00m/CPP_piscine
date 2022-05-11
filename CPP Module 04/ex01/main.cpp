#include "Dog.hpp"
#include "Cat.hpp"

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
	delete j; //should not create a leak
	delete i;

	Dog dog;
	Dog dog1 = dog;
	Dog dog2(dog);
	cout << dog.getType() << endl;
	cout << dog1.getType() << endl;
	cout << dog2.getType() << endl;

	Cat cat;
	Cat cat1 = cat;
	Cat cat2(cat);
	cout << cat.getType() << endl;
	cout << cat1.getType() << endl;
	cout << cat2.getType() << endl;

	Brain brain = cat.getBrain();
	Brain brain1 = cat1.getBrain();

	Brain brain2 = dog.getBrain();
	Brain brain3 = dog1.getBrain();

	Brain brain4(dog1.getBrain());
	Brain brain5(dog2.getBrain());

	cout << "brain address: " << &brain << endl;
	cout << "brain1 address: " << &brain1 << endl;
	cout << "brain2 address: " << &brain2 << endl;
	cout << "brain3 address: " << &brain3 << endl;
	cout << "brain4 address: " << &brain4 << endl;
	cout << "brain5 address: " << &brain5 << endl;

	Animal *animals[100];
	for (int k = 0; k < 100; ++k) {
		if (k < 50) {
			animals[k] = new Dog();
		} else {
			animals[k] = new Cat();
		}
		animals[k]->makeSound();
		cout << k << endl;
	}

	for (int k = 0; k < 100; ++k) {
		delete animals[k];
		cout << k << endl;
	}

	return 0;
}