#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    std::cout << "--- DiamondTrap Creation ---" << std::endl;
    DiamondTrap dt("hekim");

    std::cout << "\n--- Identity Check ---" << std::endl;
    dt.whoAmI();

    std::cout << "\n--- Status & Function Test ---" << std::endl;
    dt.attack("target_dummy");
    dt.guardGate();
    dt.highFivesGuys();

    std::cout << "\n--- Damage & Repair Test ---" << std::endl;
    dt.takeDamage(50);
    dt.beRepaired(20);

    std::cout << "\n--- Copy & Assignment Test ---" << std::endl;
    DiamondTrap dt2(dt);
    DiamondTrap dt3("original");
    dt3 = dt;
    dt3.whoAmI();

    std::cout << "\n--- Destruction ---" << std::endl;
    return (0);
}