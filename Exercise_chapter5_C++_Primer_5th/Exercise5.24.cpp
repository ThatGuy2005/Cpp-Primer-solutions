
#include <iostream>
#include <stdexcept>
int main()
{
	int number1, number2;
	std::cin >> number1 >> number2;
	if (number2 == 0)
	{
		throw std::runtime_error("The division with 0 is unindefied");
	}
}