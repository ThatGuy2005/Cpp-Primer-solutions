#include <iostream>
#include <vector>
#include <utility>
#include <string>

int main()
{
    std::vector<std::pair<std::string, int> > vec;
    int i;
    std::string s;
    while (std::cin >> s >> i)
    {
        vec.push_back({s,i});
        //vec.push_back(std::make_pair(s, i));
        //vec.push_back(std::pair<std::string, int>(s, i));
    }
}