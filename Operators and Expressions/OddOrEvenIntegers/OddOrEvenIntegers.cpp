#include "stdafx.h"
#include <iostream>

using namespace std;

//Write an expression that checks if given integer is odd or even.

int main()
{
	int numberToCheck = -2;

	if (numberToCheck % 2 == 0)
	{
		cout << "Number is Even" << std::endl;
	}
	else 
	{
		cout << "Number is Odd" << std::endl;
	}

    return 0;
}

