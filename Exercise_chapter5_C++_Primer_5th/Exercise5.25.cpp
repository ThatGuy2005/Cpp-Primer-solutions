
#include <iostream>
#include <stdexcept>
int main()
{
	int number1, number2;
	while (std::cin >> number1 >> number2)
	{
		try
		{
			if (number2 == 0)
			{
				throw std::runtime_error("The division with 0 is unindefied");
			}
		}
		catch (std::runtime_error err)
		{
			std::cout << err.what()
				<<  ", try again y or n" << std::endl;
			char c;
			std::cin >> c;
			if (!std::cin || c == 'n')
			{
				break;
			}
		}
	}
}