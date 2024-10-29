
#include <iostream>
#include <vector>
#include <string>
using std::cout; using std::cin; using std::endl; using std::string; using std::vector;

int main()
{
    vector<string> text;
    string s;
    while (getline(cin, s))
    {
        if (s == "|")
        {
            break;
        }
        else
        {
            text.push_back(s);
        }
    }
    for (auto it = text.begin(); it != text.end() && !it->empty(); it++)
    {
        for (auto &c : *it)
        {
            c = toupper(c);
        }
        cout << *it;
    }
}
