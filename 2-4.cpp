// Assignment 2-4
// Print Alphabets with ASCII code
#include <iostream>
using namespace std;

int main()
{
	int i = 'A';
	int j = 'Z';

	while ( i <= j )
	{
		cout << static_cast<char>(i) << " ";
		i++;
		if ( i % 5 == 0 )
			cout << "\n";
	}
	return 0;
}
