// Assignment 2-6
// Lab 2-4-1 Writing
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int randNum, N;
   
    ofstream ofs;
    ofs.open("data.txt");
    cout << "Enter the amount of random integers to generate : ";
    cin >> N;
    srand(time(0));
    for ( int i; i < N; i++ ) {
        randNum = rand() % 100;
        ofs << randNum << endl;
    }
    ofs.close();
}