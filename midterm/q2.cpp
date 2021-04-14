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

// I began with outline my code with the pseudo code given in the problem. Similar to previous assignments, I had to first start with opening the file text and create a loop to generate 10 numbers. The numbers generated were in the getRdnum prototype function which created numbers between 1-50 using modulo. Each number generated was then passed through the isGreater function which first stores the random number generated and then checked with the next number generated in the loop. In order to check the preceding number, static int allowed us to access the previous data and be overwritten locally for the next number. Since we didn't want to store the first number, i>0 allows us to start at the second interation - or second number generated.
// Some issues I had at the end was that the first number kept printing. I tried to skip the first iteration, but then that would have not compared the 2nd number with the 1st and would start with comparing the 3rd number to 2nd. Then on line 25 i tried to use if (isGreater(num) && i>0) but it would print the 2nd number even if it wasnt bigger than the first. Hence, after separating them into a nested if statements, it correctly printed the desired results.