#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{	
	private:
		Brain* _Brain;
	public:
		Dog();
		~Dog();
		Dog(const std::string& name_);
		Dog(const Dog& obj);
		Dog& operator=(const Dog& obj);
		void makeSound() const ;
		Brain* getBrain() const;
};

#endif