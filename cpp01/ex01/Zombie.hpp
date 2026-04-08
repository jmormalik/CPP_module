#ifndef ZOMBIE_HPP
#define ZOBIE_HPP

#include <string>
#include <iostream>
#include <sstream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		void setName(std::string name);
		void announce(void);
};

Zombie* ZombieHorde(int N, std::string name);

#endif