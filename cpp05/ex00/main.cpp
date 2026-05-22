#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	std::cout << "--- Test Case1 ---" << std::endl;
	try
	{
		Bureaucrat test(200, "test1");
		std::cout << test;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "--- Test Case2 ---" << std::endl;
	try
	{
		Bureaucrat test(-1, "test2");
		std::cout << test;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "--- Test Case3 ---" << std::endl;
try
	{
		Bureaucrat test(1, "test3");
		std::cout << test;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "--- Test Case4 ---" << std::endl;
try
	{
		Bureaucrat test(150, "test4");
		std::cout << test;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}