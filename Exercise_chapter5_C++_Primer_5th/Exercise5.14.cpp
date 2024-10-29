#include <iostream>
#include <string>

int main()
{
	std::string currentword;
	unsigned count = 1;
	std::cin >> currentword;
	std::string word = currentword;
	while (std::cin >> currentword)
	{
		if (currentword == "|")
		{
			break;
		}
		if (currentword == word)
		{
			count++;
		}
		else
		{
			std::cout << word << " occured : " << count <<  " times." << std::endl;
			count = 0;
			word = currentword;
		}
	}
}