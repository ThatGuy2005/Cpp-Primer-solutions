#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<char> vec = { 'H','e','l','l','o','\0'};
    char* cp = &vec[0];
    std::string s(cp);
    std::cout << s << std::endl;
}