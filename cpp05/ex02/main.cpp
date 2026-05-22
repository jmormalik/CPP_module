#include "Bureaucrat.hpp"
#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	std::cout << "--- Test Case1 ---" << std::endl;
	try
	{
		Bureaucrat hekim(1, "희준");
		ShrubberyCreationForm jaemyu("제민");
		RobotomyRequestForm inhlee("인호");
		PresidentialPardonForm akkim("아경");

		std::cout << "--- ShrubberyCreationForm ---" << std::endl;
		hekim.signForm(jaemyu);
		hekim.executeForm(jaemyu);
		std::cout << "--- RobotomyRequestForm ---" << std::endl;
		hekim.signForm(inhlee);
		hekim.executeForm(inhlee);
		std::cout << "--- PresidentialPardonForm ---" << std::endl;
		hekim.signForm(akkim);
		hekim.executeForm(akkim);
	}
	catch(const std::exception& e)
	{
		std::cerr << "error catch" << e.what() << std::endl;
	}
	
	return (0);
}