#include "student.hpp"
#include <iostream>
#include <string>
using namespace std;

Student::Student() : name("noname"), numClasses(0)
{
}
Student::Student(string sname, int num, string list[]) : name(sname), numClasses(num) 
{
	for (int i = 0; i < num; i++)
		classList[i] = list[i];
}
Student &Student::operator=(Student &rhs)
{
	if (this != &rhs) {
		delete [] classList;
		classList = new string[rhs.numClasses];
	}
	name = rhs.name;
	numClasses = rhs.numClasses;
	for (int i = 0; i < numClasses; i++)
		classList[i] = rhs.classList[i];
	return *this;
}
void Student::emptyClassList()
{
	
}
string Student::getName() const
{
	return name;
}
int Student::getNumClasses() const
{
	return numClasses;
}
string Student::getClassList() const
{
	return *classList;
}
void Student::setName(string sname)
{
	name = sname;
}
void Student::setNumClasses(int num)
{
	numClasses = num;
}
void Student::setClassList(string list[])
{
	for (int i = 0; i < numClasses; i++)
		classList[i] = list[i];
}
void Student::printStudent() const
{
	cout << "Student: " << name << endl;
	cout << "Courses: " << endl;
	for (int i = 0; i < numClasses; i++)
		cout << "\t" << classList[i] << endl;
}
Student::~Student() {
	delete [] classList;
}