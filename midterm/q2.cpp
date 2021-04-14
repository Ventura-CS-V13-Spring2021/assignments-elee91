// Question 2
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int getRdnum(void);
int isGreater(int);

int main() {
    ofstream ofs;
    ofs.open("numbers.txt");
	if (ofs.fail()) {
		cerr << "File open error\n.";
		exit(0);
	}
	for (int i = 0; i < 10; i++) {

	}

    ofs.close();
}

int getRdnum(void) {
	int N;
	
	srand(time(0));
	N = (rand() % 50) + 1;
	return N;
}

int isGreater(int n) {
	int static previous = 0;
	
	if(n > previous)
		previous = n;
		return 1;
	if(n < previous)
		return 0;
}