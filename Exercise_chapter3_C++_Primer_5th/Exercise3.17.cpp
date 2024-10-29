
#include <iostream>
#include <vector>
#include <string>
using std::cout; using std::cin; using std::endl; using std::vector; using std::string;

int main()
{
    vector<string> str;
    string s;
    unsigned k = 0;
    while (cin >> s)
    {
        if (s == "|")
        {
            break;
        }else
        str.push_back(s);
    }
    for (string& i : str)
    {
        for (char& c : i)
        {
            c = toupper(c);
        }
    }
    while (k != str.size())
    {
        cout << str[k] << " ";
        k++;
    }
}