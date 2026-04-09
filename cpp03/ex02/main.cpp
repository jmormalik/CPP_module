#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap a("hekim");
    ScavTrap b("inhlee");
    FragTrap c("duhkim");

    std::cout << "\n--- Basic Attack & Damage Test ---" << std::endl;
    a.attack("inhlee");
    b.takeDamage(0);
    b.attack("hekim");
    a.takeDamage(20);

    std::cout << "\n--- ClapTrap Exhaustion Test ---" << std::endl;
    a.beRepaired(5);
    a.attack("target");
    a.takeDamage(100);
    a.beRepaired(10);
    a.attack("target");

    std::cout << "\n--- ScavTrap Special Ability Test ---" << std::endl;
    b.guardGate();
    for (int i = 0; i < 50; i++)
        b.attack("dummy");
    b.attack("dummy");
    b.guardGate();

    std::cout << "\n--- FragTrap Special Ability Test ---" << std::endl;
    c.highFivesGuys();
    c.attack("hekim");
    c.takeDamage(50);
    c.beRepaired(20);
    c.highFivesGuys();

    std::cout << "\n--- Copy & Assignment Test ---" << std::endl;
    FragTrap d("copy_target");
    FragTrap e(d);
    FragTrap f("assign_target");
    f = c;
    f.highFivesGuys();

    std::cout << "\n--- Destruction Chaining Start ---" << std::endl;
    return (0);
}