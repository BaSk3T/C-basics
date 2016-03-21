#include "stdafx.h"
#include <iostream>

//Write a program that sorts an array of integers using the Merge sort algorithm.

void mergeSort(int array[], int copyOfArray[], int firstIndex, int lastIndex);
void merge(int array[], int copyOfArray[], int leftIndex, int middleIndex, int rightIndex);

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

	int copyOfArray[MAX_ARRAY_SIZE];

	mergeSort(numbers, copyOfArray, 0, numberOfElements - 1);

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

void mergeSort(int array[], int copyOfArray[], int leftIndex, int rightIndex) {

	if (leftIndex < rightIndex) {
		int middleIndex = (leftIndex + rightIndex) / 2;

		mergeSort(array, copyOfArray, leftIndex, middleIndex);
		mergeSort(array, copyOfArray, middleIndex + 1, rightIndex);

		merge(array, copyOfArray, leftIndex, middleIndex, rightIndex);
	}
}

void merge(int array[], int copyOfArray[], int leftIndex, int middleIndex, int rightIndex)
{
	for (int i = leftIndex; i <= rightIndex; i++) {
		copyOfArray[i] = array[i];
	}

	int firstHalfIndex = leftIndex;
	int secondHalfIndex = middleIndex + 1;
	int commonIndex = leftIndex;

	while (firstHalfIndex <= middleIndex && secondHalfIndex <= rightIndex) {
		if (copyOfArray[firstHalfIndex] <= copyOfArray[secondHalfIndex]) {
			array[commonIndex] = copyOfArray[firstHalfIndex];
			firstHalfIndex++;
		}
		else {
			array[commonIndex] = copyOfArray[secondHalfIndex];
			secondHalfIndex++;
		}

		commonIndex++;
	}

	while (firstHalfIndex <= middleIndex) {
		array[commonIndex] = copyOfArray[firstHalfIndex];
		commonIndex++;
		firstHalfIndex++;
	}
}