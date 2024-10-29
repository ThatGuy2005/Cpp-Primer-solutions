

#include <iostream>
#include "Sales_item.h"

int main()
{
    int count = 1;
    Sales_item iteam, curriteam;
    if (std::cin >> iteam)
    {
        curriteam = iteam;
        while (std::cin >> curriteam)
        {
            if (curriteam.isbn() == iteam.isbn())
            {
                count++;
            }
            else
            {
                std::cout << count << std::endl;
                count = 1;
                iteam = curriteam;
            }
        }
        std::cout << count << std::endl;
    }
    
    
}

