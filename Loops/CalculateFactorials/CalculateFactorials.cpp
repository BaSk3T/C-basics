#include "stdafx.h"
#include <iostream>

//Write a program that calculates n!/ k!for given n and k(1 < k < n < 100).
//Use only one loop.

int main() {
	int n;
	int k;

	std::cout << "Enter \"n\": ";
	std::cin >> n;

	std::cout << "Enter \"k\": ";
	std::cin >> k;
	
	long factorialOfK = 1;
	long factorialOfN = 1;

	if (1 < k && n < 100) {
		for (int i = 1; i <= n; i++) {
			if (i <= k) {
				factorialOfK *= i;
			}

			factorialOfN *= i;
		}

		double result = factorialOfN / factorialOfK;

		std::cout << result << std::endl;
	}
	else {
		std::cout << "K cannot be bigger than N" << std::endl;
	}
	


    return 0;
}

