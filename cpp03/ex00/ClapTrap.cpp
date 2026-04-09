#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {}

ClapTrap::~ClapTrap() { std::cout << "ClapTrap " << this->_name << " is destroyed!" << std::endl; }

ClapTrap& ClapTrap::operator=(const ClapTrap & obj)
{
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_attackDamage = obj._attackDamage;
		this->_hitPoints = obj._hitPoints;
		this->_energyPoints = obj._energyPoints;	
	}
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap & obj)
{
	this->_name = obj._name;
	this->_attackDamage = obj._attackDamage;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
}

ClapTrap::ClapTrap(const std::string& name_) :_hitPoints(10), _energyPoints(10), _attackDamage(0) 
{
	this->_name = name_;
	std::cout << "ClapTrap " << this->_name << " is born" << std::endl;
	std::cout << "ClapTrap " << this->_name << " Status" << std::endl;
	std::cout << "Hit Point: " << this->_hitPoints;
	std::cout << ", Energy points: " << this->_energyPoints;
	std::cout << ", Attack damage: " << this->_attackDamage << std::endl;
}

void ClapTrap::attack(const std::string & target)
{
	if (this->_energyPoints != 0 && this->_hitPoints)
	{
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " attacks " 
				<< target << ", causing " << this->_attackDamage 
				<< " points of damage!" << std::endl;
	}
	else if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name << " Cannot Attack! Energy Points: 0" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " Cannot Attack! Hit Points: 0" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead.." << std::endl;
		return ;
	}
	if (amount >= this->_hitPoints)
	{
		this->_hitPoints = 0;
		std::cout << "ClapTrap " << this->_name << " is dead.." << std::endl;
		return ;
	}
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " Take Damage!" << std::endl;
	std::cout << "Hit Points: " << this->_hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints != 0 && this->_hitPoints)
	{
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " " << "has been Repaired!" << std::endl;
		std::cout << "Hit Points: " << this->_hitPoints << std::endl;
		std::cout << "Energy points: " << this->_energyPoints << std::endl;
	}
	else if (this->_energyPoints == 0)
	std::cout << "ClapTrap " << this->_name << " Cannot Repaired! Energy Points: 0" << std::endl;
	else
	std::cout << "ClapTrap " << this->_name << " Cannot Repaired! Hit Points: 0" << std::endl;
}

