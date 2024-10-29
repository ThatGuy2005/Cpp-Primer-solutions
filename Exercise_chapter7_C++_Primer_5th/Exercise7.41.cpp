#include <iostream>
#include <string>
struct Sales_data;
std::istream& read(std::istream& is, Sales_data& rhs);

struct Sales_data
{
    Sales_data(const std::string& no) : bookNo(no) { std::cout << "3" << std::endl; }
    Sales_data(const std::string& no, unsigned us, double price)
        : bookNo(no), units_sold(us), revenue(price* us) {
        std::cout << "1" << std::endl;
    }
    Sales_data() : Sales_data("", 0, 0.0) { std::cout << "2" << std::endl; }
    Sales_data(std::istream& is) {
        std::cout << "4" << std::endl;
        read(is, *this);
    }

    std::string isbn() { return bookNo; };
    Sales_data& combine(const Sales_data& rht);
    inline double average_price() { return revenue / units_sold; };

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
std::ostream& print(std::ostream& os, Sales_data& rhs)
{
    os << rhs.bookNo << " " << rhs.units_sold << " " << rhs.revenue << " " << rhs.average_price();
    return os;
}
Sales_data add(const Sales_data& ths, const Sales_data& rhs)
{
    Sales_data sum = ths;
    sum.combine(rhs);
    return sum;
}
std::istream& read(std::istream& is, Sales_data& rhs)
{
    double price = 0.0;
    is >> rhs.bookNo >> rhs.units_sold >> price;
    rhs.revenue = rhs.units_sold * price;
    return is;
}

int main()
{
    Sales_data total;
    Sales_data trans;
    double price = 0.0;
    if (read(std::cin, total))
    {
        while (read(std::cin, trans))
        {
            if (total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                print(std::cout, total);
                total = trans;
            }
        }
        print(std::cout, total);
    }
    else
    {
        std::cerr << "No data ?! " << std::endl;
        return -1;
    }
    return 0;
    return 0;
}