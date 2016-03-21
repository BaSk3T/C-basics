#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

//We are given a matrix of strings of size N x M.Sequences in the matrix we define as sets of several neighbour elements
//located on the same line, column or diagonal.
//Write a program that finds the longest sequence of equal strings in the matrix.

int main()
{
	int numberOfRows;
	std::cout << "Enter number of rows: ";
	std::cin >> numberOfRows;

	int numberOfCols;
	std::cout << "Enter number of cols: ";
	std::cin >> numberOfCols;

	std::vector<std::vector<std::string>> matrix(numberOfRows);

	std::vector<std::vector<short>> verticalMatrix(numberOfRows);
	std::vector<std::vector<short>> horizontalMatrix(numberOfRows);
	std::vector<std::vector<short>> diagonalMatrix(numberOfRows);

	for (int i = 0; i < numberOfRows; i++) {
		matrix[i].resize(numberOfCols);
		verticalMatrix[i].resize(numberOfCols);
		horizontalMatrix[i].resize(numberOfCols);
		diagonalMatrix[i].resize(numberOfCols);
	}

	for (int row = 0; row < numberOfRows; row++) {
		for (int col = 0; col < numberOfCols; col++) {
			std::string text;

			std::cout << "Enter text at[" << row << "]" << "[" << col << "]: ";
			std::cin >> text;

			matrix[row][col] = text;
			verticalMatrix[row][col] = 1;
			horizontalMatrix[row][col] = 1;
			diagonalMatrix[row][col] = 1;
		}
	}

	int max = 0;
	std::string maxText;

	for (int row = 0; row < numberOfRows; row++) {
		for (int col = 0; col < numberOfCols; col++) {
			std::string text = matrix[row][col];

			//diagonal
			if (row - 1 >= 0 && col - 1 >= 0) {
				if (text == matrix[row - 1][col - 1]) {
					diagonalMatrix[row][col] = diagonalMatrix[row - 1][col - 1] + 1;
				}

				if (max < diagonalMatrix[row][col]) {
					max = diagonalMatrix[row][col];
					maxText = matrix[row][col];
				}
			}

			//vertical
			if (row - 1 >= 0) {
				if (text == matrix[row - 1][col]) {
					verticalMatrix[row][col] = verticalMatrix[row - 1][col] + 1;
				}

				if (max < verticalMatrix[row][col]) {
					max = verticalMatrix[row][col];
					maxText = matrix[row][col];
				}
			}

			//horizontal
			if (col - 1 >= 0) {
				if (text == matrix[row][col - 1]) {
					horizontalMatrix[row][col] = horizontalMatrix[row][col - 1] + 1;
				}

				if (max < horizontalMatrix[row][col]) {
					max = horizontalMatrix[row][col];
					maxText = matrix[row][col];
				}
			}
		}
	}

	for (int i = 0; i < max; i++) {
		std::cout << maxText;

		if (i < max - 1) {
			std::cout << " ";
		}
		else {
			std::cout << std::endl;
		}
	}

    return 0;
}

