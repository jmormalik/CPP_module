#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon)
	:_Weapon(Weapon), _Name(name){
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << this->_Name << " attacks with their " << this->_Weapon.getType() << std::endl;
}