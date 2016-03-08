#include "stdafx.h"
#include <iostream>

using namespace std;

//Write a Boolean expression that returns if the bit at position p(counting from 0, starting from the right)
//in given integer number n, has value of 1.

int main()
{
	unsigned int numberToCheck = 62241;
	short bitToExtract = 11;

	int bitMask = 1 << bitToExtract;
	int result = (numberToCheck & bitMask) >> bitToExtract;

	cout << "Bit at position " << bitToExtract << " in number: " << numberToCheck << " is 1:" << std::endl;

	if (result == 1)
	{
		cout << "true" << std::endl;
	}
	else
	{
		cout << "false" << std::endl;
	}

    return 0;
}

