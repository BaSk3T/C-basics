#include "stdafx.h"
#include <iostream>

//Write a program that finds all prime numbers in the range[1...10 000 000].Use the Sieve of Eratosthenes algorithm.

const int MAX_ARRAY_SIZE = 100000;

int main()
{
	int numberOfMaxRange;

	std::cout << "Enter range of prime numbers: ";
	std::cin >> numberOfMaxRange;

	bool prime[MAX_ARRAY_SIZE];

	int p = 2;

	bool primeAfterP = true;

	for (int i = 2; i < numberOfMaxRange; i++) {
		for (int k = 2; k <= numberOfMaxRange; k++) {
			int number = k * p;

			if (number > numberOfMaxRange) {
				break;
			}

			prime[number] = false;
		}

		for (int j = p + 1; j < numberOfMaxRange; j++) {
			if (prime[j]) {
				p = j;
				primeAfterP = true;
				break;
			}
			else {
				primeAfterP = false;
			}
		}

		if (!primeAfterP) {
			break;
		}
	}

	for (int i = 2; i < numberOfMaxRange; i++) {
		if (prime[i]) {
			std::cout << i;
		}
		else {
			continue;
		}

		if (i < numberOfMaxRange - 1) {
			std::cout << " ";
		}
		else {
			std::cout << std::endl;
		}
	}

	return 0;
}

