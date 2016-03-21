#include "stdafx.h"
#include <iostream>

//Write a program that calculates n!/ k!for given n and k(1 < k < n < 100).
//Use only one loop.

int main()
{
	int n;
	int k;

	std::cout << "Enter \"n\": ";
	std::cin >> n;

	std::cout << "Enter \"k\": ";
	std::cin >> k;

	long factorial = 1;

	if (k <= 1 || 100 <= n || n < k) {
		std::cout << "1 < k < n < 100" << std::endl;
		return 0;
	}

	for (int i = k + 1; i <= n; i++) {
		factorial *= i;
	}

	std::cout << factorial << std::endl;

	return 0;
}

