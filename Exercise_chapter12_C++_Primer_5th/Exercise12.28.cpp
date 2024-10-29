#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <set>

bool Compare(std::string& s1, std::string& s2)
{
    if (s1 == s2)
    {
        return true;
    }
    return false;
}

int main()
{
    std::ifstream input;
    std::stringstream sst;
    std::set<unsigned> set;
    input.open("input.txt", std::ios::in);
    std::vector<std::string> lines;
    std::map<unsigned, std::string> query;
    unsigned nr = 1;
    std::string s;
    std::string si;
    
    while (!input.eof())
    {
        std::getline(input, s);
        lines.push_back(s);
    }
    std::string word;
    std::cout << "Enter the word you want to query : ";
    std::cin >> word;
    for (auto sk : lines)
    {
        while (sst << sk)
        {
            while (sst >> si)
            {
                if (Compare(si, word))
                {
                    set.insert(nr);
                }
            }
        }
        sst.clear();
        query.insert({ nr,sk });
        nr++;
    }
    for (auto k : query)
    {
        for (auto m : set)
        {
            if (k.first == m)
            {
                std::cout << "(line " << k.first << ") " << k.second << std::endl;
            }
        }
    }
    input.close();
}