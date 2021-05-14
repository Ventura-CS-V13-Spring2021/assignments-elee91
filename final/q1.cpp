// You are given an array of integers that has the N positive integer elements 
// with increasing sorted order. 
// Find the element that has the greatest number of divisible elements
#include <iostream>
using namespace std;

int getNumDiv(int);

int main() 
{
	const int N = 6;
	int arr[N] = {14, 18, 19, 48, 6, 25};
	int num, j;
	int mostDiv = 0;

	cout << "In the array [";
	for (int i = 0; i < N; i++) {
		cout << " " << arr[i];
		num = getNumDiv(arr[i]);
		if (i == 0) { mostDiv = num; } // intializes first array element as greatest
		else {
			if ( num > mostDiv ) { // replaces previous max element
				mostDiv = num;
				j = i; // placeholder for array
			}
		}
	}
	cout << " ]" << endl;
	cout << arr[j];
	cout << " has the most (" << mostDiv << ") divisible elements" << endl;
	return 0;
}

int getNumDiv(int n)
{
	int div = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) { div++; }
	}
	return div;
}