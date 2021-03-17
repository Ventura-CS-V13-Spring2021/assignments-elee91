#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int randN, max1, max2;
	int flag = 0;

	srand(time(0));
	for ( int i; i < 5; i++ ) {
		randN = rand() % 100;
		if ( i == 0 )
			max1 = max2 = randN;
		else {
			if ( max1 < randN )
				max1 = randN;
				flag = i;
			for ( int j; j < flag; j++ ) {
				if ( max2 < randN )
					max2 = randN;
				else break;
			}
		}
		cout << randN << " ";
	}

	cout << "\nIn sequence of the random numbers generated," << endl;
	cout << max1 << " is greater than the previous number " << max2 << endl;
}

