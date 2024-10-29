#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec = { 0,1,2,3,4,5,6,7,8,9 };
    std::cout << vec.at(0) << std::endl;
    std::cout << vec[0] << std::endl;
    std::cout << vec.front() << std::endl;
    std::cout << *vec.begin() << std::endl;
}
