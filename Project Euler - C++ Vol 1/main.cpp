/******************************************************************************
* Glenn Hook, Jan 2015
* Implementation of some simple projects from projecteuler.net 
******************************************************************************/

#include <iostream>
#include "mult_3_5.h"
#include "even_fibs.h"

using namespace std;


int main()
{
	char select;
	select = 'a';
	while (select != 'x')
	{
		cout << "Select program (x to exit)" << endl;
		cout << "a - multiples of 3 and 5" << endl;
		cout << "b - sum of even Fibonacci numbers less than 4 million" << endl;
		cin >> select;
		switch (select)
		{
		case 'a': mult_3_5();
			break;
		case 'b': even_fibs();
			break;
		}
	}

}