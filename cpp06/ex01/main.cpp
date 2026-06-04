#include "Serializer.hpp"

int main()
{
	Data d;
	d.id = 42;
	d.name = "test";
	d.value = 3.14;
	Data* original = &d;
	uintptr_t serialized =  Serializer::Serialize(original);
	Data* desrialized = Serializer::desreialize(serialized);
	std::cout << "원본 주소: " << original << std::endl;
	std::cout << "복원된 주소: " << desrialized << std::endl;
	if (original == desrialized)
		std::cout << "주소 일치" << std::endl;
	return 0;
}