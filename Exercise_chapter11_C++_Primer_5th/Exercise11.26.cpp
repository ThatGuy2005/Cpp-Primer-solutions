#include <iostream>
#include <map>

int main()
{
    // subscripting a map returns a value_type
    std::map<int, int> m;
    int i = 2;
    int a = m[i];
}