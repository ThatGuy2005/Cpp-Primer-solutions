#include <iostream>

int main()
{
    int a=8;
    auto answ = [a](int b) {return a + b; };
    std::cout << answ(6) << std::endl;
}