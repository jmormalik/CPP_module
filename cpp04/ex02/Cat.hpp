#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:
		Brain* _Brain;
	public:
		Cat();
		~Cat();
		Cat(const std::string& name_);
		Cat(const Cat& obj);
		Cat& operator=(const Cat& obj);
		void makeSound() const;
		Brain* getBrain() const;
};

#endif