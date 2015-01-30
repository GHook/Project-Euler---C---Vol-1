/******************************************************************************
* Glenn Hook, Jan 2015
* Implementation of some simple projects from projecteuler.net
* Problem 4 - Find the largest product of 2 3 digit numbers that is a 
* palindrome.
******************************************************************************/

#include <iostream>

using namespace std;

bool is_pal(unsigned long int n)
{
	unsigned long int dig, num, rev = 0;
	num = n;
	while (num > 0)
	{
		dig = num % 10;
		num /= 10;
		rev = rev * 10 + dig;
	}
	if (rev == n)
		return true;
	else
		return false;
}


void largest_pal_prod()
{
	unsigned long int largest_pal, a, b;
	bool pal_found = false;
	for (unsigned long int i = 999; i > 100; i--)
	{
		for (unsigned long int j = 999; j > 100; j--)
		{
			if (is_pal(i * j))
			{
				largest_pal = i * j;
				a = i;
				b = j;
				cout << "pal found: " << i * j << endl;
				pal_found = true;
				break;
			}
			if (pal_found)
				break;
		}
	}
	cout << "The largest palindromic product of 2 3-digit numbers is: " << largest_pal << "(" << a << "*" << b << ")" << endl;
}