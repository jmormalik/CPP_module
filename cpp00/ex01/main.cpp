#include "PhoneBook.hpp"

int	main()
{
	std::string str;
	
	PhoneBook pb;
	while (1)
	{
		std::cout << "Enter Command: ";
		if (!std::getline(std::cin, str))
			break ;
		if (str == "ADD")
		{
			if (!pb.Add())
				break ;
		}
		else if (str == "SEARCH")
		{
			if (!pb.Search())
				break ;
		}
		else if (str == "EXIT")
			break ;
		else
			continue;
	}
	return 0;
}