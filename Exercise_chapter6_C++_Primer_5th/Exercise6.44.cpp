
#include <iostream>
#include <string>
using std::string;
//s1.size() and s2.size() will be get at run time , so the function can't be a constexpr
 inline bool isShorter ( const string& s1, const string& s2)
{
    return  s1.size() < s2.size();
}
int main()
{
    string s1, s2;
    std::cout << isShorter(s1, s2) << std::endl;
}