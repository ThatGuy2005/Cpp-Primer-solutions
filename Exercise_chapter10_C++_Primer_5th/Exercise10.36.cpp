#include <iostream>
#include <iterator>
#include <list>

int main()
{
    std::list<int> list = { 0,1,2,3,4,5,6,7,8,9 };
    auto i = std::find(list.rbegin(), list.rend(), 0);
    std::cout << *i << std::endl;
}