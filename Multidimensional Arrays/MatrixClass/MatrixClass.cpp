#include "stdafx.h"
#include <iostream>
#include <vector>

//Write a class Matrix, to hold a matrix of integers.Overload the operators for adding, subtracting and multiplying of
//matrices, indexer for accessing the matrix content and ToString().

class Matrix
{
private:
	std::vector<std::vector<int>> matrix;
	int rows;
	int cols;

public:
	Matrix(int numberOfRows, int numberOfCols)
	{
		this->rows = numberOfRows;
		this->cols = numberOfCols;

		this->matrix.resize(numberOfRows);

		for (int row = 0; row < numberOfRows; row++) {
			this->matrix[row].resize(numberOfCols);
		}
	}

	void insertNumberAt(int row, int col, int number)
	{
		this->matrix[row][col] = number; 
	}

	int getNumberAt(int row, int col)
	{
		return this->matrix[row][col];
	}

	void print()
	{
		for (int row = 0; row < rows; row++) {
			for (int col = 0; col < cols; col++) {
				std::cout << this->matrix[row][col];

				if (col < cols - 1) {
					std::cout << " ";
				}
			}

			std::cout << std::endl;
		}
	}

	Matrix operator+(Matrix matrixToAdd)
	{
		Matrix resultedMatrix(this->rows, this->cols);

		for (int row = 0; row < this->rows; row++) {
			for (int col = 0; col < this->cols; col++) {
				int number = this->matrix[row][col] + matrixToAdd.getNumberAt(row, col);

				resultedMatrix.insertNumberAt(row, col, number);
			}
		}

		return resultedMatrix;
	}

	Matrix operator-(Matrix matrixToAdd)
	{
		Matrix resultedMatrix(this->rows, this->cols);

		for (int row = 0; row < this->rows; row++) {
			for (int col = 0; col < this->cols; col++) {
				int number = this->matrix[row][col] - matrixToAdd.getNumberAt(row, col);

				resultedMatrix.insertNumberAt(row, col, number);
			}
		}

		return resultedMatrix;
	}

	Matrix operator*(Matrix matrixToAdd)
	{
		Matrix resultedMatrix(this->rows, this->rows);
		
		for (int row = 0; row < this->rows; row++) {
			for (int col = 0; col < this->rows; col++) {
				
				for (int i = 0; i < this->rows; i++) {
					int sum = 0;

					for (int k = 0; k < this->cols; k++) {
						sum += this->matrix[row][k] * matrixToAdd.getNumberAt(k, col);
					}

					resultedMatrix.insertNumberAt(row, col, sum);
				}
			}
		}

		return resultedMatrix;
	}
};

Matrix createMatrix();

int main()
{
	Matrix matrixA = createMatrix();
	Matrix matrixB = createMatrix();

	matrixA.print();

	matrixA = matrixA * matrixB;

	std::cout << std::endl;

	matrixA.print();

	return 0;
}

Matrix createMatrix()
{
	int numberOfRows;

	std::cout << "Enter number of rows: ";
	std::cin >> numberOfRows;

	int numberOfCols;

	std::cout << "Enter number of cols: ";
	std::cin >> numberOfCols;

	Matrix matrix(numberOfRows, numberOfCols);

	for (int row = 0; row < numberOfRows; row++) {
		for (int col = 0; col < numberOfCols; col++) {
			int number;

			std::cout << "Enter number at: [" << row << "][" << col << "]: ";
			std::cin >> number;

			matrix.insertNumberAt(row, col, number);
		}
	}

	return matrix;
}