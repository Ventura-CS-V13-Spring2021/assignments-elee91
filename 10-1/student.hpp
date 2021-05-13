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
	Student(string sname, int num, string list[]);
	Student &operator=(Student &rhs);
	void emptyClassList();
	string getName() const;
	int getNumClasses() const;
	string getClassList() const;
	void setName(string sname);
	void setNumClasses(int num);
	void setClassList(string list[]);
	void printStudent() const;
	~Student();
};
#endif