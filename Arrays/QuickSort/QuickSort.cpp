#include "stdafx.h"
#include <iostream>

//Write a program that sorts an array of integers using the Quick sort algorithm.

void quickSort(int array[], int leftIndex, int rightIndex);
int partition(int array[], int leftIndex, int rightIndex);
void swap(int array[], int leftIndex, int rightIndex);


const int MAX_ARRAY_SIZE = 1000;

int main()
{
	int numberOfElements;

	std::cout << "Enter number of elements: ";
	std::cin >> numberOfElements;

	int numbers[MAX_ARRAY_SIZE];

	for (int i = 0; i < numberOfElements; i++) {
		int number;

		std::cout << "Enter number: ";
		std::cin >> number;

		numbers[i] = number;
	}

	quickSort(numbers, 0, numberOfElements - 1);

	for (int i = 0; i < numberOfElements; i++) {
		std::cout << numbers[i];

		if (i < numberOfElements - 1) {
			std::cout << " ";
		}
		else {
			std::cout << std::endl;
		}
	}

    return 0;
}

void quickSort(int array[], int leftIndex, int rightIndex)
{
	if (leftIndex < rightIndex) {
		int partitionIndex = partition(array, leftIndex, rightIndex);

		quickSort(array, leftIndex, partitionIndex);
		quickSort(array, partitionIndex + 1, rightIndex);
	}
}

int partition(int array[], int leftIndex, int rightIndex)
{
	int middleIndex = (leftIndex + rightIndex) / 2;

	int pivot = array[middleIndex];

	int i = leftIndex - 1;
	int j = rightIndex + 1;

	while (true) {
		do
		{
			i++;
		} while (array[i] < pivot);

		do
		{
			j--;
		} while (array[j] > pivot);

		if (i >= j) {
			return j;
		}

		swap(array, i, j);
	}
}

void swap(int array[], int leftIndex, int rightIndex)
{
	int oldValue = array[leftIndex];
	array[leftIndex] = array[rightIndex];
	array[rightIndex] = oldValue;
}
