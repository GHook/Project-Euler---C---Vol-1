/******************************************************************************
* Glenn Hook, Feb 2015
* Implementation of some simple projects from projecteuler.net
* Problem 15 - Find the number of paths from the top left corner of a 20 x 20
* grid to the bottom right corner, moving only right and down
******************************************************************************/

#include <iostream>
#include <array>

using namespace std;

void lattice_paths()
{
	unsigned long long int paths[21][21];
	for (int i = 0; i < 21; i++)
	{
		paths[i][0] = 1;
		paths[0][i] = 1;
	}

	for (int i = 1; i < 21; i++)
	{
		for (int j = 1; j < 21; j++)
		{
			paths[i][j] = paths[i - 1][j] + paths[i][j - 1];
			cout << "paths[" << i << "][" << j << "]: " << paths[i][j] << endl;
		}
	}
	cout << "paths: " << paths[20][20] << endl;
}