
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