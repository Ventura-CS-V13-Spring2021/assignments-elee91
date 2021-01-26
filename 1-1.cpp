// Assignment 1-1 
// Program that calculates amount of generated ticket sales
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    const double rateA = 15.00;
    const double rateB = 12.00;
    const double rateC = 9.00;

    int ticketA, ticketB, ticketC;
    double income;

    cout << "Enter the amount of Class A tickets sold: ";
    cin >> ticketA;
    cout << "Enter the amount of Class B tickets sold: ";
    cin >> ticketB; 
    cout << "Enter the amount of Class C tickets sold: ";
    cin >> ticketC;

    income = (rateA * ticketA) + (rateB * ticketB) + (rateC * ticketC);

    cout << "The amount of income generated from ticket sales is: $ ";
    cout << showpoint << setprecision(2) << fixed << income << endl;
    return 0;
}
