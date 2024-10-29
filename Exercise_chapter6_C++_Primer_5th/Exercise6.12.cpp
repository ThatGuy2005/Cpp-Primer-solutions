
#include <iostream>

void swap(int& int1, int& int2)
{
	int1 = int1 + int2;
	int2 = int1 - int2;
	int1 = int1 - int2;
}

int main()
{
	int a = 0, b = 0;
	std::cin >> a >> b;
	swap(a, b);
	std::cout << a << std::endl << b << std::endl;
	return 0;
}