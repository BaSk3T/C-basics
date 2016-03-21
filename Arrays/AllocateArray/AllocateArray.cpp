#include "stdafx.h"
#include <iostream>

//Write a program that allocates array of 20 integers and initializes each element by its index multiplied by 5.
//Print the obtained array on the console.

const int MAX_ARRAY_SIZE = 1000;

int main()
{
	int numbers[MAX_ARRAY_SIZE];

	for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
		numbers[i] = i * 5;

		std::cout << numbers[i];

		if (i < MAX_ARRAY_SIZE - 1) {
			std::cout << " ";
		}
		else {
			std::cout << std::endl;
		}
	}

    return 0;
}

