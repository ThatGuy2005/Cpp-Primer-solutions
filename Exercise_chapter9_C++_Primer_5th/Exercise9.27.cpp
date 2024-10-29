#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> f_list = {1,2,3,4,5,6,7,8,9,10};
    std::forward_list<int>::iterator befor_b = f_list.before_begin();
    std::forward_list<int>::iterator begin = f_list.begin();
    while (begin != f_list.end())
    {
        if (*begin % 2 == 1)
        {
            begin = f_list.erase_after(befor_b);
        }
        else
        {
            befor_b = begin;
            ++begin;
        }
    }
    for (auto i : f_list)
    {
        std::cout << i << std::endl;
    }
}