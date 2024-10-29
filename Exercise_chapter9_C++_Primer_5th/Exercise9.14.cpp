#include <iostream>
#include <vector>
#include <string>
#include <list>

int main()
{
    std::list<char*> lc{ "aaa", "bbb", "ccc" };
    std::vector<std::string> vec;
    vec.assign(lc.begin(), lc.end());
    std::cout << vec[0] << " " << vec[1] << " " << vec[2] << std::endl;
}
