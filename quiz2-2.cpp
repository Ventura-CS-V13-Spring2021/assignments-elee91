#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
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
			if ( max2 < randN && randN < max1 )
				max2 = randN;
				break;
		} while ( j < i );

		cout << randN << " ";
	}
	
	cout << "\nIn sequence of the random numbers generated," << endl;
	cout << max1 << " is greater than the previous number " << max2 << endl;
}

