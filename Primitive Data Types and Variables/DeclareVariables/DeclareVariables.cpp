#include "stdafx.h"
#include <iostream>

//Declare five variables choosing for each of them the most appropriate of the types byte, sbyte, short, ushort, int, uint, long, ulong
//to represent the following values : 52130, -115, 4825932, 97, -10000.
//Choose a large enough type for each number to ensure it will fit in it.Try to compile the code.

int main() {
	short firstNumber = 52130;
	short secondNumber = -115;
	int thirdNumber = 4825932;
	short fourthNumber = 97;
	short fifthNumber = -10000;

	std::cout << "Used short " << firstNumber << std::endl;
	std::cout << "Used short " << secondNumber << std::endl;
	std::cout << "Used int " << thirdNumber << std::endl;
	std::cout << "Used short " << fourthNumber << std::endl;
	std::cout << "Used short " << fifthNumber << std::endl;

    return 0;
}

