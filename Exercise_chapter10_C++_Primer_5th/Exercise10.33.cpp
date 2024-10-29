#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <functional>

int main()
{
    std::ifstream input;
    std::ofstream even_output,odd_output;

    input.open("input.txt", std::ios::in);
    even_output.open("even.txt", std::ios::out);
    odd_output.open("odd.txt", std::ios::out);

    std::istream_iterator<int> num(input),eof;
    std::vector<int> vec(num,eof);
    std::ostream_iterator<int> even(even_output, "\n");
    std::ostream_iterator<int> odd(odd_output, " ");
    std::copy_if(vec.begin(), vec.end(), even, [](int i) {return !(i%2); });
    std::copy_if(vec.begin(), vec.end(), odd, [](int i) {return i % 2; });
    input.close();
    even_output.close();
    odd_output.close();
}
