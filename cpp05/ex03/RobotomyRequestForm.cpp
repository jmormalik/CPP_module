#include "RobotomyRequestForm.hpp"
#include <fstream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm()
	: _target("default") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string & target)
	:AForm("RobotomyRequestForm", 72, 45),
	_target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & obj)
	:AForm(obj),
	_target(obj._target) {}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & obj)
{
	if (this != &obj)
	{
		AForm::operator=(obj);
		this->_target = obj._target;
	}
	return (*this);
}

void RobotomyRequestForm::executeAction() const
{
	std::cout << "* DRILLING NOISES: WHIIIRRRR! *" << std::endl;
    if (std::rand() % 2 == 0)
	{
        std::cout << this->_target << " has been robotomized successfully!" << std::endl;
    }
	else
	{
        std::cout << "Robotomy failed for " << this->_target << "." << std::endl;
    }
}
