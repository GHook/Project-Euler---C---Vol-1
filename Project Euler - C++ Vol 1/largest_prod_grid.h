/******************************************************************************
* Glenn Hook, Jan 2015
* Implementation of some simple projects from projecteuler.net
* Problem 11 - This is a variation on the previous "largest_prod_series" sub.
* This will read in a 20x20 grid of numbers and find the largest product of
* 4 consecutive numbers in any direction - vertically, horizontally, or
* diagonally.
******************************************************************************/

#include <iostream>
#include <fstream>
#include <array>

using namespace std;



void largest_prod_grid()
{
	int next_number;
	int numbers[400];

	ifstream dig_file("largest_prod_series_digits.txt");
	int i = 0;
	while (dig_file.good() && i < 1000)
	{
		dig_file >> digit;
		digits[i] = digit - '0';
		i++;
	}
}