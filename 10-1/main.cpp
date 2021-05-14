#include "student.hpp"
#include <iostream>
#include <string>
using namespace std;

int main() {
	Student s1, s2;
	s1.inputInfo();
	cout << "Student 1's info:" << endl;
	s1.printInfo();

	s2 = s1;
	cout << "Student 2's info (copy):" << endl;
	s2.printInfo();

	s1.resetClasses();
	cout << "Student 1's info (after reset):" << endl;
	s1.printInfo(); 

	cout << "Student 2's info:" << endl;
	s2.printInfo(); 
}