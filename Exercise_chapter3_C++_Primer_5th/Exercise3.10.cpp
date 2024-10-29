
#include <iostream>
#include <string>
using std::cin; using std::cout; using std::string; using std::endl;
int main()
{
    string s;
    cin >> s;
    if (!s.empty())
    {
        for (auto& c : s)
        {
            if (ispunct(c))
            {
                c = 0;
            }
        }
        cout << s << endl;
    }
}

