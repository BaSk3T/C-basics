#include "stdafx.h"
#include <iostream>

using namespace std;

//Declare two integer variables a and b and assign them with 5 and 10 and after that exchange their values by using some programming logic.
//Print the variable values before and after the exchange.

int main()
{
	int a = 5;
	int b = 10;

	cout << "a: " << a << " " << "b: " << b << std::endl;
		
	int temp = a;

	a = b;
	b = temp;

	cout << "a: " << a << " " << "b: " << b << std::endl;

    return 0;
}

