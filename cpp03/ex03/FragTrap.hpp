#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private:
	public:
		FragTrap();
		~FragTrap();
		FragTrap(const std::string name_);
		FragTrap(const FragTrap& obj);
		FragTrap& operator=(const FragTrap& obj);
		void highFivesGuys(void);
};

#endif