//	Question 7 Writing Program
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	int N, id;
	string emplName, deptName;
	double salary;

    ofstream ofs;
    ofs.open("employee.txt");

    cout << "Enter the number of employees: ";
    cin >> N;
	ofs << N << endl;
	cout << "Input using spaces: \nEmployeeID EmployeeName Department Salary" << endl;
	for (int i; i < N; i++) {
		cin >> id >> emplName >> deptName >> salary;
		ofs << id << " ";
		ofs << emplName << " ";
		ofs << deptName << " ";
		ofs << salary << endl;
    }
    ofs.close();
}

/* Question 8
The key algorithm for this program is a for loop that would prompt the user to enter multiple data according to the number of employees.
I began by creating an object class to open as my ofstream, ofstream ofs. This allowed me to open or creat a txt file called employee.txt using the ofs.open code. Prompting the user to enter the number of employees, I used that stored number into N which also created the condition for number of iterations in my for loop. 3 employees require 3 iterations (i.e. i < 3 ). When users enter each of the 4 data: id, employee name, department name, salary; the cin statement stores the numbers and string into my variables, where I can write to my txt file using ofstream. In my program, ofstream 'ofs' allow me store data into my txt wheneter I use 'ofs' << 'variable to be stored'. I finish writing my file by using ofs.close() as in line 26.
I believe I did not experience an errors. However, I did forget to include the number of employees in the txt file.
*/