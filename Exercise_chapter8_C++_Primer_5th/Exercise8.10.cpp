
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

int main()
{

    std::vector<std::string> vec;
    std::ifstream in;
    std::string line;
    in.open("in.txt", std::ios::in);
    while (std::getline(in,line))
    {
        vec.push_back(line);
    }
    for (std::string w : vec)
    {
        std::istringstream is(w);
        for (std::string word; is >> word; std::cout << word << std::endl) {};
    }
}
