#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student
{
private:
	string name;
	int numClasses;
	string *classList;
public:
	Student();
	Student(string sname, int n);
	Student(const Student &rhs); // Copy constructor
	Student &operator=(const Student &rhs); // Assignment operator
	void resetClasses(); // Reset class list
	void inputInfo();
	void printInfo();
	string getName() const;
	int getNumClasses() const;
	string getClassList() const;
	void setName(string sname);
	void setNumClasses(int num);
	void setClassList(string list[]);
	~Student();
};
#endif