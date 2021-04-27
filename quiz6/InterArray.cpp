#include <iostream>
#include <iomanip>
#include "IntegerArray.hpp"
#include <cstdlib>
#include <ctime>
using namespace std;

int IntegerArray::getLength(void) const {
	return length;
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
		numbers[i] = rand() % 100;
	}
	length = N;
}
void sortArray(int flag) {

}
void getPrimenumber(void) const{

}