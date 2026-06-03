#include "ScalarConvert.hpp"
#include <iomanip>
#include <stdlib.h>
#include <cmath>

ScalarConvert::ScalarConvert() {}

ScalarConvert::~ScalarConvert() {}

ScalarConvert::ScalarConvert(const ScalarConvert & obj) { (void)obj; }

ScalarConvert ScalarConvert::operator=(const ScalarConvert & obj)
{
	(void)obj;
	return ScalarConvert();
}

bool ScalarConvert::literalCheck(const std::string & literal)
{
	if (literal == "nan" || literal == "nanf" ||
		literal == "-inff" || literal == "+inff" ||
		literal == "-inf" || literal == "+inf" ||
		literal == "inf" || literal == "inff")
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			if (literal.find("nan") != std::string::npos)
			{
				std::cout << "float: nanf" << std::endl;
				std::cout << "double: nan" << std::endl;
			}
			else if (literal.find("-inf") != std::string::npos)
			{
				std::cout << "float: -inff" << std::endl;
				std::cout << "double: -inf" << std::endl;
			}
			else
			{
				std::cout << "float: inff" << std::endl;
				std::cout << "double: inf" << std::endl;
			}
			return true;
		}
		return false;
}

void ScalarConvert::printChar(double value)
{
	std::cout << "char: ";
	if (std::isnan(value) || value < std::numeric_limits<char>::min() 
		|| value > std::numeric_limits<char>::max() || value != static_cast<long long>(value))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	char c = static_cast<char>(value);
	if (std::isprint(c))
		std::cout << "'" << c << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void ScalarConvert::printInt(double value)
{
	std::cout << "int: ";
	if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	int i = static_cast<int>(value);
		std::cout << i << std::endl;
}

void ScalarConvert::printFloat(double value)
{
	std::cout << "float: ";
	float f = static_cast<float>(value);
	std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout.unsetf(std::ios::fixed);
}

void ScalarConvert::printDouble(double value)
{
	std::cout << "double: ";
	std::cout << std::fixed << std::setprecision(1) << value << std::endl;
	std::cout.unsetf(std::ios::fixed);
}

void ScalarConvert::convert(const std::string & literal)
{
	double value;
	if (literalCheck(literal))
		return ;
	if (literal.length() == 1 && !std::isdigit(literal[0]))\
		value = static_cast<double>(literal[0]);
	else
	{
		char* endptr;
		value = std::strtod(literal.c_str(), &endptr);
		if (*endptr != '\0' && !(*endptr == 'f' && *(endptr + 1) == '\0'))
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
			return ;
		}
	}
	printChar(value);
	printInt(value);
	printFloat(value);
	printDouble(value);
}
