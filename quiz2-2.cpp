#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int randN, max1, max2;
	srand(time(0));
	for ( int i; i < 5; i++ ) {
		randN = rand() % 100;
		if ( i == 0 )
			max1 = max2 = randN;
		else {
			if ( randN > max1 )
				max1 = randN;
			if ( randN > max2 && randN < max1 )
				max2 = randN;
		}
		cout << randN << " ";
	}
	cout << "\nIn sequence of the random numbers generated," << endl;
	cout << max1 << " is greater than the previous number " << max2 << endl;
}

