// Q1 Differece to sum of array
#include <iostream>
#include <iomanip>
using namespace std;

void printarray(int [], int);
int sum(int [], int);

int main() {
	const int SIZE = 10;
	int numbers[10] = {5, 10, 75, 80, 25, 55, 95, 70, 60, 15};
	int diff[10];
	int sum = 0;

	
}
void printarray(int n[], int SIZE) {
	for (int i = 0; i < SIZE; i++)
		cout << setw(4) << n[i];
	cout << endl;
}
int sum(int n[], int SIZE) {
	int sum = 0;
	for (int i = 0; i < SIZE; i++) {
		sum += n[i];
	cout << "Sum of array: " << endl;
	return sum;
}