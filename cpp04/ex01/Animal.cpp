#include "Animal.hpp"

Animal::Animal() { std::cout << "Animal Class Created!" << std::endl; }
Animal::~Animal() { std::cout << "Animal Class destroyed!" << std::endl; }
Animal::Animal(const std::string & name_) : type(name_) { std::cout << "Animal Class Created!" << std::endl; }
Animal::Animal(const Animal & obj) { this->type = obj.type; }
Animal & Animal::operator=(const Animal & obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return *this;
}
void Animal::makeSound() const { std::cout << "Animal Sound" << std::endl; }

std::string Animal::getType() const { return this->type; }

std::ostream & operator<<(std::ostream & cout, const Animal & objs)
{
	std::cout << objs.getType();
	return cout;
}
