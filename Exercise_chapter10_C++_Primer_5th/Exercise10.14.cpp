#include <iostream>

int main()
{
    auto ans = [](double a, double b) {return a + b; };
    std::cout << ans(1,2) << std::endl;
}