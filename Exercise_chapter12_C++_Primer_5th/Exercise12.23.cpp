#include <iostream>
#include <memory>
#include <string>
#include <algorithm>

int main()
{
    std::string s1, s2;
    std::string::size_type si;
    std::cin >> s1 >> s2;
    s1 += s2;
    si = s1.size();
    char* p1 = new char[si];
    for (char c : s1)
    {
        *p1 = c;
         p1++;
    }
    delete [ ] p1;
}