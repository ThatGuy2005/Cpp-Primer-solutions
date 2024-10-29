
#include <iostream>

int main()
{
    int i = 1;
    int* p  = nullptr;
    p = &i;
    *p = 2;
    std::cout << i << std::endl;
    return 0;
}