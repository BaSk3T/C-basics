#include "stdafx.h"
#include <iostream>

//Write a program that reads two positive integer numbers and prints how many numbers p exist between them
//such that the reminder of the division by 5 is 0.

int main() {
	int start;
	int end;

	std::cout << "Enter start: ";
	std::cin >> start;

	std::cout << "Enter end: ";
	std::cin >> end;

	for (int i = start; i <= end; i++) {
		if (i % 5 == 0) {
			std::cout << i << ", ";
		}
	}

	std::cout << std::endl;

    return 0;
}

