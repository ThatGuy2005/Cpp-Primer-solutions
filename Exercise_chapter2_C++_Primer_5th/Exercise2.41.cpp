
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
    double price = 0.0;
    std::cin >> data1.BookNo >> data1.iteams_sold >> price;
    data1.revenue = data1.iteams_sold * price;
    std::cin >> data2.BookNo >> data2.iteams_sold >> price;
    data2.revenue = data2.iteams_sold * price;
    if (data1.BookNo == data2.BookNo)
    {
        double totalrevenue = data1.revenue + data2.revenue;
        unsigned total_sold = data1.iteams_sold + data2.iteams_sold;
        std::cout << data1.BookNo << " " << totalrevenue << " " << total_sold << std::endl;
        return 0;
    }
    else
    {
        std::cerr << "The ISBN is not matching ! ";
        return -1;
    }
}