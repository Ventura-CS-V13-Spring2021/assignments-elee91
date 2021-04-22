// Q1 Differece to sum of array
#include <iostream>
#include <iomanip>
using namespace std;

void printarray(int [], int);
int sumarray(int [], int &, int);

int main() {
	const int SIZE = 10;
	int numbers[10] = {5, 10, 75, 80, 25, 55, 95, 70, 60, 15};
	int diff[10];
	int sum = 0;

	printarray(numbers, SIZE);
	sumarray(numbers, sum, SIZE);\
	for (int i = 0; i < SIZE; i++) {
		diff[i] = sum - numbers[i];
	}
	printarray(diff, SIZE);
}
void printarray(int a[], int SIZE) {
	for (int i = 0; i < SIZE; i++)
		cout << setw(5) << a[i];
	cout << endl;
}
int sumarray(int a[], int &sum, int SIZE) {
	for (int i = 0; i < SIZE; i++)
		sum += a[i];
	cout << "Sum of array: " << sum << endl;
	return sum;
}