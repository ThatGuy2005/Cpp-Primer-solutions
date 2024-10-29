#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <functional>

bool check_size(int i, int sz)
{
    if (i > sz)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main()
{
    std::istream_iterator<int> input_num(std::cin), eof;
    std::vector<int> vec(input_num, eof);
    std::ostream_iterator<int> output_num(std::cout," ");
    std::sort(vec.begin(), vec.end(), bind(check_size, std::placeholders::_1, 10));
    std::unique_copy(vec.begin(), vec.end(), output_num, bind(check_size, std::placeholders::_1, 2));
}