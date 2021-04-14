// Question 1
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	string student;
	int score1, score2;
	int sum;
	double average;

	ifstream ifs;
    ifs.open("students.txt");

	for (int i = 0; i < 10; i++) {
		ifs >> student >> score1 >> score2;
		cout << "Student name: " << student << " \t" << " Score 1: ";
		cout << score1 << " \t" << "Score 2: " << " \t";
		cout << "Sum: " << sum << "Avg: " << average;
	}

   
    ifs.close();
}