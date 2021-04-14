// Question 2
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int getRdnum(void);
int isGreater(int);

int main() {
	int num;
	
    ofstream ofs;
    ofs.open("numbers.txt");
	if (ofs.fail()) {
		cerr << "File open error\n.";
		exit(0);
	}
	srand(time(0));
	cout << "The 10 numbers generated are: " << endl;
	for (int i = 0; i < 10; i++) {
		num = getRdnum();
		cout << num << " ";
		if (isGreater(num))
			if (i > 0)
				ofs << num << " ";
	}
	cout << endl;
    ofs.close();
}

int getRdnum(void) {
	int N;
	N = (rand() % 50) + 1;
	return N;
}

int isGreater(int n) {
	static int previous = n;
	if (n > previous) {
		previous = n;
		return 1;
	}
	if (n < previous) {
		previous = n;
		return 0;
	}
}