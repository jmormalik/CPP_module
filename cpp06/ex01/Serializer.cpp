#include "Serializer.hpp"

Serializer::Serializer() {}
Serializer::~Serializer() {}
Serializer::Serializer(const Serializer & obj) { (void)obj; }
Serializer Serializer::operator=(const Serializer & obj)
{
	(void)obj;
	 return Serializer();
}

uintptr_t Serializer::Serialize(Data * ptr) { return reinterpret_cast<uintptr_t>(ptr); }

Data * Serializer::desreialize(uintptr_t raw) { return reinterpret_cast<Data*>(raw); }
