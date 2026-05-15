#include "Cat.hpp"

Cat::Cat() { std::cout << "Cat Class Created!" << std::endl; }
Cat::~Cat() { std::cout << "Cat Class destroyed!" << std::endl; }
Cat::Cat(const std::string & name_) : Animal(name_) { std::cout << "Cat Class Created!" << std::endl; }
Cat::Cat(const Cat & obj) :Animal(obj) { *this = obj; }
Cat & Cat::operator=(const Cat & obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return *this;
}
void Cat::makeSound() const { std::cout << "meow meow" << std::endl; }