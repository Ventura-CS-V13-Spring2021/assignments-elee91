//	Question 1
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {	
	int randN, max1, max2;
	int p;
	int i, j;

	cout << "Random numbers generated:" << endl;
	srand(time(0));
	for ( i = 0; i < 5; i++ ) {
		randN = rand() % 100;
		
		if ( i == 0 )
			max1 = max2 = randN;
		else {
			if ( max1 < randN ) {
				max1 = randN;
				p = i; // placeholder for position of max value
			}
		}
		cout << randN << " ";
		for ( j = 0; j < p; j++ ) {
			if ( max2 < randN && randN < max1 )
				max2 = randN;
				break;
		}
	}
	cout << endl;
	cout << max1 << " is greater than the previous number " << max2 << endl;
}

/*	Question 2
The key algorithm is using a for loop to generate multiple random numbers using the rand() function. I first had to generate 5 random numbers, henced I used the for loop. By creating 5 iterations, I began by using the first iteration, where i = 0, as the the default max value and used if statements to check whether the following rand num generated was going to be larger using conditional statements max1 < randN or max2 < randN.
When the loop has found the maximum number, I created a placeholder, p, to mark where in the iteration, the maximum value was. For example, if the maximum was the 4th number, p = i = 3. This allowed me to create another loop to check the previous numbers generated to find the second largest number
*/