#include "stdafx.h"
#include <iostream>

using namespace std;

//Write an expression that checks if given positive integer number n(n ≤ 100) is prime
//(i.e.it is divisible without remainder only to itself and 1).
//Note: You should check if the number is positive

int main()
{
	int numberToCheck = 53;

	cout << "Number: " << numberToCheck << " is prime: " << std::endl;

	if (numberToCheck >= 0)
	{
		int numbersDivisibleTo = 0;

		for (int i = 1; i <= numberToCheck; i++)
		{
			if (numberToCheck % i == 0)
			{
				numbersDivisibleTo++;
			}
		}

		if (numbersDivisibleTo == 2)
		{
			cout << "true" << std::endl;
		}
		else
		{
			cout << "false" << std::endl;
		}
	}
	else
	{
		cout << "false" << std::endl;
	}

    return 0;
}

