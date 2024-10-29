
#include <iostream>
#include <string>

struct Sales_data
{
	std::string isbn() { return bookNo; }
	Sales_data& combine(const Sales_data& rht);
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
std::istream& read(std::istream& is, Sales_data& rhs)
{
	double price = 0.0;
	is >> rhs.bookNo >> rhs.units_sold >> price;
	rhs.revenue += rhs.units_sold * price;
	return is;
}
std::ostream& print(std::ostream& os, Sales_data& rhs)
{
	os << rhs.bookNo << " " << rhs.units_sold << " " << rhs.revenue << " " << rhs.average_price();
	return os;
}
Sales_data add(Sales_data& sum, Sales_data& rhs)
{
	Sales_data tot = sum;
	tot.combine(rhs);
	return sum;
}