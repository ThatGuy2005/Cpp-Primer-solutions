#include <iostream>
#include <string>
#include <map>

int main()
{
    std::map<std::string, std::size_t> word_count;
    std::string word;
    while (std::cin >> word)
    {
        auto it = word_count.insert({ word,1 });
        if (!it.second)
        {
            ++it.first->second;
        }
    }
}