
#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data total;
    int total_1 = 0;
    int total_2 = 0;
    if (std::cin >> total.bookNo >> total.revenue >> total.units_sold)
    {
        Sales_data trans;
        while (std::cin >> trans.bookNo >> trans.revenue >> trans.units_sold)
        {
            if (total.bookNo == trans.bookNo)
            {
                total_1 += (total.revenue * total.units_sold);
                total.revenue = total_1;
                total_2 += (trans.revenue * trans.units_sold);
                trans.revenue = total_2;
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }
            else
            {
                std::cout << total.bookNo << std::endl;
                std::cout << total.units_sold << std::endl;
                std::cout << total.revenue << std::endl;
            }
        }
        std::cout << total.bookNo << std::endl;
        std::cout << total.units_sold << std::endl;
        std::cout << total.revenue << std::endl;
    }
    else
    {
        std::cerr << "No data ?! " << std::endl;
        return -1;
    }
    return 0;
}