#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Class Created!" << std::endl;
	_Brain = new Brain();
}
Dog::~Dog() 
{
	std::cout << "Dog Class destroyed!" << std::endl;
	delete _Brain;
}
Dog::Dog(const std::string & name_) : Animal(name_){ std::cout << "Dog Class Created!" << std::endl; }
Dog::Dog(const Dog & obj) :Animal(obj) 
{
	if (obj._Brain)
		this->_Brain = new Brain(*obj._Brain);
	else
		this->_Brain = NULL;
}
Dog & Dog::operator=(const Dog & obj)
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
void Dog::makeSound() const { std::cout << "Bow Wow" << std::endl; }
Brain * Dog::getBrain() const { return this->_Brain; }
