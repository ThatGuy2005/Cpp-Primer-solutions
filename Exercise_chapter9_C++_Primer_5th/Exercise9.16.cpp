#include <iostream>
#include <vector>
#include <list>

bool compare(std::vector<int> vec1, std::list<int> vec2)
{
    std::vector<int>::iterator v1b = vec1.begin();
    std::vector<int>::iterator v1e = vec1.end();
    std::list<int>::iterator v2b = vec2.begin();
    std::list<int>::iterator v2e = vec2.end();
    if (vec1.size() == vec2.size())
    {
        while (v1b != v1e)
        {
            if (*v1b != *v2b)
            {
                return false;
            }
            v1b++;
            v2b++;
        }
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    std::vector<int> vec1 = { 1,2,3,4,5 };
    std::list<int> vec2 = { 1,2,3,4,5 };
    std::cout << compare(vec1, vec2) << std::endl;
}