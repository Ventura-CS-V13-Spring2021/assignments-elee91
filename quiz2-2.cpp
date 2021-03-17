#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
// Problem 1	
	int randN, max1, max2;
	int i, j = 0;

	srand(time(0));
	for ( i = 0; i < 5; i++ ) {
		randN = rand() % 100;
		
		if ( i == 0 )
			max1 = max2 = randN;	// initializes values for our 'max'
		else { // i > 0
			if ( max1 < randN ) // assigns new max value if new rand in seq is bigger
				max1 = randN;
		}
		do {
			if ( randN >= max1 || j >= i )
				break;
			else {
				max2 = randN;
				j++;
			}
		} while ( max2 < randN );

		cout << randN << " ";
	}
//	cout << "\nIn sequence of the random numbers generated," << endl;
	cout << max1 << " is greater than the previous number " << max2 << endl;
*/


// Problem 3
	int num1, num2, num3;
	
	do {}
		cout << "Input 3 integers between [0-99] : ";
		cin >> num1 >> num2 >> num3;
	while ( num1 < 0 || num1 > 99 || num1 < 0 || num1 > 99 || num1 < 0 || num1 > 99);

	if ( num1 == num2 && num1 == num3 )
		cout << "All numbers are the same." << endl;
	else if ( num1 == num2 || num1 == num3 || num2 == num3 )
		cout << "There are two duplicated numbers." << endl;
	else
		cout << "There is no duplicated number." << endl;
	return 0;


}

