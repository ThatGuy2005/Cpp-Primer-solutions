#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <fstream>

int main()
{
    std::ifstream in;
    in.open("input.txt",std::ios::in);
    std::istream_iterator <std::string > word(in), eof;
    std::vector<std::string> vec(word,eof);
    for (auto s : vec)
    {
        std::cout << s << " ";
    }
    in.close();
}