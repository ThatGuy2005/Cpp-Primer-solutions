
#include <iostream>
int sum(std::initializer_list<int> the_list)
{
	int sum = 0;
	for (int i : the_list)
	{
		sum += i;
	}
	return sum;
}
int main()
{
	std::initializer_list<int> list = { 1,2,3,4,56,7,8,9,10 };
	std::cout << sum(list) << std::endl;
}