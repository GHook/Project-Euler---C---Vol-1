/******************************************************************************
* Glenn Hook, Feb 2015
* Implementation of some simple projects from projecteuler.net
* Problem 9 - Find a Pythagorean triplet (a^2 + b^2 = c^2) where the 3
* numbers sum to 1000
******************************************************************************/

#include <iostream>

using namespace std;

void spec_pyth_trip()
{
	bool found = false;
	int a, b, c;
	for (int i = 1; i < 999; i++)
	{
		for (int j = 1; j < 999; j++)
		{
			for (int k = 1; k < 999; k++)
			{
				if (i + j + k == 1000)
				{
					if (i*i + j*j == k*k)
					{
						found = true;
						a = i;
						b = j;
						c = k;
						break;
					}
				}
				if (found)
					break;
			}
			if (found)
				break;
		}
		if (found)
			break;
	}
	cout << "The special Pythagorean triplet that sums to 1000 is " << a << ", " << b << ", and " << c << "." << endl;
	cout << a << "^2 + " << b << "^2 = " << c << "^2" << endl;
}