#include "Dog.hpp"

Dog::Dog() { std::cout << "Dog Class Created!" << std::endl; }
Dog::~Dog() { std::cout << "Dog Class destroyed!" << std::endl; }
Dog::Dog(const std::string & name_) : Animal(name_) { std::cout << "Dog Class Created!" << std::endl; }
Dog::Dog(const Dog & obj) :Animal(obj) { *this = obj; }
Dog & Dog::operator=(const Dog & obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return *this;
}
void Dog::makeSound() const { std::cout << "Bow Wow" << std::endl; }