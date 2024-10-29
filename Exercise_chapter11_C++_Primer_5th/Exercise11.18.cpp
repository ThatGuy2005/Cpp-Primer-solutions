#include <iostream>
#include <map>
#include <string>

int main()
{
    std::map<std::string, std::size_t> word_count = { {"Joe",3},{"Mike",4},{"Erik",4} };
    std::map<std::string, std::size_t>::const_iterator map_it = word_count.cbegin();
    while (map_it != word_count.end())
    {
        std::cout << map_it->first << " " << map_it->second << " ";
        ++map_it;
    }
}