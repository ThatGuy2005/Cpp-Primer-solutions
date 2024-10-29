#include <iostream>
#include <map>
#include <set>
#include <string>

using std::set;

int main()
{
    std::map<std::string, std::size_t > word_count;
    set<std::string> exclude { "The", "But", "And", "Or", "An", "A","the","but","and","or","an","a"};
    std::string word;
    while (std::cin >> word)
    {
        if (exclude.find(word) == exclude.end())
        {
            ++word_count[word];
        }
    }
}