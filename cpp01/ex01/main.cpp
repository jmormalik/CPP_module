#include "Zombie.hpp"

int	main(void)
{
	Zombie* Horde;
	Horde = ZombieHorde(10, "Zombie");
	for (int i = 0; i < 10; i++)
		Horde[i].announce();
	delete[] Horde;
	return (0);
}