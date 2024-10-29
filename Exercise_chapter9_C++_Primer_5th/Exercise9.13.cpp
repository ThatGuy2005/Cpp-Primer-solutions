#include <iostream>
#include <vector>
#include <list>

int main()
{
    std::list<int> to_i1 = { 0,1,2,3,4,5,6,7,8,9 };
    std::vector<int> to_i2 = { 0,1,2,3,4,5,6,7,8,9 };
    std::vector<double> vec1(to_i1.begin(), to_i1.end());
    std::vector<double> vec2(to_i2.begin(), to_i2.end());
    std::cout << vec1[0] << " " << vec2[0] << std::endl;
}