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

// First I wanted to create a loop according to the number of students (N=10) which read each students' name and two score. After recording the two scores in separate variables, I then calculated the sum, and average (the sum had to be static_casted to double for decimals) and then rewrite them simultaneously inside the loop function. Using a conditional if statement, for each sum that was > 80, I used another variable j, to increment itself when condition was true. In this example, all students had average scores above 80.