#include <iostream>
#include <string>

class Time
{
public:
	Time(std::string year, std::string mounth, std::string day) : year(std::stoul(year)), mounth(std::stoul(mounth)), day(std::stoul(day)) { };

private:
	unsigned long year;
	unsigned long mounth;
	unsigned long day;
};