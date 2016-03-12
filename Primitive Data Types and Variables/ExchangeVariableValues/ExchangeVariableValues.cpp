#include "stdafx.h"
#include <iostream>

//Declare two integer variables a and b and assign them with 5 and 10 and after that exchange their values by using some programming logic.
//Print the variable values before and after the exchange.

int main() {
	int a = 5;
	int b = 10;

	std::cout << "a: " << a << " " << "b: " << b << std::endl;
		
	int temp = a;

	a = b;
	b = temp;

	std::cout << "a: " << a << " " << "b: " << b << std::endl;

    return 0;
}

