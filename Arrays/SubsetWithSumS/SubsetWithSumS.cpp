#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

//We are given an array of integers and a number S.
//Write a program to find if there exists a subset of the elements of the array that has a sum S.

bool isSubsetSum(int array[], int length, int sum);

const int MAX_ARRAY_SIZE = 10000;

int main()
{
	int sumToReach;

	std::cout << "Enter sum: ";
	std::cin >> sumToReach;

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

	bool subsetSumExists = isSubsetSum(numbers, numberOfElements, sumToReach);

	std::string result = subsetSumExists ? "Yes" : "No";

	std::cout << "Subset with sum: " << sumToReach << " exists: " << result << std::endl;

    return 0;
}

bool isSubsetSum(int array[], int length ,int sum)
{
	short notSet = -1;
	int sumOfAllNumbers = 0;

	for (int i = 0; i < length; i++) {
		sumOfAllNumbers += array[i];
	}

	if (sum > sumOfAllNumbers) {
		return false;
	}

	short size = sumOfAllNumbers + 1;

	std::vector<int> lastSums(size);


	for (int i = 1; i < sumOfAllNumbers + 1; i++) {
		lastSums[i] = notSet;
	}

	int currentSum = 0;

	for (int i = 0; i < length; i++) {

		for (int j = currentSum; j + 1 > 0; j--) {
			if (lastSums[j] != notSet && lastSums[j + array[i]] == notSet) {
				lastSums[j + array[i]] = i;
			}
		}

		currentSum += array[i];
	}

	return lastSums[sum] != -1;
}

