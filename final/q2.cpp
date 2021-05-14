// Write a program that reads in an array of type int.
// Your program determines how many entries are used.
// The list should be sorted on entries in the first column, largest to smallest.
#include <iostream>
#include <iomanip>
using namespace std;

void sortAsc(int *, int);

int main()
{
	int arr[] = {-12, 3, -12, 4, 1, 1, -12, 1, -1, 1, 2, 3, 4, 2, 3, -12};
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	int count;

	cout << "For the array values " << endl;
	sortAsc(arr, arrSize); // sorts array from -inf to +inf
	
	cout << "the output should be" << endl;
	cout << setw(5) << right << "N" << setw(5) << left << "Count" << endl;
	for (int i = 0; i < arrSize; i++) {
		count = 0;
		if (arr[i] == arr[i+1]) {
			for (int j = i+1; j < arrSize; j++) {
				if (arr[i] == arr[j]) {
					count++;
				}
				else if (arr[i] != arr[j]) {
					break;
				}
			}
			cout << setw(5) << right << arr[i] << setw(5) << left << count << endl;
		}
		else if (arr[i] == arr)
			continue;
		
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