#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>

int main() {
	float sum = 0;
	std::string numbers;

	std::cout << "Enter numbers seperated by space: ";
	std::getline(std::cin, numbers);

	std::istringstream iss(numbers);

	do
	{
		std::string numberAsText;
		iss >> numberAsText;

		if (numberAsText == "") {
			continue;
		}

		float number;

		std::stringstream(numberAsText) >> number;
		sum += number;
	} while (iss);

	std::cout << "Sum: " << sum << std::endl;

    return 0;
}

