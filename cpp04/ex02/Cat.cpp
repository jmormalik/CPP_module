#include "Cat.hpp"

Cat::Cat() 
{
	std::cout << "Cat Class Created!" << std::endl;
	_Brain = new Brain();
}
Cat::~Cat()
{
	std::cout << "Cat Class destroyed!" << std::endl;
	delete _Brain;
}
Cat::Cat(const std::string & name_) : Animal(name_) { std::cout << "Cat Class Created!" << std::endl; }
Cat::Cat(const Cat & obj) :Animal(obj)
{
	if (obj._Brain)
		this->_Brain = new Brain(*obj._Brain);
	else
		this->_Brain = NULL;
}
Cat & Cat::operator=(const Cat & obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
		if (this->_Brain)
			delete this->_Brain;
		if (obj._Brain)
			this->_Brain = new Brain(*obj._Brain);
		else
			this->_Brain = NULL;
	}
	return *this;
}
void Cat::makeSound() const { std::cout << "meow meow" << std::endl; }

Brain * Cat::getBrain() const { return this->_Brain; }
