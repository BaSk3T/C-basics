#include "stdafx.h"
#include <iostream>

//Write a program that calculates the greatest common divisor(GCD) of given two integers a and b.
//Use the Euclidean algorithm(find it in Internet).

int main() {
	int a = 5;
	int b = -15;

	while (b != 0) {
		int oldValueOfB = b;
		b = a % b;
		a = oldValueOfB;
	}

	std::cout << a << std::endl;

    return 0;
}

