#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
#include <string>

bool count(std::string word,std::string::size_type sz)
{
	if (word.size() <= sz)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	std::vector<std::string> words;
	std::string word;
	while (std::cin >> word)
	{
		if (word == "|")
		{
			break;
		}
		words.push_back(word);
	}
	auto k = std::count_if(words.begin(), words.end(),bind(count,std::placeholders::_1, 6 ));
	std::cout << k << std::endl;
}