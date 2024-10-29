
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>

int main()
{
    std::vector<int> vec;
    int i;
    while (std::cin >> i)
    {
        vec.push_back(i);
    }
    auto same_value = std::count(vec.cbegin(), vec.cend(), 5);
    std::cout << same_value << std::endl;
    std::list<std::string> list(20);
    std::string word;
    std::cin.clear();
    while (std::cin >> word)
    {
        if (word == "|")
        {
            break;
        }
        list.push_back(word);
    }
    auto same_word = std::count(list.cbegin(), list.cend(), "a");
    std::cout << same_word << std::endl;
}