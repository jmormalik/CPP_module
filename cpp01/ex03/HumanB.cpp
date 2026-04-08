#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	:_Name(name), _Weapon(NULL){
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon& w)
{
	this->_Weapon = &w;
}

void HumanB::attack()
{
	if (this->_Weapon)
		std::cout << this->_Name << " attacks with their " << this->_Weapon->getType() << std::endl;
	else
		std::cout << this->_Name << " Has No Weapon!" << std::endl;
}