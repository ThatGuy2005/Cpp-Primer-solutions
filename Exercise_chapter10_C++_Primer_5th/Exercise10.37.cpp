#include <iostream>
#include <list>
#include <vector>
#include <iterator>

int main()
{
    std::vector<int> vec = { 1,2,3,4,5,6,7,8,9,10 };
    std::list<int> list(vec.rbegin()+3,vec.rend()-2);
    for (auto i : list)
    {
        std::cout << i << " ";
    }
}