#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	try
	{

		Bureaucrat test(200, "test");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	
}