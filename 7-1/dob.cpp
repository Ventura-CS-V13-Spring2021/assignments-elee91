#include "dob.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

DOB::DOB() : month(1), day(1), year(0000)
{
}
DOB::DOB(int m, int d, int y) : month(m), day(d), year(y)
{
}
int DOB::getMonth() const
{
	return month;
}
int DOB::getDay() const
{
	return day;
}
int DOB::getYear() const
{
	return year;
}
void DOB::printDate() const
{
	cout << setw(2) << month << " ";
	cout << setw(2) << day << " ";
	cout << year << endl;
}
void DOB::setDob(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
}
void DOB::setMonth(int m)
{
	month = m;	
}
void DOB::setDay(int d)
{
	day = d;
}
void DOB::setYear(int y)
{
	year = y;
}