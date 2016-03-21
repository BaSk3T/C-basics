#include "stdafx.h"
#include <iostream>
#include <vector>

//Write a program that fills and prints a matrix of size(n, n) as shown below :
//a)			 
//1	5	9	13
//2	6	10	14
//3	7	11	15
//4	8	12	16
//b)
//1	8	9	16
//2	7	10	15
//3	6	11	14
//4	5	12	13
//c)
//7	11	14	16
//4	8	12	15
//2	5	9	13
//1	3	6	10
//d)*
//1	12	11	10
//2	13	16	9
//3	14	15	8
//4	5	6	7

std::vector<std::vector<int>> fillAMatrix(std::vector<std::vector<int>> matrix, int length);
std::vector<std::vector<int>> fillBMatrix(std::vector<std::vector<int>> matrix, int length);
std::vector<std::vector<int>> fillCMatrix(std::vector<std::vector<int>> matrix, int length);
std::vector<std::vector<int>> fillDMatrix(std::vector<std::vector<int>> matrix, int length);
void printMatrix(std::vector<std::vector<int>> matrix, int length);

int main()
{
	int number;

	std::cout << "Enter number: ";
	std::cin >> number;

	std::vector<std::vector<int>> matrix(number);

	for (int i = 0; i < number; i++) {
		matrix[i].resize(number);
	}

	matrix = fillAMatrix(matrix, number);
	printMatrix(matrix, number);

	std::cout << std::endl;

	matrix = fillBMatrix(matrix, number);
	printMatrix(matrix, number);

	std::cout << std::endl;

	matrix = fillCMatrix(matrix, number);
	printMatrix(matrix, number);

	std::cout << std::endl;

	matrix = fillDMatrix(matrix, number);
	printMatrix(matrix, number);

    return 0;
}

std::vector<std::vector<int>> fillAMatrix(std::vector<std::vector<int>> matrix, int length)
{
	int count = 1;

	for (int col = 0; col < length; col++) {

		for (int row = 0; row < length; row++) {
			matrix[row][col] = count;
			count++;
		}
	}

	return matrix;
}

std::vector<std::vector<int>> fillBMatrix(std::vector<std::vector<int>> matrix, int length)
{
	int count = 1;

	int col = 0;
	int row = 0;
	int spacing = 1;

	while (col != length) {
		matrix[row][col] = count;
		count++;
	
		row += spacing;
		
		if (row == -1 || row == length) {
			col++;
			spacing *= -1;
			row += spacing;
		}
	}

	return matrix;
}

std::vector<std::vector<int>> fillCMatrix(std::vector<std::vector<int>> matrix, int length)
{
	int index = 1;
	int count = 1;

	while (index != length * length) {
		for (int row = 0; row < length; row++) {
			for (int col = 0; col < length; col++) {
				if (row - col + index == length) {
					matrix[row][col] = count;
					count++;
				}
			}
		}

		index++;
	}

	return matrix;
}

std::vector<std::vector<int>> fillDMatrix(std::vector<std::vector<int>> matrix, int length)
{
	int count = 1;
	int topRow = 0;
	int botRow = length - 1;
	int leftCol = 0;
	int rightCol = length - 1;

	int previousRow = 0;
	int previousCol = 0;

	while (true) {
		for (int row = topRow; row <= botRow; row++) {
			matrix[row][leftCol] = count;
			count++;

			if (count > length * length) {
				return matrix;
			}

			previousRow = row;
		}

		leftCol++;

		for (int col = leftCol; col <= rightCol; col++)
		{
			matrix[previousRow][col] = count;
			count++;

			if (count > length * length) {
				return matrix;
			}

			previousCol = col;
		}

		botRow = previousRow - 1;

		for (int row = botRow; row >= topRow; row--) {
			matrix[row][rightCol] = count;
			count++;

			if (count > length * length) {
				return matrix;
			}
		}

		rightCol = previousCol - 1;

		for (int col = rightCol; col >= leftCol; col--) {
			matrix[topRow][col] = count;
			count++;

			if (count > length * length) {
				return matrix;
			}
		}

		topRow++;
	}

	return matrix;
}

void printMatrix(std::vector<std::vector<int>> matrix, int length)
{
	for (int row = 0; row < length; row++) {

		for (int col = 0; col < length; col++) {
			int number = matrix[row][col];
			std::cout << number;

			if (col < length - 1) {
				std::cout << " ";
			}
			else {
				std::cout << std::endl;
			}
		}
	}
}
