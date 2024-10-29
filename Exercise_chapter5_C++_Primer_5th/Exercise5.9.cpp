
#include <iostream>

int main()
{
    char c;
    unsigned short int acnt = 0, ecnt = 0, icnt = 0, ocnt = 0, usnt = 0;
    while (std::cin >> c)
    {
        if (c == 'a')
        {
            acnt++;
        }
        else if (c == 'e')
        {
            ecnt++;
        }
        else if (c == 'i')
        {
            icnt++;
        }
        else if (c == 'o')
        {
            ocnt++;
        }
        else if (c == 'u')
        {
            usnt++;
        }
    }
}
