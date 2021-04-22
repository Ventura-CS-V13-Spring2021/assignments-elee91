// Assignment 5-2 
// Function that finds min and max in array
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void makearray(int [], int);
void printarray(int [], int);
void findminmax(int [], int);

int main() {
	const int N = 10;
	int numbers[N] = {};
	srand(time(0));
	makearray(numbers, N);
	printarray(numbers, N);
	findminmax(numbers, N);
}
void makearray(int n[], int N) {
	for (int i = 0; i < N; i++) {
		n[i] = rand() % 100;
	}
}
void printarray(int n[], int N) {
	for (int i = 0; i < N; i++) {
		cout << n[i] << " ";
	}
	cout << endl;
}
void findminmax(int n[], int N) {
	int min, max;
	min = max = n[0];
	for (int i = 1; i < N; i++) {
		if (n[i] < min)
			min = n[i];
		if (n[i] > max)
			max = n[i];
	}
	cout << "Min: " << min <<endl;
	cout << "Max: " << max<< endl;
}