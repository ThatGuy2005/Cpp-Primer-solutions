
#include <iostream>
#include <vector>
#include <string>
using std::cout; using std::cin; using std::endl; using std::vector; using std::string;

int main()
{
    vector<int> i;
    int sum = 0, c = 0, value = 0;
    while (cin >> value)
    {
        i.push_back(value);
    }
    for (int v = 0; v != i.size(); v++)
    {
        sum += i[v];
        if (c == 1)
        {
            cout << sum << endl;
            sum = 0;
            c = 0;
        }else
        c++;
    }
}
