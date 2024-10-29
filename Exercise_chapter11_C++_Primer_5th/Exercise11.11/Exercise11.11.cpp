#include <iostream>
#include <set>
#include "Sales_data.h"

int main()
{
    std::multiset<Sales_data, bool (*) (const Sales_data& lhs, const Sales_data& rhs)> bookstore;
    std::multiset<Sales_data, bool (*) (const Sales_data& lhs, const Sales_data& rhs)>::iterator beg = bookstore.begin();
}