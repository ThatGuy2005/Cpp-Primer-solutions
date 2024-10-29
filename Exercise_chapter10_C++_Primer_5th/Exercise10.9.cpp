#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> delDuplicates(std::vector<std::string>& vec)
{
    std::sort(vec.begin(), vec.end());
    auto to_erease = std::unique(vec.begin(), vec.end());
    vec.erase(to_erease, vec.end());
}

int main()
{
    std::vector<std::string> words;
    std::string word;
    word.resize(10);
    while (std::cin >> word)
    {
        words.push_back(word);
    }
    delDuplicates(words);
    for (std::string word : words)
    {
        std::cout << word << std::endl;
    }
    while()
}