//Asignment 6-1
// Class to manage array structures
#include <iostream>
#include "IntegerArray.hpp"
using namespace std;

int main() {
	IntegerArray N;
	N.fillUp();
	N.printAll();
	cout << "Current length is " << N.getLength() << endl;

	cout << "After sorting: \n";
	N.sortAsc();
	N.printAll();

	cout << "Removing the last element: ";
	N.removeLastelm();
	N.printAll();
	cout << "Current length is " << N.getLength() << endl;

	cout << "Append the element ";
	N.appendElement(100);
	N.printAll();
	cout << "Current length is " << N.getLength() << endl;
}