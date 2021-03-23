// Assignment 2-6
// Lab 2-4-2 Reading
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int randNum, min, max;
    int N = 0, sum = 0;
    double average;

    ifstream ifs;

    ifs.open("data.txt");
    
    while ( ifs >> randNum ) {
        if ( N == 0 )
            min = max = randNum;
        else {
            if ( randNum < min )
                min = randNum;
            if ( max < randNum )
                max = randNum;
            }
        sum += randNum;
        N++;
    }
    average = static_cast<double>(sum) / N;

    cout << "Total number of integers : " << N << endl;
    cout << "Sum : " << sum << endl;
    cout << "Min : " << min << endl;
    cout << "Max : " << max << endl;
    cout << "Average : " << average << endl;
    ifs.close();
}