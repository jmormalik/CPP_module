#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Dog a;
	a.getBrain()->setBrain(0, "Eat");
	Dog b(a);
	a.getBrain()->setBrain(0, "perro");
	std::cout << "a: " << a.getBrain()->getBrain(0) << std::endl;
	std::cout << "b: " << b.getBrain()->getBrain(0) << std::endl;
	Cat c;
	c.getBrain()->setBrain(0, "Eat");
	Cat d = c;
	c.getBrain()->setBrain(0, "Gato");
	std::cout << "c: " << c.getBrain()->getBrain(0) << std::endl;
	std::cout << "d: " << d.getBrain()->getBrain(0) << std::endl;
	const Animal* animals[10];
	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();
	for (int i = 5; i < 10; i++)
		animals[i] = new Cat();
	for (int i = 0; i < 10; i++)
		animals[i]->makeSound();
	for (int i = 0; i < 10; i++)
		delete animals[i];
	
	delete j;
	delete i;

	return 0;
}