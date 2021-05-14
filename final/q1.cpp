// You are given an array of integers that has the N positive integer elements 
// with increasing sorted order. 
// Find the element that has the greatest number of divisible elements
#include <iostream>
using namespace std;

int getNumDiv(int);

int main() 
{
	const int N = 6;
	int arr[N] = {1, 2, 4, 6, 10, 24};
	int num;
	int mostDiv = 0;

	for (int i = 0; i < N; i++) {
		
		num = getNumDiv(arr[i]);
	}
}

int getNumDiv(int n)
{
	int div = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			div++;
		}
	}
	return div;
}