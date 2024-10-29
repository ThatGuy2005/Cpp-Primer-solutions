
#include <iostream>
#include <vector>
#include <string>
using std::cout; using std::cin; using std::endl; using std::string; using std::vector;

int main()
{
    vector<int> v;
    int i, c = 0;
    while (cin >> i)
    {
        v.push_back(i);
        c++;
        if (c == 10)
        {
            break;
        }
    }
    for (auto it = v.begin(); it != v.end(); it++)
    {
        *it = *it * 2;
        cout << *it << endl;
    }
}