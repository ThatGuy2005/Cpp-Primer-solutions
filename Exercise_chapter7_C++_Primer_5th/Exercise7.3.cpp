
#include <iostream>
#include <string>

struct Sales_data
{
	std::string isbn() { return bookNo; }
	Sales_data& combine(const Sales_data& rht);
	std::string bookNo;
	int units_sold = 0;
	double revenue = 0.0;
};
Sales_data& Sales_data::combine(const Sales_data& rht)
{
	units_sold += rht.units_sold;
	revenue += rht.revenue;
	return *this;
}
int main()
{
    Sales_data total;
    Sales_data trans;
    double price = 0.0;
    if (std::cin >> total.bookNo >> total.units_sold >> price)
    {
        total.revenue += total.units_sold * price;
        while (std::cin >> trans.bookNo >> trans.units_sold >> price)
        {
            trans.revenue += trans.units_sold * price;
            if (total.isbn() == trans.isbn())
            {
                total.combine(trans);
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