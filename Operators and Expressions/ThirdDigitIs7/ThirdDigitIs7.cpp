#include "stdafx.h"
#include <iostream>

using namespace std;

//Write an expression that checks for given integer if its third digit from right - to - left is 7.

int main()
{
	int numberToCheck = 9999799;
	int digit = (numberToCheck / 100) % 10;

	cout << "Third digit from right to left is 7" << std::endl;

	if (digit == 7)
	{
		cout << "true" << std::endl;
	}
	else
	{
		cout << "false" << std::endl;
	}

    return 0;
}

