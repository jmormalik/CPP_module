#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
	srand(time(NULL));
	Base* origin = generate();
	identify(origin);
	identify(*origin);
	return 0;
}