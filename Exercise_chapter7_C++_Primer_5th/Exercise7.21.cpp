#include <iostream>
#include <string>

class Sales_data
{
    friend Sales_data add(const Sales_data& ths, const Sales_data& rhs);
    friend std::ostream& print(std::ostream& os, Sales_data& rhs);
    friend std::istream& read(std::istream& is, Sales_data& rhs);
public:
    Sales_data() = default;
    Sales_data(const std::string& no) : bookNo(no) {}
    Sales_data(const std::string& no, unsigned us, double price)
        : bookNo(no), units_sold(us), revenue(price* us) {};
    std::string isbn() { return bookNo; };
    Sales_data& combine(const Sales_data& rht);
private:
    double average_price() { return revenue / units_sold; };
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
    double price = 0;
    is >> rhs.bookNo >> rhs.units_sold >> price;
    rhs.revenue = rhs.units_sold * price;
    return is;
}
int main()
{
    Sales_data total;
    if (read(std::cin, total))
    {
        Sales_data trans;
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
}