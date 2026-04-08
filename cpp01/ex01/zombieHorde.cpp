#include "Zombie.hpp"

Zombie* ZombieHorde(int N, std::string name)
{
	Zombie *Horde = new Zombie[N];
	std::stringstream Number;

	for (int i = 0; i < N; i++)
	{
		Number.str(std::string());
		Number << i;
		Horde[i].setName(name + Number.str());
	}
	return (Horde);
}