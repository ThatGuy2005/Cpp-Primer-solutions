#include <iostream>
#include <vector>
using std::vector;

vector<int>::iterator& found(vector<int>::iterator& begin, vector<int>::iterator& end, const int& to_find)
{
    while (begin != end)
    {
        if (*begin == to_find)
        {
            return begin;
        }
        begin++;
    }
    throw "Object not found ";
}

int main()
{
    vector<int> vec{ 1,2,3,4,5,6,7,8,9,10 };
    vector<int>::iterator begin = vec.begin();
    vector<int>::iterator end = vec.end();
    int find_it;
    char answear;
    try
    {
        std::cin >> find_it;
        if (std::cin.fail())
        {
            std::cerr << "Invalid input !" << std::endl;
            std::cin.clear();
        }
        else
        {
            std::cout << *found(begin, end, find_it) << std::endl;
        }
    }
    catch(const char* msg)
    {
        std::cerr << msg << std::endl;
    }
}