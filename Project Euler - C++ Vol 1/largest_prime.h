/******************************************************************************
* Glenn Hook, Jan 2015
* Implementation of some simple projects from projecteuler.net
* Problem 3 - Return largest prime number that is also a factor of user
* provided integer (modification of specified problem, which gives a static
* integer, also modified for length of input integer - long long takes too long)
******************************************************************************/

#include <iostream>

using namespace std;

bool is_prime(unsigned long long int i)
{
	if (i <= 3)
		return i > 1;
	else if (i % 2 == 0 || i % 3 == 0)
		return false;
	else
	{
		for (unsigned short j = 5; j * j <= i; j += 6)
		{
			if (i % j == 0 || i % (j + 2) == 0)
				return false;
		}
		return true;
	}

}

void largest_prime()
{
	unsigned long long int input;
	unsigned long long int largest_prime = 1;
	bool largest_prime_found = false;
	cout << "Enter an integer less than 4 billion" << endl;
	cin >> input;
	for (unsigned long long int i = (input + 1) / 2; i > 1; i--)
	{
		if (input % i == 0)
			if (is_prime(i))
			{
				largest_prime = i;
				break;
			}
		if (largest_prime_found)
			break;
	}
	cout << "The largest factor of " << input << " that is also a prime number is " << largest_prime << endl;
}