
#include<iostream>
#include"Sequance.h"
int main()
{
	int n = 0;
	std::cin >> n;
	while (n != 0)
	{
		std::cout << sequance() << std::endl;
		--n;
	}
}