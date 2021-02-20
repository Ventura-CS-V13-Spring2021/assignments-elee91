// Assignment 2-1
// Finding the greatest value among the user inputs
#include <iostream>
using namespace std;

int main()
{
	int number1, number2, number3;
	int max_number;
	
	cout << "Enter three integer values : ";
	cin >> number1 >> number2 >> number3;
	if ( number1 > number2 )
		max_number = number1;
	if ( number1 > number3 )
		max_number = number1;
	if ( number2 > number1 )
		max_number = number2;
	if ( number2 > number3 )
		max_number = number2;
	if ( number3 > number1 )
		max_number = number3;
	if ( number3 > number2 )
		max_number = number3;
	cout << "The greatest value is: " << max_number << endl;
	return 0;
}