
#include <iostream>
#include <string>
#include "Sales_data.h"
int main()
{
    Sales_data data1, data2;
    double price = 0;
    unsigned count = 1;
    std::cin >> data1.BookNo >> data1.units_sold >> price;
    std::cin >> data2.BookNo >> data2.units_sold >> price;
    if (data1.BookNo == data2.BookNo)
    {
        while (std::cin >> data2.BookNo >> data2.units_sold >> price)
        {
            if (data1.BookNo == data2.BookNo)
            {
                count++;
            }
            else if (data1.BookNo != data2.BookNo)
            {
                std::cout << data1.BookNo << " " << count << std::endl;
                count = 1;
                data1.BookNo = data2.BookNo;
            }
        }
    }
    else
    {
        std::cerr << "You f***** up this s*** !" << std::endl;
    }
}
