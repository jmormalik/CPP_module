#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		FragTrap();
	public:
		~FragTrap();
		FragTrap(const std::string name_);
		FragTrap(const FragTrap& obj);
		FragTrap& operator=(const FragTrap& obj);
		void highFivesGuys(void);
};

#endif