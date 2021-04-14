// Question 3
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

getRdnum
int findMin (int, int, int)
int findMax (int, int, int)
getDifference
fileWrite

int main() {

	ofstream ofs;
    ofs.open("question3.txt");
	srand(time(0));
	for (i = 0; i < 3; i++)
}

int getRdnum(void) {
	int N;
	N = rand() % 10;
	return N;
}

void fileWrite(ofstream &ofs, int difference) {
	ofs << difference << endl;
}