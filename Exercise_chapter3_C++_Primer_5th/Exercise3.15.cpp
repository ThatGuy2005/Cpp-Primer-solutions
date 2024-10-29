#include <iostream>
#include <vector>
#include <string>
using std::string;

int main()
{
    string i ;
    std::vector<string> v;
    while (std::cin >> i)
    {
        v.push_back(i);
    }
}