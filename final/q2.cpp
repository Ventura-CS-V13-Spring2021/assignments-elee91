// Question 2
// Write a program that reads in an array of type int.
// Your program determines how many entries are used.
// The list should be sorted on entries in the first column, largest to smallest.
#include <iostream>
#include <iomanip>
using namespace std;

void sortDesc(int *, int);
void printArray(int *, int);

int main()
{
	int arr[] = {-12, 3, -12, 4, 1, 1, -12, 1, -1, 1, 2, 3, 4, 2, 3, -12};
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	int count;

	cout << "For the array values " << endl;
	printArray(arr, arrSize);
	sortDesc(arr, arrSize); // sort array function from +inf to -inf
	
	cout << "the output should be" << endl;
	cout << setw(3) << right << "N" << setw(3) << left << " Count" << endl;
	for (int i = 0; i < arrSize; i++) {
		count = 1;
		if (arr[i] == arr[i-1] && i > 0) {
			continue;
		}
		for (int j = i+1; j < arrSize; j++) {
			if (arr[i] == arr[j]) {
				count++;
			} // if index is same as next element, count++
			else if (arr[i] != arr[j]) {
				break;
				i = j;
			} // if next element is different, break count loop
		}
		cout << setw(3) << right << arr[i] << setw(3) << left << " " << count << endl;
	}
}
void sortDesc(int *arr, int n) {
	int temp;
	for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if ( arr[j] < arr[j+1]) {
                temp = arr[j];
   				arr[j] = arr[j+1];
    			arr[j+1] = temp;
			}
		}
    }
}
void printArray(int *arr, int n) {
	for (int i = 0; i < n; i++) // print array
		cout << arr[i] << " ";
	cout << endl;
}