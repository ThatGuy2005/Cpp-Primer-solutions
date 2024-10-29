
#include <iostream>
#include <string>

struct Sales_data
{
    std::string BookNo;
    unsigned iteams_sold = 0;
    double revenue = 0.0;
};
int main()
{
    Sales_data data1, data2;
    double price = 0;
    unsigned count = 1;
    std::cin >> data1.BookNo >> data1.iteams_sold >> price;
    std::cin >> data2.BookNo >> data2.iteams_sold >> price;
    if (data1.BookNo == data2.BookNo)
    {
        while ( std::cin >> data2.BookNo >> data2.iteams_sold >> price)
        {
            if (data1.BookNo == data2.BookNo)
            {
                count++;
            }
            else if (data1.BookNo != data2.BookNo)
            {
                std::cout << count << std::endl;
                count = 1;
                data1.BookNo = data2.BookNo;
            }
        }
    }
}