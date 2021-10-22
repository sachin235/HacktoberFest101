/*
	Sample Output:
	1
	2 2 
	3 3 3
	4 4 4 4
	5 5 5 5 5
*/
#include <iostream>
using namespace std;

int main()
{
	int i, j;
	// Increase the rows to get more bigger pattern ... 
	int rows = 5;
    	for( i = 1; i <= rows; i++)
    	{
        	for( j = 1; j <= i; j++)
        	{
            		cout << i << " ";
        	}
        	cout << "\n";
    	}

	return 0;
}
