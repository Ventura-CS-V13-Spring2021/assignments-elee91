//	Question 3
#include <iostream>
using namespace std;

int main() {
	int num1, num2, num3;
	
	do {
		cout << "Input 3 integers between [0-99]: ";
		cin >> num1 >> num2 >> num3;
	} while ( num1 < 0 || num1 > 99 || num2 < 0 || num2 > 99 || num3 < 0 || num3 > 99);

	if ( num1 == num2 && num1 == num3 ) {
		cout << "All numbers are duplicates: " << endl;
		cout << num1 << " " << num2 << " " << num3  << endl;
	}
	else if ( num1 == num2 || num1 == num3 || num2 == num3 ) {
		cout << "There are two duplicated numbers: " << endl;
		if ( num1 == num2 )
			cout << num1 << " " << num2 << endl;
		if ( num1 == num3 )
			cout << num1 << " " << num3 << endl;
		if ( num2 == num3 )
			cout << num2 << " " << num3 << endl;
	}
	else
		cout << "There is no duplicated number." << endl;
	return 0;
}

/* Question 4
Similar to homework 2-2. If user inputted values out of range 0-99, the do-while loop would repeatedly prompt user re-enter values.
If all numbers are same, 2 comparisons are needed such that if number 1 is same as 2 and 3, by equivalence, 2 and 3 are the same. 1 = 2 = 3.
If two numbers are the same, 3 comparisons were needed. By checking if the numbers were all duplicates first and using the && operatorant, we only needed to check for duplicates among two other numbers. The else-if checked for other conditions in which the first one is not true (all numbers are the same), therefore we just checked if number 1 was same as 2 or 3, etc. 1 = 2? 1 = 3? 2 = 3?
Other students may have similar codes depending on the number of conditions they put. For example if students wanted wanted to check for no duplicated number, they might have used the != condition
*/