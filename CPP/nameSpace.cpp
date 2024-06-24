#include <iostream>

namespace One
{
	int val;
}

namespace Two
{
	char val;
}

namespace Three
{
	float val;
}

void functionOne()
{
	using namespace One;
	std::cout << "Enter the val: ";
	std::cin  >> val;
	std::cout << "functionOne()"
		  << "Value of val: "
		  << val << std::endl;
}

void functionTwo()
{
	using namespace Two;
	std::cout << "Enter the val: ";
	std::cin >> val;
	std::cout << "functionTwo()"
		  << "Value of val: "
		  << val << std::endl;
}

void functionThree()
{
	using namespace Three;
	std::cout << "Enter the val: ";
	std::cin >> val;
	std::cout << "functionThree()"
		  << "Value of val: "
		  << val << std::endl;
}

int main()
{
	functionOne();
	functionTwo();
	functionThree();
	return 0;
}
