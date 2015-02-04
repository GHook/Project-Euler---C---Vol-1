/******************************************************************************
* Glenn Hook, Jan 2015
* Implementation of some simple projects from projecteuler.net 
******************************************************************************/

#include <iostream>
#include "mult_3_5.h"
#include "even_fibs.h"
#include "largest_prime.h"
#include "largest_pal_prod.h"
#include "largest_prod_series.h"
#include "spec_pyth_trip.h"
#include "largest_prod_grid.h"
#include "lattice_paths.h"

using namespace std;


int main()
{
	char select;
	select = 'a';
	while (select != 'x')
	{
		cout << "**************************" << endl;
		cout << "Select program (x to exit)" << endl;
		cout << "**************************" << endl;
		cout << "a - multiples of 3 and 5" << endl;
		cout << "b - sum of even Fibonacci numbers less than 4 million" << endl;
		cout << "c - largest factor of given number that is prime" << endl;
		cout << "d - largest product of 2 3 digit integers that is a palindrome" << endl;
		cout << "e - largest product of 6 consecutive digits in a 1000 digit number" << endl;
		cout << "f - Pythagorean triplet that sums to 1000" << endl;
		cout << "g - largest product of 4 consecutive numbers in a grid" << endl;
		cout << "h - number of lattice paths in an w x h grid" << endl;
		cin >> select;
		switch (select)
		{
		case 'a': mult_3_5();
			break;
		case 'b': even_fibs();
			break;
		case 'c': largest_prime();
			break;
		case 'd': largest_pal_prod();
			break;
		case 'e': largest_prod_series();
			break;
		case 'f': spec_pyth_trip();
			break;
		case 'g': largest_prod_grid();
			break;
		case 'h': lattice_paths();
			break;
		}
	}

}