// Assignment 1-2
// Program that calculates the temperature from C to F
#include <iostream>
using namespace std;

int main()
{
    double fahrenheit, celsius;

    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = 9.0 / 5.0 * celsius + 32;

    cout << celsius << " Celsius is " << fahrenheit << " Fahrenheit.\n";
    return 0;
}
