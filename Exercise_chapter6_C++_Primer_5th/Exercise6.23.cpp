
#include <iostream>
void print_1(const int& i)
{
	std::cout << i << std::endl;
}
void print_2(const int(&j)[2])
{
	for (size_t i = 0; i <= 1; i++)
	{
		std::cout << j[i] << std::endl;
	}
}
int main()
{
	int i = 0, j[2] = { 1,2 };
	print_1(i);
	print_2(j);
}