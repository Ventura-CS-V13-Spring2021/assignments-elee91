#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main()
{

// Problem 1	
	int randN, max1, max2;
	int p;
	int i, j;

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
	cout << "\nIn sequence of the random numbers generated," << endl;
	cout << endl;
	cout << max1 << " is greater than the previous number " << max2 << endl;


/*
// Problem 3
	int num1, num2, num3;
	
	do {
		cout << "Input 3 integers between [0-99]: ";
		cin >> num1 >> num2 >> num3;
	} while ( num1 < 0 || num1 > 99 || num1 < 0 || num1 > 99 || num1 < 0 || num1 > 99);

	if ( num1 == num2 && num1 == num3 ) {
		cout << "All numbers are duplicates: " << endl;
		cout << num1 << " " << num2 << " " << num3  << endl;
	}
	else if ( num1 == num2 || num1 == num3 || num2 == num3 ) {
		cout << "There are two duplicated numbers: " << endl;
		if ( num1 == num2 )
			cout << num1 << " " << num2 << endl;
		if ( num1 == num3 )
			cout << num1 << " " << num3 << endl;
		if ( num2 == num3 )
			cout << num2 << " " << num3 << endl;
	}
	else
		cout << "There is no duplicated number." << endl;
	return 0;
*/

/*
// Problem 5 
	int begin, end;
    int i, j;

    do {
        cout << "Enter two integers in accending order : ";
        cin >> begin >> end;
    } while ( end < begin || begin < 1 || end < 1 );

    cout << "The following primes are in range [" << begin << ", " << end << "]: \n";
    for ( i = begin; i <= end; i++ ) {
        for ( j = 2; j < (i/j); j++ ) 
            if ( !(i % j) ) break;
        if ( j > (i/j) ) cout << i << " ";
    }
*/

/*
// Problem 7
	int N, id;
	string emplName, deptName;
	double salary;

/*	// Writing Program
    ofstream ofs;
    ofs.open("employee.txt");

    cout << "Enter the number of employees: ";
    cin >> N;
	ofs << N << endl;
	cout << "Input using spaces: \nEmployeeID EmployeeName Department Salary" << endl;
	for (int i; i < N; i++) {
		cin >> id >> emplName >> deptName >> salary;
		ofs << id << " ";
		ofs << emplName << " ";
		ofs << deptName << " ";
		ofs << salary << endl;
    }
    ofs.close();
*/

/*	// Reading Program
	int sum = 0;
	double average;
	ifstream ifs;
    ifs.open("employee.txt");

	ifs >> N;
	cout << "ID\t\t  Name\t    Department\tSalary" << endl;
	for ( int j; j < N; j++ ) {
		ifs >> id >> emplName >> deptName >> salary;
		cout << id << "  " << emplName << "\t\t" << deptName << "\t\t" << salary << endl;
		sum += salary;
	}
	average = static_cast<double>(sum) / N;

	cout << "\t\t\t Total: " << sum << "\tAverage: " << average << endl;
   
    ifs.close();
*/
}