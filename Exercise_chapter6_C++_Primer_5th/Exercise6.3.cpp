
#include <iostream>

int fact(int number)
{
	int sum = 1 ;
	while (number != 0)
	{
		sum *= number--;
	}
	return sum;
}
int main()
{
	int num;
	std::cin >> num;
	std::cout << fact(num) << std::endl;
}
