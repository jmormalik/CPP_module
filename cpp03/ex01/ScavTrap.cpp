#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {}

ScavTrap::~ScavTrap() { std::cout << "ScavTrap " << this->_name << " is destroyed!" << std::endl; }

ScavTrap::ScavTrap(const std::string& name_) : ClapTrap(name_)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	this->_name = name_;
	std::cout << "ScavTrap " << this->_name << " is born" << std::endl;
	std::cout << "ScavTrap " << this->_name << " Status" << std::endl;
	std::cout << "Hit Point: " << this->_hitPoints;
	std::cout << ", Energy points: " << this->_energyPoints;
	std::cout << ", Attack damage: " << this->_attackDamage << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj) {}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
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

void ScavTrap::guardGate()
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ScavTrap " << this->_name << " Cannot active Gate Keeper mode! Hit Points: " << this->_hitPoints << std::endl;
		return ;
	}
	else if (this->_energyPoints == 0)
	{
		std::cout << "ScavTrap " << this->_name << " Cannot active Gate Keeper mode! Energy Points: " << this->_energyPoints << std::endl;
		return ;
	}
	else
		std::cout << "ScavTrap " << this->_name << " Active Gate Keeper mode!" << std::endl;
}
