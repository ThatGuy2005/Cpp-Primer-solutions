
#include <iostream>
#include <string>
using std::cout; using std::cin; using std::string; using std::endl;

int main()
{
    string s;
    cin >> s;
    unsigned i = 1;
    if (!s.empty())
    {
        for(auto &c : s)
        {
            c = 'x';
        }
        cout << s << endl;
    }
}