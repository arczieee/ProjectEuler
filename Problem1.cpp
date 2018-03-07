/* If we list all the natural number below 10 that are multiples of 3 or 5,
we get 3,5,6 and 9. The sum of these multpiles is 23. Find the sum of all the multpiles
of 3 or 5 below 1000.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int sum = 0;

int main()
{
	for (int i = 1; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	
	cout << sum << endl;
	system("pause");
}
