#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector<std::string> vec;
	for (std::string word; std::cin >> word;)
	{
		if (word == "|")
		{
			break;
		}
		vec.push_back(word);
	}
	double sum = 0.0;
	for (const auto& i : vec)
	{
		sum += stod(i);
	}
}