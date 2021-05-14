// Write a program that reads in an array of type int.
// Your program determines how many entries are used.
// The list should be sorted on entries in the first column, largest to smallest.
#include <iostream>
#include <iomanip>
using namespace std;

void sortAsc(int, int);

int main()
{
	int arr[] = {-12, 3, -12, 4, 1, 1, -12, 1, -1, 1, 2, 3, 4, 2, 3, -12};
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	int p = 0, q = 0;
	int newArr[p][q];
	int count;

	sortAsc(arr, arrSize);
	cout << arr;
	for (int i = 0; i < arrSize; i++) {
		for (int j = 1; j < arrSize; j++) {

		}
	}
}
void sortAsc(int *arr, int n) {
	int temp;
	for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if ( arr[j] > arr[j+1]) {
                temp = arr[j];
   				arr[j] = arr[j+1];
    			arr[j+1] = temp;
			}
		}
    }
}