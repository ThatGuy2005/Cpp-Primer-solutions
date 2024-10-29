#include <iostream>
#include <vector>
#include <string>
#include <map>

int main()
{
    std::map<std::string, std::vector<int> > m = { {"K",{1,2,3}} };
    std::map<std::string, std::vector<int> >::iterator r = m.find("K");
    std::vector<int> vec { r->second };
    std::cout << r->first << " ";
    for (auto i : vec)
    {
        std::cout << i << " ";
    }
}