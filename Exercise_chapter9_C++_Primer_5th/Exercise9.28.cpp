#include <iostream>
#include <forward_list>
#include <string>

using std::string; using std::forward_list;

forward_list<string>& insert_in_forward_list(forward_list<string>& f_list, string s1, string s2)
{
	forward_list<string>::iterator b_begin = f_list.before_begin();
	forward_list<string>::iterator begin = f_list.begin();
	while (begin != f_list.end())
	{
		if (*begin == s1)
		{
			f_list.insert_after(begin, s2);
			return f_list;
		}
		else
		{
			b_begin = begin;
			begin++;
		}
	}
	f_list.insert_after(b_begin, s2);
	return f_list;
}

int main()
{
	forward_list<string> f_list = { "My ","name ","is : " };
	string s1 = "is : ";
	string s2 = "Csongi";
	insert_in_forward_list(f_list, s1, s2);
	for (auto s : f_list)
	{
		std::cout << s;
	}
}
