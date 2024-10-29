#include <iostream>
#include <string>
#include <fstream>

class Sales_data
{
public:

    friend inline std::ofstream& print(std::ofstream& os, Sales_data& rhs);
    friend inline std::ifstream& read(std::ifstream& is, Sales_data& rhs);
    friend inline Sales_data add(const Sales_data& ths, const Sales_data& rhs);

    Sales_data(const std::string& no) : bookNo(no) {}
    Sales_data(const std::string& no, unsigned us, double price)
        : bookNo(no), units_sold(us), revenue(price* us) {}
    Sales_data() : Sales_data("", 0, 0.0) { };
    Sales_data(std::ifstream& is) { };

    inline std::string isbn() { return bookNo; };
    Sales_data& combine(const Sales_data& rht);
    inline double average_price() { return revenue / units_sold; };

private:
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
inline std::ofstream& print(std::ofstream& os, Sales_data& rhs)
{
    if (os.is_open())
    {
        os << rhs.bookNo << " " << rhs.units_sold << " " << rhs.revenue << " " << rhs.average_price();
    }
    return os;
}
inline Sales_data add(const Sales_data& ths, const Sales_data& rhs)
{
    Sales_data sum = ths;
    sum.combine(rhs);
    return sum;
}
inline std::ifstream& read(std::ifstream& is, Sales_data& rhs)
{
    double price = 0.0;
    if (is.is_open())
    {
        if (is.eof()) {
            is.clear();
            return is;
        }
        is >> rhs.bookNo >> rhs.units_sold >> price;
        rhs.revenue = rhs.units_sold * price;
    }
    return is;
}

int main(int argc, char **argv) {

    std::ifstream input;
    std::ofstream output;
    input.open(argv[1], std::ios::in);
    output.open(argv[2], std::ios::out | std::ios::app);
    Sales_data total;
    Sales_data trans;
    double price = 0.0;
    if (read(input, total))
    {
        while (read(input, trans))
        {
            if (total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                print(output, total);
                total = trans;
            }
        }
        print(output, total);
    }
    else
    {
        std::cerr << "No data ?! " << std::endl;
        return -1;
    }
    input.close();
    output.close();
    return 0;
}