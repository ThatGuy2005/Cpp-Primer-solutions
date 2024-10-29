#include <iostream>
#include <vector>
#include <iterator>

int main()
{
    std::vector<int> vec = { 1,2,3,4,5,6,7,8,9 };
    std::vector<int>::iterator end = vec.end();
    while (end != vec.begin())
    {
        --end;
        std::cout << *end << " ";
    }
}