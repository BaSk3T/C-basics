#include "stdafx.h"
#include <iostream>

//Write an expression that checks if given positive integer number n(n ≤ 100) is prime
//(i.e.it is divisible without remainder only to itself and 1).
//Note: You should check if the number is positive

int main() {
	int numberToCheck = 53;

	std::cout << "Number: " << numberToCheck << " is prime: " << std::endl;

	if (numberToCheck >= 0) {
		int numbersDivisibleTo = 0;

		for (int i = 1; i <= numberToCheck; i++) {
			if (numberToCheck % i == 0) {
				numbersDivisibleTo++;
			}
		}

		if (numbersDivisibleTo == 2) {
			std::cout << "true" << std::endl;
		}
		else {
			std::cout << "false" << std::endl;
		}
	}
	else {
		std::cout << "false" << std::endl;
	}

    return 0;
}

