// Question 2
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int getRdnum (void);
int isGreater(int);

int main() {
    ofstream ofs;
    ofs.open("numbers.txt");
	if ( ofs.fail()) {
		cerr << "File open error\n.";
		exit(0);
	}
	for (int i = 0; i < 10; i++) {

	}

    ofs.close();
}