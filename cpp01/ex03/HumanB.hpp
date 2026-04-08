#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _Name;
		Weapon *_Weapon;
	public:
		HumanB(std::string name);
		~HumanB();
		void setWeapon(Weapon& w);
		void attack();
};

#endif