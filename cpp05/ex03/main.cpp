#include "Bureaucrat.hpp"
#include <iostream>
#include "AForm.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	std::srand(std::time(NULL));
	Intern randomIntern;
	Bureaucrat hekim(1, "희준");
	AForm* rrf = NULL;
	std::cout << "--- Test Case1 ---" << std::endl;
	rrf = randomIntern.makeForm("robotomy request", "Bendet");
	if (rrf != NULL)
	{
		hekim.signForm(*rrf);
		hekim.executeForm(*rrf);
		delete rrf;
		rrf = NULL;
	}
	std::cout << "--- Test Case2 ---" << std::endl;
	rrf = randomIntern.makeForm("shrubbery creation", "Gyeongsan");
	if (rrf != NULL)
	{
		hekim.signForm(*rrf);
		hekim.executeForm(*rrf);
		delete rrf;
		rrf = NULL;
	}
	std::cout << "--- Test Case3 ---" << std::endl;
	rrf = randomIntern.makeForm("presidential pardon", "trump");
	if (rrf != NULL)
	{
		hekim.signForm(*rrf);
		hekim.executeForm(*rrf);
		delete rrf;
		rrf = NULL;
	}
	std::cout << "--- Test Case4 ---" << std::endl;
	rrf = randomIntern.makeForm("coffee request", "hekim");
	if (rrf != NULL)
	{
		delete rrf;
	}
	else
	{
		std::cout << "rrf is NULL" << std::endl;
	}
	return (0);
}