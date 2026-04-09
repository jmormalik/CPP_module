#include "FragTrap.hpp"

FragTrap::FragTrap() {}

FragTrap::~FragTrap() { std::cout << "FragTrap " << this->_name << " Good Night!" << std::endl; }

FragTrap::FragTrap(const std::string name_) :ClapTrap(name_)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	this->_name = name_;
	std::cout << "FragTrap " << this->_name << " Good Morning!" << std::endl;
	std::cout << "FragTrap " << this->_name << " Status" << std::endl;
	std::cout << "Hit Point: " << this->_hitPoints;
	std::cout << ", Energy points: " << this->_energyPoints;
	std::cout << ", Attack damage: " << this->_attackDamage << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj) :ClapTrap(obj) {}

FragTrap& FragTrap::operator=(const FragTrap& obj)
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

void FragTrap::highFivesGuys(void)
{
	if (this->_hitPoints == 0)
		{
			std::cout << this->_name << " cannot HighFive! Hit Points: " << this->_hitPoints << std::endl;
			return ;
		}
		else if (this->_energyPoints == 0)
		{
			std::cout << this->_name << " cannot HighFive! Energy Points: " << this->_energyPoints << std::endl;
			return ;
		}
		else
			std::cout << this->_name << " HighFive everyone!" << std::endl;
}
