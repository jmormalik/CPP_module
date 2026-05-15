#include "Brain.hpp"

Brain::Brain() 
{ 
	std::cout << "Brain Class Created!" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Default";
}
Brain::~Brain() { std::cout << "Brain Class destroyed!" << std::endl; }

Brain::Brain(const Brain & obj)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = obj.ideas[i];
	}
}

Brain & Brain::operator=(const Brain & obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = obj.ideas[i];
		}
	}
	return (*this);
}

void Brain::setBrain(int index, std::string idea)
{
	if (index >= 0 && index < 100)
		ideas[index] = idea;
}

std::string Brain::getBrain(int index) const
{
	if (index >= 0 && index < 100)
		return ideas[index];
	return "";
}
