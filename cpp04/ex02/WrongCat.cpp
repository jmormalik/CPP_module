#include "WrongCat.hpp"

WrongCat::WrongCat() { std::cout << "WrongCat Class Created!" << std::endl; }
WrongCat::~WrongCat() { std::cout << "WrongCat Class destroyed!" << std::endl; }
WrongCat::WrongCat(const std::string & name_) : WrongAnimal(name_) { std::cout << "WrongCat Class Created!" << std::endl; }
WrongCat::WrongCat(const WrongCat & obj) :WrongAnimal(obj) { *this = obj; }
WrongCat & WrongCat::operator=(const WrongCat & obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return *this;
}
void WrongCat::makeSound() const { std::cout << "Wrong meow" << std::endl; }