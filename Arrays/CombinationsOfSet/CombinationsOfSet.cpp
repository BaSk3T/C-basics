#include "stdafx.h"
#include <iostream>

//Write a program that reads two numbers N and K and generates all the combinations of K distinct elements from the set[1..N].

void comb(int array[], int length, int n, int index, int start);

const int MAX_ARRAY_SIZE = 10000;

int main()
{
	int n;
	int k;

	std::cout << "Enter \"n\": ";
	std::cin >> n;

	std::cout << "Enter \"k\": ";
	std::cin >> k;

	int numbers[MAX_ARRAY_SIZE];

	comb(numbers, k, n, 0, 1);

    return 0;
}

void comb(int array[], int length, int n, int index, int start)
{
	if (index >= length) {
		for (int i = 0; i < length; i++) {
			int number = array[i];

			std::cout << number;
			
			if (i < length - 1) {
				std::cout << " ";
			}
			else {
				std::cout << std::endl;
			}
		}
	}
	else {
		for (int i = start; i <= n; i++) {
			array[index] = i;

			comb(array, length, n, index + 1, i + 1);
		}
	}
}
