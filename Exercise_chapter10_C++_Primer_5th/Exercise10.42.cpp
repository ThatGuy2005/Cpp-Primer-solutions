#include <iostream>
#include <list>
#include <string>
#include <algorithm>

void elim_duplicates(std::list<std::string>& list)
{
    list.sort();
    list.unique();
}

int main()
{
    std::list<std::string> list = { "word","word","you"};
    elim_duplicates(list);
    for (auto s : list)
    {
        std::cout << s << std::endl;
    }
}