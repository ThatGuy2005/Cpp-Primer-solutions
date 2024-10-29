#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> ivec;
    int i;
    while (std::cin >> i)
    {
        ivec.push_back(i);
    }
    std::fill_n(ivec.begin(),ivec.size(),0);
    for (int i : ivec)
    {
        std::cout << i << std::endl;
    }
}