#include <iostream>

int	main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "string Adress: " << &string << std::endl;
	std::cout << "stringPTR Adress: " << stringPTR << std::endl;
	std::cout << "stringREF Adress: " << &stringREF << std::endl;

	std::cout << "string Value: " << string << std::endl;
	std::cout << "stringPTR Value: " << *stringPTR << std::endl;
	std::cout << "stringREF Value: " << stringREF << std::endl;
	return (0);
}