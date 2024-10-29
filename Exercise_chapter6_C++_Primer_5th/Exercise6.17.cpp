
#include <iostream>
#include <string>
#include <vector>
using std::string;using std::cin;
bool is_capital_letter(const string& s)
{
	for (char c : s)
	{
		if (isupper(c))
		{
			return true;
		}
	}
	return false;
}
string to_lower(string& s)
{
	if (is_capital_letter)
	{
		for (char &c : s)
		{
			c = tolower(c);
		}
		return s;
	}
}
int main()
{
	string s;
	cin >> s;
	std::cout << to_lower(s) << std::endl;
}