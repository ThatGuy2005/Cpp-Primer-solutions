#include <iostream>
#include <vector>
using std::vector;

bool found(vector<int>::iterator& begin,vector<int>::const_iterator& end, const int& to_find)
{
    while (begin != end)
    {
        if (*begin == to_find)
        {
            return true;
        }
        begin++;
    }
    return false;
}

int main()
{
    vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    vector<int>::iterator begin = vec.begin();
    vector<int>::const_iterator end = vec.cend();
    int find_it;
    std::cin >> find_it;
    std::cout << found(begin, end, find_it) << std::endl;
}