#include <iostream>
#include "IntegerArray.hpp"
using namespace std;

int main()
{
    IntegerArray N;
	
    N.fillUp();
    N.printAll();
    cout << "Current length is " << N.getLength() << endl;

    cout << "After sorting with ascending order : \n ";
    N.sortArray(0);
    N.printAll();

    cout << "After sorting with descending order: \n ";
    N.sortArray(1);
    N.printAll();
	
    cout << "The number of prime numbers " << N.getPrimenumbers() << endl;
}