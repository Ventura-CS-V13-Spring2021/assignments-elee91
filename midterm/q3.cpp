// Question 3
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int getRdnum(void);
int findMin (int, int, int);
int findMax (int, int, int);
int getDifference(int, int);
void fileWrite(ofstream &, int);

int main() {
	int num1, num2, num3;
	int min, max, difference;

	ofstream ofs;
    ofs.open("question3.txt");
	srand(time(0));

	do {
		num1 = getRdnum();
		num2 = getRdnum();
		num3 = getRdnum();
		min = findMin(num1, num2, num3);
		max = findMax(num1, num2, num3);
		difference = getDifference(min, max);
	} while (difference >= 3);

	fileWrite(ofs, difference);
	ofs.close();

	cout << "min: " << min << endl;
	cout << "max: " << max << endl;
}

int getRdnum(void) {
	int N;
	N = rand() % 10;
	return N;
}

int findMin (int n1, int n2, int n3) {

}

int findMax (int n1, int n2, int n3) {
	if ( n1 > n2 && n1 > n3)
		return n1;
	if ( n2 > n1 && n2 > n3)
		return n2;
	if ( n3 > n1 && n3 > n2)
		return n3;
}
int getDifference(int min, int max) {
	return max - min;
}

void fileWrite(ofstream &ofs, int difference) {
	ofs << difference << endl;
}