#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <list>
#include <forward_list>
#include <deque>

int main()
{
    std::vector<int> vec = { 1,2,3,4,5,6,7,8,9 };
    std::forward_list<int> f_list;
    std::list<int> list;
    std::deque<int> deque;
    std::copy(vec.begin(), vec.end(), std::front_inserter(f_list));
    for (int i : f_list)
    {
        std::cout << i << std::endl;
    }
    std::copy(vec.begin(), vec.end(), std::inserter(list,list.begin()));
    for (int i : list)
    {
        std::cout << i << std::endl;
    }
    std::copy(vec.begin(), vec.end(), std::back_inserter(deque));
    for (int i : deque)
    {
        std::cout << i << std::endl;
    }
}