
#include <iostream>
#include <vector>
int addition(int a, int b)
{
    return a + b;
}
int substraction(int a, int b)
{
    return a - b;
}
int multipication(int a, int b)
{
    return a * b;
}
int division(int a, int b)
{
    return a / b;
}
int main()
{
    typedef int (*pf) (int, int);
    int a, b;
    std::cin >> a >> b;
    std::vector<pf> equations = { addition, substraction, multipication, division};
    std::cout << equations[0](a, b) << std::endl;
    std::cout << equations[1](a, b) << std::endl;
    std::cout << equations[2](a, b) << std::endl;
    std::cout << equations[3](a, b) << std::endl;
}
