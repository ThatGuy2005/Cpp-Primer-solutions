#include <iostream>
#include <vector>
#include <numeric>

int main()
{
    std::vector<double> vec;
    double i;
    while (std::cin >> i)
    {
        vec.push_back(i);
    }
    double sum = std::accumulate(vec.cbegin(), vec.cend(), 0.0);
    std::cout << sum;
}