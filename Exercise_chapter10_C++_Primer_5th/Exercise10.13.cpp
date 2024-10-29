#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool is_more_than_five_characters(const std::string& word)
{
    unsigned count = 0;
    for (char c : word)
    {
        count++;
    }
    if (count >= 5)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    std::vector<std::string> word;
    std::string w;
    while (std::cin >> w)
    {
        if (w == "|")
        {
            break;
        }
        word.push_back(w);
    }
    auto it = std::partition(word.begin(),word.end(),is_more_than_five_characters);
    auto beg = word.begin();
    while (beg != it)
    {
        std::cout << *beg << std::endl;
        beg++;
    }
}