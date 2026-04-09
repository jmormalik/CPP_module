#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {}

DiamondTrap::~DiamondTrap() { std::cout << "ClapTrap " << this->_name << " is destroyed!" << std::endl; }

DiamondTrap::DiamondTrap(const std::string& name_) 
	: ClapTrap(name_ + "_clap_name"), 
	ScavTrap(name_), 
	FragTrap(name_)
{
	this->_name = name_;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << this->_name << " is born" << std::endl;
	std::cout << "DiamondTrap " << this->_name << " Status" << std::endl;
	std::cout << "Hit Point: " << this->_hitPoints;
	std::cout << ", Energy points: " << this->_energyPoints;
	std::cout << ", Attack damage: " << this->_attackDamage << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & obj) 
	: ClapTrap(obj),
	ScavTrap(obj),
	FragTrap(obj)
{ *this = obj; }

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & obj)
{
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_attackDamage = obj._attackDamage;
		this->_energyPoints = obj._energyPoints;
		this->_hitPoints = obj._hitPoints;	
	}
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap My name: " << this->_name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}
