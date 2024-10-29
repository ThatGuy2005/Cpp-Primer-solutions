#include <iostream>

class Account
{
public :
	static double rate();
	static void rate(double);
private:
	static constexpr int period = 30;
	double daily_tbl[period];
};