#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern & obj) { (void)obj; }

Intern & Intern::operator=(const Intern & obj) 
{
	if (this != &obj)
	{
		(void)obj;
	}
	return *this;
}

AForm * Intern::_makeShrubbery(const std::string & target) { return new ShrubberyCreationForm(target); }
AForm * Intern::_makeRobotomy(const std::string & target) { return new RobotomyRequestForm(target); }
AForm * Intern::_makePresidential(const std::string & target) { return new PresidentialPardonForm(target); }

AForm * Intern::makeForm(const std::string & formName, const std::string & target)
{
	std::string formNames[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	AForm* (Intern::*formFunctions[3])(const std::string&) = {
		&Intern::_makeShrubbery,
		&Intern::_makeRobotomy,
		&Intern::_makePresidential
	};
	for (int i = 0; i < 3; i++)
	{
		if (formNames[i] == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (this->*formFunctions[i])(target);
		}
	}
	std::cout << "Error: Intern cannot create '" << formName << "' because it doesn't exist." << std::endl;
	return NULL;
}
