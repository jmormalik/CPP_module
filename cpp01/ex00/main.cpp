#include "Zombie.hpp"

int	main(void)
{
	Zombie* z = newZombie("Foo");
	z->announce();
	randomChump("Boo");
	delete z;
	return (0);
}