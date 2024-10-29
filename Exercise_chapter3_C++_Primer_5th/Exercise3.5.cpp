
#include <iostream>
#include <string>
using std::cin; using std::cout; using std::string; using std::endl;
int main()
{
	string s1, s2;
	string::size_type a = 10;
	string::size_type b = 0;
	while (b <= a)
	{
		cin >> s1;
		s2 += s1;
		b = s2.size();
	}
	cout << s2 << endl;

}