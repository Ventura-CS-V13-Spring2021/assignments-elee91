#include "address.hpp"
#include "dob.hpp"
#include "student.hpp"
#include <iostream>
#include <string>
using namespace std;

Student::Student() : sname("noname"), id(0), dob(), address()
{
}
Student::Student(string stname, int idnum, DOB date, Address addr) : sname(stname), id(idnum), dob(date), address(addr)
{
}
int Student::getId() const
{
	return id;
}
string Student::getSname() const
{
	return sname;
}
DOB Student::getDob() const
{
	return dob;
}
Address Student::getAddress() const
{
	return address;
}
void Student::setSname(string name)
{
	sname = name;
}
void Student::setId(int num)
{
	id = num;
}
void Student::setDob(DOB date)
{
	dob = date;
}
void Student::setAddress(Address addr)
{
	address = addr;
}
void Student::printStudent()
{
	cout << sname << " " << id << " ";
	address.printAddress();
	dob.printDate();
}