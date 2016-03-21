#include "stdafx.h"
#include <iostream>

//Write a program that reads a number N and generates and prints all the permutations of the numbers[1 … N].

void permutate(int nubmer, int index, int array[]);
void swap(int array[], int k, int j);

const int MAX_ARRAY_SIZE = 1000;

int main()
{
	int number;

	std::cout << "Enter number: ";
	std::cin >> number;

	int numbers[MAX_ARRAY_SIZE];

	for (int i = 0; i < number; i++) {
		numbers[i] = i + 1;
	}

	permutate(number, 0, numbers);

    return 0;
}

void permutate(int length, int index, int array[])
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
		permutate(length, index + 1, array);

		for (int i = index + 1; i < length; i++) {
			swap(array, index, i);
			permutate(length, index + 1, array);
			swap(array, index, i);
		}
	}
}

void swap(int array[], int k, int j)
{
	int oldValue = array[k];
	array[k] = array[j];
	array[j] = oldValue;
}
