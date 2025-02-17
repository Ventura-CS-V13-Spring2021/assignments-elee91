#include "student.hpp"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

Student::Student() : name(" "), numClasses(0), classList(NULL)
{
}
Student::Student(string sname, int n, string list[]) : name(sname), numClasses(n) 
{
	classList = new string[n];
	for (int i = 0; i < n; i++)
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
void Student::resetClasses()
{
	if (classList) {
		delete [] classList;
		classList = NULL;
		numClasses = 0;
	}
}
void Student::inputInfo()
{
	resetClasses();
	cout << "Enter student name : ";
	getline(cin, name);
	cout << "Enter number of classes : ";
	cin >> numClasses;
	cin.ignore();
	if (numClasses > 0) {
		classList = new string[numClasses];
	}
	cout << "Enter name of class(es) " << endl;
	for (int i = 0; i < numClasses; i++) {
		cout << "(" << (i+1) << ") : ";
		getline(cin, classList[i]);
	}
	cout << endl;
}
void Student::printInfo()
{
	cout << "Name of Student: " << name << endl
		 << "Number of Courses: " << numClasses << endl;
	for (int i = 0; i < numClasses; i++)
		cout << "\t" << classList[i] << endl;
	cout << endl;
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
Student::~Student() 
{
	delete [] classList;
}