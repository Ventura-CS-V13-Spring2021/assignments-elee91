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
			fileWrite(ofs, difference);
	} while (difference >= 3);

	ofs.close();
	return 0;
}

int getRdnum(void) {
	int N;
	N = rand() % 10;
	return N;
}

int findMin (int n1, int n2, int n3) {
	if ( n1 <= n2 && n1 <= n3)
		return n1;
	if ( n2 <= n1 && n2 <= n3)
		return n2;
	if ( n3 <= n1 && n3 <= n2)
		return n3;
}

int findMax (int n1, int n2, int n3) {
	if ( n1 >= n2 && n1 >= n3)
		return n1;
	if ( n2 >= n1 && n2 >= n3)
		return n2;
	if ( n3 >= n1 && n3 >= n2)
		return n3;
}
int getDifference(int min, int max) {
	return max - min;
}

void fileWrite(ofstream &ofs, int difference) {
	ofs << difference << endl;
}

// To first generate 3 random numbers, i used the getRdnum function to create numbers between 0-9. The 3 numbers generated is then passed a parameter to findMax and findMin which I then used relational operaters to check whether they were the biggest or smallest number out of the 3. After finding the min and max, I then sent them to the getDifference function to measure its difference. This process is repeated in a loop when the difference is 3 or more. The difference is then recorded via fileWrite function.
// The main difficulty i had here was forgetting to add greater than or less than AND equal too. I ommited the equal to and often times the program would not record a min or max if two of the numbers were the same.
// Due to the wording of the question, I wasn't quite sure if I was suppose to record multiple differences or just 1.