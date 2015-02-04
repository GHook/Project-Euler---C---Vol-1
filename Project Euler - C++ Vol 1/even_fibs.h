/******************************************************************************
* Glenn Hook, Jan 2015
* Implementation of some simple projects from projecteuler.net
* Problem 2 - Return sum of even numbers in Fibonacci sequence less than 
* 4 million, starting with 1 and 2
******************************************************************************/

#include <iostream>

using namespace std;

void even_fibs()
{
	long int sum = 0;
	int a = 1;
	int b = 2;
	int c = 3;
	while (c < 4000000)
	{
		//if (a % 2 == 0)
			//sum += a;
		if (b % 2 == 0)
			sum += b;
		c = a + b;
		a = b;
		b = c;
	}
	cout << "The sum of the even Fibonacci numbers less than 4 million is " << sum << endl;
}