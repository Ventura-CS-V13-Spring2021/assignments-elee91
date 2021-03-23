//	Question 5
#include <iostream>
using namespace std;

int main () {
	int begin, end;
    int i, j;

    do {
        cout << "Enter two integers in accending order : ";
        cin >> begin >> end;
    } while ( end < begin || begin < 1 || end < 1 );

    cout << "The following primes are in range [" << begin << ", " << end << "]: \n";
    for ( i = begin; i <= end; i++ ) {
        for ( j = 2; j <= (i/j); j++ ) 
            if ( !(i % j) ) break;
        if ( j > (i/j) ) 
			cout << i << " ";
    }
	cout << endl;
}

/*	Question 6
The do-while loop prompts the user to put the number from smallest to largest so that I can use consistent values for my for loop initialization and number of interations. If the user puts the larger number first, it will ask the user again  until they enter two integers from smallest to largest. This will be the range of values to check for primes.
The key algorithm was the nested for loop. To determine whether a number is prime or not, we would have to check for divisbility by all the numbers before it. For example if we were checking if 12 is prime, we would check if it is divisible by 2, 3, ... , 11. The for loop in line 16, allows us to check for all potential factors. We know that 12 is divisible by 2, 3, 4, and 6, so when looking at line 16, the condition j <= (i/j) allows us to check 12 % 2 and 12 % 3. Since 4 and 6 is a multiple of 2, we do not have to check that inside the loop. If there is no remainder (line 17), then it is not prime.
*/