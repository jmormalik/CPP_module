#include "ScalarConvert.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./couvert <literal>" << std::endl;
		return (1);
	}
	ScalarConvert::convert(av[1]);
	return (0);
}