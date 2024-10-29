#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>
#include <functional>

bool is_smaller_than(int i, int sz)
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
    int num;
    int sz = 10;
    while (std::cin >> num)
    {
        vec.push_back(num);
    }
    std::list<int> list;
    std::unique_copy(vec.begin(), vec.end(), std::inserter(list,list.begin()),bind(is_smaller_than,std::placeholders::_1,sz));
    for (auto i : list)
    {
        std::cout << i << std::endl;
    }
}