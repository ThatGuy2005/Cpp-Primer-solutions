#include <iostream>
#include <string>
#include <deque>

int main()
{
    std::string word;
    std::deque<std::string> line;
    while (getline(std::cin, word))
    {
        if (word == "|")
        {
            break;
        }
        line.push_back(word);
    }
    std::deque<std::string>::iterator begin = line.begin();
    std::deque<std::string>::const_iterator end = line.end();
    while (begin != end)
    {
        std::cout << *begin << std::endl;
        begin++;
    }
}