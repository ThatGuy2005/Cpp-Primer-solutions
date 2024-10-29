#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

bool check_size(int i, std::string::size_type sz)
{
    if (i > sz)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    std::vector<int> vec;
    int i;
    while (std::cin >> i)
    {
        vec.push_back(i);
    }
    auto k = std::find_if(vec.begin(), vec.end(), bind(check_size, std::placeholders::_1, 5));
    std::cout << *k << std::endl;
}