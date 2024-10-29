
#include <iostream>

int main()
{
	//No problem detected
	do
	{
		int v1, v2;
		std::cout << "Please enter two numbers to sum : " << std::endl;
		if (std::cin >> v1 >> v2)
			std::cout << "Sum is: " << v1 + v2 << std::endl;
	} while (std::cin);
	// b is declearing a variable in the condition *fix:use get_response() only
	// c is using an undecleared variable as the condition
}

