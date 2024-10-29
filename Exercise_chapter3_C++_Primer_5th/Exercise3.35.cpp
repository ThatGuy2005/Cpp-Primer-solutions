
#include <iostream>

int main()
{
	int arr[5] ;
	int* p = arr;
	for (int i = 0; i <= 4; i++)
	{
		std::cin >> arr[i];
	}
	for (int i = 0; i <= 4; i++)
	{
		*p = 0;
		p++;
		std::cout << *arr << std::endl;
	}
}