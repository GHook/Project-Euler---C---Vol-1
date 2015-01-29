/******************************************************************************
* Glenn Hook, Jan 2015
* Implementation of some simple projects from projecteuler.net
* Problem 1 - Return sum of all multiples of 3 or 5 less than 1000
******************************************************************************/

#include <iostream>

using namespace std;

void mult_3_5()
{
	long int sum = 0;
	for (int i = 1; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	cout << "The sum of the multiples of 3 or 5 up to 1000 is " << sum << endl;
}