#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	const int numRows = 10;
	const int numColumns = 10;
	int product[numRows][numColumns] = { 0 };

	for (int row = 0; row < numRows; ++row)
	{
		for (int column = 0; column < numColumns; ++column)
		{
			product[row][column] = row*column;
		}
	}

	for (int row = 1; row < numColumns; ++row)
	{
		for (int col = 1; col < numColumns; ++col)
		{
			cout << product[row][col] << "\t";
		}

		cout << "\n";
	}
	return 0;
}