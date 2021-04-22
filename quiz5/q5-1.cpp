// Q1 Differece to sum of array
#include <iostream>
#include <iomanip>
using namespace std;

void printarray(int [], int);
void sumarray(int [], int &, int);

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
void sumarray(int a[], int &sum, int SIZE) {
	for (int i = 0; i < SIZE; i++)
		sum += a[i];
	cout << "Sum of array: " << sum << endl;
}
// This question was fairly easy. I made two prototype functions to print the array (line 22) and to take the sum of the numbers array (line 27). With the sumarry function, I created a for loop to add each index array to each other using the addition operator (line 29). Using a reference variable, I stored this into the variable sum in the main function. After finding the sum, to answer the problem, I used the difference of the sum of the numbers array and each individual index to the new array diff using a for loop to access each indices.