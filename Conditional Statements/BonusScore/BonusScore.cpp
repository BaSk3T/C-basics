#include "stdafx.h"
#include <iostream>

//Write a program that applies bonus score to given score in the range[1�9] by the following rules :
//If the score is between 1 and 3, the program multiplies it by 10.
//If the score is between 4 and 6, the program multiplies it by 100.
//If the score is between 7 and 9, the program multiplies it by 1000.
//If the score is 0 or more than 9, the program prints �invalid score�.

int main()
{
	int score;
	int multiplier;

	std::cout << "Enter score: ";
	std::cin >> score;

	if (0 > score || score > 9)
	{
		std::cout << "Invalid score!" << std::endl;
		return 0;
	}

	if (1 <= score && score <= 3)
	{
		multiplier = 10;
	}
	else if (4 <= score && score <= 6)
	{
		multiplier = 100;
	}
	else if (7 <= score && score <= 9)
	{
		multiplier = 1000;
	}
	
	score *= multiplier;

	std::cout << "Resulted score: " << score << std::endl;

    return 0;
}

