#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>

//Write a program that, for a given two integer numbers n and x, calculates the sum S = 1 + 1!/ x + 2!/ x2 + … + n!/ x^n.
//Use only one loop.Print the result with 5 digits after the decimal point.

int main() {
	int n;
	int x;
	double sum = 1;

	std::cout << "Enter \"n\": ";
	std::cin >> n;

	std::cout << "Enter \"x\": ";
	std::cin >> x;

	for (int i = 1; i <= n; i++) {
		int factOfN = 1;

		for (int k = 1; k <= i; k++) {
			factOfN *= k;
		}

		sum += factOfN / pow(x, i);
	}

	std::cout << std::fixed << std::setprecision(5) << sum << std::endl;

    return 0;
}

