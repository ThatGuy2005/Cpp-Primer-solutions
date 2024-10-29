#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<std::string> word;
	std::count_if(word.begin(), word.end(), [](std::string::size_type sz = 6, std::string w) {return (w.length() > sz); });
}