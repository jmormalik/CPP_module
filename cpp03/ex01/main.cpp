#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap a("hekim");
	ScavTrap b("inhlee");
	a.attack("inhlee");
	b.attack("hekim");
	a.takeDamage(1);
	b.takeDamage(1);
	a.beRepaired(1);
	b.beRepaired(1);
	a.takeDamage(10);
	b.takeDamage(10);
	a.takeDamage(1);
	b.takeDamage(1);
	a.beRepaired(5);
	b.beRepaired(5);
	b.guardGate();
	return (0);
}