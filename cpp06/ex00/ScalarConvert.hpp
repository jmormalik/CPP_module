#pragma once

#include <iostream>
#include <limits>

class ScalarConvert
{
	private:
		ScalarConvert();
		~ScalarConvert();
		ScalarConvert(const ScalarConvert &obj);
		ScalarConvert operator=(const ScalarConvert &obj);
		static bool literalCheck(const std::string& literal);
		static void printChar(double value);
		static void printInt(double value);
		static void printFloat(double value);
		static void printDouble(double value);
	public:
		static void convert(const std::string& literal);
};
