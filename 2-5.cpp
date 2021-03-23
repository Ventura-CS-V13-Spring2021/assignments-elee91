// Assignment 2-5
// Find list of prime numbers in given range
#include <iostream>
using namespace std;

int main()
{
    int begin, end;
    int i, j;

    do {
        cout << "Enter two positive integers in accending order : ";
        cin >> begin >> end;
    } while ( end < begin || begin < 1 || end < 1 );

    cout << "The following primes are in range [" << begin << ", " << end << "]: \n";
    for ( i = begin; i <= end; i++ ) {
        for ( j = 2; j <= (i/j); j++ ) 
            if ( !(i % j) ) break;
        if ( j > (i/j) ) cout << i << " ";
    }
	cout << endl;
    return 0;
} 
