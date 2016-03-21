#include "stdafx.h"
#include <iostream>
#include <vector>

//Write a program that reads a rectangular matrix of size N x M and finds in it the square 3 x 3 that has maximal sum of
//its elements.

const int MATRIX_SIZE = 3;

int main()
{
	int n;

	std::cout << "Enter \"n\": ";
	std::cin >> n;

	int m;

	std::cout << "Enter \"m\": ";
	std::cin >> m;

	std::vector<std::vector<int>> matrix(n);

	for (int i = 0; i < n; i++) {
		matrix[i].resize(m);
	}

	for (int row = 0; row < n; row++) {
		for (int col = 0; col < m; col++) {
			int number;

			std::cout << "Enter number: ";
			std::cin >> number;

			matrix[row][col] = number;
		}
	}

	int maxMatrix[MATRIX_SIZE][MATRIX_SIZE];

	int maxSum = 0;

	for (int row = 0; row <= n - MATRIX_SIZE; row++) {
		for (int col = 0; col <= m - MATRIX_SIZE; col++) {
			int sum = 0;

			for (int innerRow = row; innerRow < row + MATRIX_SIZE; innerRow++) {
				for (int innerCol = col; innerCol < col + MATRIX_SIZE; innerCol++) {
					int number = matrix[innerRow][innerCol];

					sum += number;
				}
			}
			
			if (maxSum < sum) {
				maxSum = sum;

				for (int innerRow = row; innerRow < row + MATRIX_SIZE; innerRow++) {
					for (int innerCol = col; innerCol < col + MATRIX_SIZE; innerCol++) {
						int number = matrix[innerRow][innerCol];
						maxMatrix[innerRow - row][innerCol - col] = number;
					}
				}
			}
		}
	}


	for (int row = 0; row < MATRIX_SIZE; row++) {
		for (int col = 0; col < MATRIX_SIZE; col++) {
			int number = maxMatrix[row][col];

			std::cout << number;

			if (col < MATRIX_SIZE - 1) {
				std::cout << " ";
			}
		}

		std::cout << std::endl;
	}

    return 0;
}

