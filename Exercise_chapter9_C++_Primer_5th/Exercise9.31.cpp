#include <iostream>
#include<forward_list>
using std::forward_list;

int main()
{
    forward_list<int> f_list = { 1,2,3,4,5,6,7,8,9,10 };
    forward_list<int>::iterator b_begin = f_list.before_begin();
    forward_list<int>::iterator begin = f_list.begin();

    while (begin != f_list.end())
    {
        if (*begin % 2 == 1)
        {
            begin = f_list.insert_after(begin, *begin);
            b_begin = begin;
            begin++;
        }
        else 
        {
            begin = f_list.erase_after(b_begin);
        }
    }

    for (auto i : f_list)
    {
        std::cout << i << std::endl;
    }
}
