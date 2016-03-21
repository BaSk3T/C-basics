#include "stdafx.h"
#include <iostream>

//In combinatorics, the number of ways to choose k different members out of a group of n different
//elements(also known as the number of combinations) is calculated by the following formula : formula For example,
//there are 2598960 ways to withdraw 5 cards out of a standard deck of 52 cards.
//Your task is to write a program that calculates n!/ (k!* (n - k)!) for given n and k(1 < k < n < 100).Try to use only two loops.

int main()
{
	int n;
	int k;

	std::cout << "Enter \"n\": ";
	std::cin >> n;

	std::cout << "Enter \"k\": ";
	std::cin >> k;

	unsigned long long factorial = 1;
	unsigned long factorialDifferenceOfNAndK = 1;

	if (k <= 1 || 100 <= n || n < k) {
		std::cout << "1 < k < n < 100" << std::endl;
		return 0;
	}

	for (int i = k + 1; i <= n; i++) {
		factorial *= i;
	}

	for (int i = 1; i <= n - k; i++) {
		factorialDifferenceOfNAndK *= i;
	}

	double result = factorial / factorialDifferenceOfNAndK;

	std::cout << "Result is: " << result << std::endl;
	
	return 0;
}

