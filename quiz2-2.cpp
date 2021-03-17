#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int randN, max1, max2;
	srand(time(0));
	for ( int i = 0; i < 5; i++ ) {
		randN = rand() % 100;
		if ( i == 0 )
			max1 = max2 = randN;
		do {
			max1 = randN;
		} while ( max1 < randN );
		do {
			max2 = randN;
		} while ( max2 < max1 );
		cout << randN << " ";
	}
	cout << "\nIn sequence of the random numbers generated," << endl;
	cout << max1 << " is greater than the previous number " << max2 << endl;
}

