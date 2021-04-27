#include <iostream>
#include <iomanip>
#include "IntegerArray.hpp"
#include <cstdlib>
#include <ctime>
using namespace std;

int IntegerArray::getLength(void) const {
	return length;
}
void sortArray(int flag) {
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
	else if (flag == 1) {
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
void IntegerArray::fillUp(void) {
	srand(time(0));
	for (int i = 0; i < N; i++) {
		numbers[i] = rand() % 100;
	}
	length = N;
}
void getPrimenumber(void) const {

}
void IntegerArray::printAll(void) const {
	for (int i = 0; i < length; i++) {
		cout << setw(4) << numbers[i];
	}
	cout << endl;
}