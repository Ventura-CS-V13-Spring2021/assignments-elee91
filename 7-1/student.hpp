#ifndef STUDENT_H
#define STUDENT_H
#include "address.hpp"
#include "dob.hpp"

class Student
{
private:
	string sname;
	int id;
	DOB dob;
	Address address;
public:
	Student();
	Student(string stname, int idnum, DOB date, Address addr);
	int getId() const;
	string getSname() const;
	DOB getDob() const;
	Address getAddress() const;
	void setSname(string name);
	void setId(int num);
	void setDob(DOB date);
	void setAddress(Address addr);
	void printStudent();
};
#endif