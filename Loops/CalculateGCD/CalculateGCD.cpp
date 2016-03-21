#include "stdafx.h"
#include <iostream>

//Write a program that calculates the greatest common divisor(GCD) of given two integers a and b.
//Use the Euclidean algorithm(find it in Internet).

int main()
{
	int a;
	int b;

	std::cout << "Enter \"a\": ";
	std::cin >> a;

	std::cout << "Enter \"b\": ";
	std::cin >> b;

	while (b != 0) {
		int oldValueOfB = b;
		b = a % b;
		a = oldValueOfB;
	}

	std::cout << a << std::endl;

    return 0;
}

