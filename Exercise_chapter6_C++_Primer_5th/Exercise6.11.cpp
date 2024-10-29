
#include <iostream>

void reset(int& number_to_reset)
{
    number_to_reset = 0;
}
int main()
{
    int i = 42;
    reset(i);
    std::cout << i << std::endl;
}