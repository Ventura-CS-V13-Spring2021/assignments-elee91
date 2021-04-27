#include <iostream>
#include <iomanip>
#include "IntegerArray.hpp"
#include <cstdlib>
#include <ctime>
using namespace std;

int IntegerArray::getLength(void) const {
	return length;
}
int IntegerArray::getLastelm(void) const {
	return numbers[length];
}
void IntegerArray::printAll(void) const {
	for (int i = 0; i < length; i++) {
		cout << setw(4) << numbers[i];
	}
	cout << endl;
}
void IntegerArray::fillUp(void) {
	srand(time(0));
	for (int i = 0; i < N; i++) {
		numbers[i] = rand() % 101;
	}
	length = N;
}
void IntegerArray::sortAsc(void) {
	int temp;
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
void IntegerArray::removeLastelm(void) {
	length--;
	cout << endl;
}
void IntegerArray::appendElement(int v) {
	numbers[length++] = v; // index = length-1 
	cout << endl;
}