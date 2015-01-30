/******************************************************************************
* Glenn Hook, Jan 2015
* Implementation of some simple projects from projecteuler.net
* Problem 8 - Find the largest product of 6 consecutive digits in a 1000
* digit number. Number will be read in from a text file.
* This has been modified from the original problem of finding the largest
* product of 13 conswcutive digits to save processing time.
******************************************************************************/

#include <iostream>
#include <fstream>
#include <array>

using namespace std;



void largest_prod_series()
{
	char digit;
	int digits[1000];
	
	ifstream dig_file("digits.txt");
	int i = 0;
	while (dig_file.good() && i < 1000)
	{
		dig_file >> digit;
		digits[i] = digit - '0';
		i++;
	}

	unsigned long int product, largest_product = 0;
	int start_digit;

	for (int j = 0; j < 1000; j++)
	{
		product = digits[j] * digits[j + 1] * digits[j + 2] * digits[j + 3] * digits[j + 4] * digits[j + 5];
		if (product > largest_product)
		{
			largest_product = product;
			start_digit = j;
		}
	}
	
	cout << "The largest product of 6 consecutive digits is " << largest_product << " using digits "
		<< digits[start_digit] << ", " << digits[start_digit+1] << ", " << digits[start_digit+2] << ", "
		<< digits[start_digit + 3] << ", " << digits[start_digit + 4] << ", " << digits[start_digit + 5] << "." << endl;

}
