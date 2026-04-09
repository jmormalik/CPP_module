#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a("hekim");
	a.attack("Monster");
	a.takeDamage(1);
	a.beRepaired(1);
	a.takeDamage(10);
	a.takeDamage(1);
	a.beRepaired(5);
	return (0);
}