#include <iostream>
#include <iterator>
#include <vector>
#include <list>

int main()
{
    int ia[] = { 0,1,1,2,3,5,8,13,21,55,89 };
    std::vector<int> vec(std::begin(ia), std::end(ia));
    std::list<int> list(std::begin(ia), std::end(ia));
    for (auto it = vec.begin(); it != vec.end();)
    {
        if (*it % 2 == 0)
        {
            it = vec.erase(it);
        }
        else
        {
            it++;
        }
    }
    for (auto it = list.begin(); it != list.end();)
    {
        if (*it % 2 == 1)
        {
            it = list.erase(it);
        }
        else
        {
            it++;
        }
    }
    for (auto it = vec.begin(); it != vec.end();it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    for (auto it = list.begin(); it != list.end(); it++)
    {
        std::cout << *it << " ";
    }
}