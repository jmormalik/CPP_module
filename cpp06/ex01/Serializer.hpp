#pragma once

#include <iostream>
#include "Data.hpp"

class Serializer
{
	private:
		Serializer();
		~Serializer();
		Serializer(const Serializer& obj);
		Serializer operator=(const Serializer& obj);
	public:
		static uintptr_t Serialize(Data* ptr);
};