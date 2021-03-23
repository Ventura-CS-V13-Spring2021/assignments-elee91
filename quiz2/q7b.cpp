//	Question 7 Reading Program
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	int N, id;
	string emplName, deptName;
	double salary;
	
	int sum = 0;
	double average;
	ifstream ifs;
    ifs.open("employee.txt");

	ifs >> N;
	cout << "ID\t\t  Name\t    Department\tSalary" << endl;
	for ( int j; j < N; j++ ) {
		ifs >> id >> emplName >> deptName >> salary;
		cout << id << "  " << emplName << "\t\t" << deptName << "\t\t" << salary << endl;
		sum += salary;
	}
	average = static_cast<double>(sum) / N;

	cout << "\t\t\t Total: " << sum << "\tAverage: " << average << endl;
   
    ifs.close();
}

/* Question 8
Similar to my explaination in q7a.cpp, instead of ofstream, reading requires ifstream. I began by using ifstream ifs, where ifstream created the object ifs. I first read the first stored number, which should have been the number of employees. This helps create the number of iterations when reading and printing the id, employee name, department name, and salary for my for loop (line 19). Prior to that, I created a cout statement to label each of the 4 data sets outside of the for loop (line 18). I then proceeded by pulling the data using ifs >> (line 20) which reads each string or value separated by a space in the txt file. Each >> reads and stores that respective string or value into my variables and allows me to print it onto the consolue using cout. During all of this, my for loop also allowed me to create the sum of each salary by adding sum to itself after each iteration. Additionally, I was asked to find the average, thus, I did that outside the for loop in line 24 after finding the sum and dividing it by the number of iterations. Since the sum is an integer and dividing may give decimals, I used static_cast to allow the average to become a double when dividing and giving my result. Finally, I end reading my program file by using ifs.close() as in line 28.
I did not experience any significant errors. Initially when I began to write this program, I forgot that I needed to read the number of employees in the txt file for to create a condition for my loop. I had to go back to my previous program to fix that and stored it into 'int N'.
*/