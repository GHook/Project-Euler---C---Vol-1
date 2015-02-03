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
#include <sstream>
#include <string>

using namespace std;



void largest_prod_grid()
{
	int next_number;
	int numbers[400];

	ifstream input_file("largest_prod_grid_input.txt");
	string line;
	int i = 0;
	while (getline(input_file, line) && i < 400)
	{
		stringstream linestream(line);
		while (linestream >> next_number)
		{
			numbers[i] = next_number;
			i++;
		}
		
	}

	unsigned long int prod, largest_prod = 0;
	int a, b, c, d;

	for (int i = 0; i < 400; i++)
	{
		if (i % 10 < 7)
		{
			prod = numbers[i] * numbers[i + 1] * numbers[i + 2] * numbers[i + 3];
			if (prod > largest_prod)
			{
				largest_prod = prod;
				a = numbers[i];
				b = numbers[i + 1];
				c = numbers[i + 2];
				d = numbers[i + 3];
			}
		}
		if (i < 140)
		{
			prod = numbers[i] * numbers[i + 20] * numbers[i + 40] * numbers[i + 60];
			if (prod > largest_prod)
			{
				largest_prod = prod;
				a = numbers[i];
				b = numbers[i + 20];
				c = numbers[i + 40];
				d = numbers[i + 60];
			}
		}
		if (i % 10 < 7 && i < 140)
		{
			prod = numbers[i] * numbers[i + 21] * numbers[i + 42] * numbers[i + 63];
			if (prod > largest_prod)
			{
				largest_prod = prod;
				a = numbers[i];
				b = numbers[i + 21];
				c = numbers[i + 42];
				d = numbers[i + 63];
			}
		}
	}
	
	cout << "The largest product of 4 numbers in a row is " << largest_prod << ", using the numbers " << a << ", " << b << ", " << c << ", and " << d << "." << endl;
}