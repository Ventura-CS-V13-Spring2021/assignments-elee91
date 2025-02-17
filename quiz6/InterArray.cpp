#include <iostream>
#include <iomanip>
#include "IntegerArray.hpp"
#include <cstdlib>
#include <ctime>
using namespace std;

int IntegerArray::getLength(void) const {
	return length;
}
void IntegerArray::fillUp(void) {
	srand(time(0));
	for (int i = 0; i < N; i++) {
		numbers[i] = rand() % 100;
	}
	length = N;
}
void IntegerArray::printAll(void) const {
	for (int i = 0; i < length; i++) {
		cout << setw(4) << numbers[i];
	}
	cout << endl;
}
void IntegerArray::sortArray(int flag) {
	int temp;
	if (flag == 0) {
		for (int i = 0; i < length-1; i++) {
			for (int j = 0; j < length-i-1; j++) {
				if ( numbers[j] > numbers[j+1]) {
					temp = numbers[j];
					numbers[j] = numbers[j+1];
					numbers[j+1] = temp;
				}
			}
		}
	}
	else {
		for (int i = 0; i < length-1; i++) {
			for (int j = 0; j < length-i-1; j++) {
				if ( numbers[j] < numbers[j+1]) {
					temp = numbers[j];
					numbers[j] = numbers[j+1];
					numbers[j+1] = temp;
				}
			}
		}
	}
}
int IntegerArray::getPrimenumbers(void) const {
	int count = 0;
	bool isPrime = true;

	for (int i = 0; i < length; i++) {
		if (numbers[i] == 0 || numbers[i] == 1) {
			continue;
		} else if (numbers[i] == 2) {
			count++;
		} else {
			for (int j = 2; j < (numbers[i]/2); j++) {
				if (numbers[i] % j == 0) {
					isPrime = 0;
					break;
				}
				else 
					isPrime = 1;
			}
			if (isPrime == 1) {
				count++;
			}
		}
	}
	return count;
}