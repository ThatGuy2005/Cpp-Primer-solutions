#include <iostream>
#include <list>
#include <algorithm>
#include <vector>

int main()
{
	//a)
	//can't copy elements into a empty container
	/*
	std::vector<int> vec(10); std::list<int> list; int i;
	while (std::cin >> i)
		list.push_back(i);
	std::copy(list.cbegin(), list.cend(), vec.begin());
	for (int i : vec)
	{
		std::cout << i << std::endl;
	}
	*/
	//b)
	std::vector<int> vec(10);//now vec has 10 elements if we give less elements than 10 we get an error because the fill_n function is not like push back ,
	//fill_n excepts to have as many element as we indicated
	vec.reserve(10);//the memory is reserved but the vector is empty ;
	std::fill_n(vec.begin(), 10, 0);
}
	