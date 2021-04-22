// Q3 Binary cluster count of 0's
#include    <iostream>
using namespace std;
void makebinary(int [], int);
void printbinary(int [], int);
void count0cluster(int [], int);
int main()
{
    const int SIZE = 20;
    int     binary[SIZE];

    srand(time(0));
    makebinary(binary, SIZE);
    printbinary(binary, SIZE);
    count0cluster(binary, SIZE);
}
void makebinary(int num[], int size)
{
    for(int i = 0; i < size; i++)
    	num[i] = rand() % 2;
}
void printbinary(int num[], int size)
{
    for(int i = 0; i < size; i++)
    	cout << num[i] << " ";
    cout << endl;
}
void count0cluster(int bin[], int size)
{
	int cluster = 0;
	for (int i = 0; i < size; i++) {
		if (bin[i] == 0 && bin[i+1] == 1)
			cluster++;
	}
	if (bin[size-1] == 0)
		cluster++;
	cout << "Cluster Count : " << cluster << endl;
}
// I felt like this question was fairly easy. Since the binary clusters are separated by 1's, I used a for loop to count how many zero's have a 1 in their following index. 0's followed by another 0 are in the same cluster, hence my algorithm was to check for a 0 1 sequence (line 32). One complication I stumbled upon when I ran my code the first time was that my algorithm did not account for a 0 cluster at the end of the array, hence, I made a separate counter just to check for that and added it to the number of clusters determined from the loop.