// Assignment 5-1 
// Function that calculates a summation and average of all elements in array
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	const int N = 10;
	int numbers[N] = {};
	int sum = 0;
	double average;

	srand(time(0));
	for (int i = 0; i < N; i++) {
		numbers[i] = rand() % 100;
		cout << numbers[i] << " ";
		sum += numbers[i];
	}
	average = static_cast<double>(sum) / N;
	cout << endl << "Sum: " << sum << endl;
	cout << "Average: " << average << endl;
}