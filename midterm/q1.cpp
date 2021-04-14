// Question 1
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	string student;
	int score1, score2;
	int sum, j = 0; // j is avg students > 80
	double average;

	ifstream ifs;
    ifs.open("students.txt");

	for (int i = 0; i < 10; i++) {
		ifs >> student >> score1 >> score2;
		sum = score1 + score2;
		average = static_cast<double>(sum) / 2;
		if (average > 80)
			j++;
		cout << "Student name: " << student << " \t" << " Score 1: ";
		cout << score1 << " \t" << "Score 2: " << score2 << " \t";
		cout << "Sum: " << sum << " \t" << "Avg: " << average << endl;
	}
    ifs.close();

	cout << "...." << endl;
	cout << "Total number of students who has the average score > 80: ";
	cout << j << " students" << endl;

	return 0;
}