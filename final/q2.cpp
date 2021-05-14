// Write a program that reads in an array of type int.
// Your program determines how many entries are used.
// The list should be sorted on entries in the first column, largest to smallest.
#include <iostream>
#include <iomanip>
using namespace std;

void sortArray();

int main()
{
	int arr[] = {-12, 3, -12, 4, 1, 1, -12, 1, -1, 1, 2, 3, 4, 2, 3, -12};
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	cout << arrSize;


}