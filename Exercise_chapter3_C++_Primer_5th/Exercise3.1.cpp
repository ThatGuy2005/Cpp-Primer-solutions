
#include <iostream>
using std::endl;
using std::cout;
using std::cin;
using std::cerr;

int main()
{
    int i = 50;
    int e = 0;
    while (i <= 100)
    {
        cout << i << " ";
        i++;
    }
    i = 10;
    while (i >= 0)
    {
        cout << i << " ";
        i--;
    }
    cin >> i >> e;
    if (i < e)
    {
        while (i <= e)
        {
            cout << i << " ";
            i++;
        }
    }
    else if (i > e)
    {
        while (i >= e)
        {
            cout << i << " ";
            i--;
        }
    }
    else
    {
        cout << i << endl;
    }

    return 0;
}
