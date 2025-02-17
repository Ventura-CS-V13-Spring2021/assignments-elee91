// Q2 Count duplicated numbers between arrays
#include    <iostream>
#include    <cstdlib>
#include    <ctime>
using namespace std;
void makearray(int [], int);
void printarray(int [], int);
void findmatchnum(int [], int, int [], int);
int main()
{
	const   int SIZE1 = 10;
    const   int SIZE2 = 5;
    int     num1[SIZE1];
    int     num2[SIZE2];

    srand(time(0));
    makearray(num1, SIZE1);
    printarray(num1, SIZE1);
    makearray(num2, SIZE2);
    printarray(num2, SIZE2);
    findmatchnum(num1, SIZE1, num2, SIZE2);
}
void makearray(int num[], int size)
{
    for(int i = 0; i < size; i++)
        num[i] = rand() % 10;
}
void printarray(int num[], int size)
{
    for(int i = 0; i < size; i++)
        cout << num[i] << "\t";
    cout << endl;
}
void findmatchnum(int num1[], int size1, int num2[], int size2)
{
	int match = 0;
	int dup[match];
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (num1[i] == num2[j]) {
				dup[match++] = num1[i];
				break;
			}
		}
	}
	cout << "Duplicated elements : ";
	printarray(dup, match);
    cout << "Number of matched elements : " << match << endl;
}
// I created a nested for loop to match the numbers between 1st and 2nd array. By creating a variable match, I am able to count how many duplicates there were. I also created an array to help store duplicated variables from the match. The biggest obstacle I had from doing this problem was creating an algorithm to check the new array of duplicates so that I would only be matched once.