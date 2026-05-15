#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() { std::cout << "WrongAnimal Class Created!" << std::endl; }
WrongAnimal::~WrongAnimal() { std::cout << "WrongAnimal Class destroyed!" << std::endl; }
WrongAnimal::WrongAnimal(const std::string & name_) : type(name_) { std::cout << "WrongAnimal Class Created!" << std::endl; }
WrongAnimal::WrongAnimal(const WrongAnimal & obj) { this->type = obj.type; }
WrongAnimal & WrongAnimal::operator=(const WrongAnimal & obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return *this;
}
void WrongAnimal::makeSound() const { std::cout << "WrongAnimal Sound" << std::endl; }

std::string WrongAnimal::getType() const { return this->type; }

std::ostream & operator<<(std::ostream & cout, const WrongAnimal & objs)
{
	std::cout << objs.getType();
	return cout;
}
