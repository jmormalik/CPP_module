#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "iostream"
class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(const std::string& name_);
		WrongAnimal(const WrongAnimal& obj);
		WrongAnimal& operator=(const WrongAnimal& obj);
		void makeSound() const;
		std::string getType() const;
};

std::ostream& operator<<(std::ostream &cout, const WrongAnimal& objs);

#endif