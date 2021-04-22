// Assignment 5-2 
// Function that finds min and max in array
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void makearray(double [], int);
void printarray(double [], int);
int outOfOrder(double [], int);

int main() {
	const int N = 10;
	double numbers[N] = {};
	int verify;
	srand(time(0));
	makearray(numbers, N);
	printarray(numbers, N);
	verify = outOfOrder(numbers, N); 
	if (verify == -1)
		cout << "The array has sorted order\n";
	else
		cout << "Index " << verify << " is out of order\n";
}
void makearray(double n[], int N) {
	for (int i = 0; i < N; i++) {
		n[i] = (double)rand()/RAND_MAX * 100;
	}
}
void printarray(double n[], int N) {
	for (int i = 0; i < N; i++) {
		cout << n[i] << "\t";
	}
	cout << endl;
}
int outOfOrder(double n[], int N) {
	for (int i = 1; i < N; i++) {
		if (n[i] < n[i-1])
			return i;
	}
	return -1;
}