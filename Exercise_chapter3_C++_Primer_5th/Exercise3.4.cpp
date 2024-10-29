
#include <iostream>
#include <string>
using std::cin; using std::cout; using std::string; using std::endl;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == s2)
    {
        cout << "They are equal " << endl;
    }
    else if (s1 > s2)
    {
        cout << " s1 is bigger than s2 " << endl;
    }
    else if (s2 > s1)
    {
        cout << " s2 is bigger than s1 " << endl;
    }
    // The size copereson
    string::size_type a = s1.size();
    string::size_type b = s2.size();
    if (a == b)
    {
        cout << "They share the same size " << endl;
    }
    else if (a > b)
    {
        cout << " s1 is longer than s2 " << endl;
    }
    else if (b > a)
    {
        cout << " s2 is longer than s1 " << endl;
    }
}