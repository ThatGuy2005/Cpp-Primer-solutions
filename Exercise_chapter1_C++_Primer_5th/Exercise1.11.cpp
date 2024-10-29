

#include <iostream>

int main()
{
    int a = 0, b = 0, i = 0;
    std::cout << "Enter the first number : "  ;
    std::cin >> a;
    std::cout << "Enter the secound number : " ;
    std::cin >> b;
    i = a;
    while (i <= b)
    {
        std::cout << i << std::endl;
        i++;
    }

}

