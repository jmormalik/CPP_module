#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const std::string& name_);
		Animal(const Animal& obj);
		Animal& operator=(const Animal& obj);
		virtual void makeSound() const;
		std::string getType() const;
};

std::ostream& operator<<(std::ostream &cout, const Animal& objs);

#endif
