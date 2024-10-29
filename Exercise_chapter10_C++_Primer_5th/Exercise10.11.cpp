#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void elim_dups(std::vector<std::string>& vec)
{
    std::sort(vec.begin(), vec.end());
    auto elim_dup = std::unique(vec.begin(), vec.end());
    vec.erase(elim_dup, vec.end());
}
bool is_shorter(const std::string& s1, const std::string& s2)
{
    return s1.size() < s2.size();
}
int main()
{
    std::vector<std::string> words;
    std::string word;
    while (std::cin >> word)
    {
        if (word == "|")
        {
            break;
        }
        words.push_back(word);
    }
    elim_dups(words);
    std::stable_sort(words.begin(), words.end(), is_shorter);
    for (std::string word : words)
    {
        std::cout << word << " ";
    }
}