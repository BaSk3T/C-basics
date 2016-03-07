#include "stdafx.h"
#include <iostream>

using namespace std;

//Find online more information about ASCII(American Standard Code for Information Interchange) and write a program
//that prints the entire ASCII table of characters on the console(characters from 0 to 255).
//Note: Some characters have a special purpose and will not be displayed as expected.You may skip them or display them differently.

int main()
{
	int asciiSize = 255;

	for (int i = 0; i <= asciiSize; i++)
	{
		char currentSymbol = i;
		cout << currentSymbol << endl;
	}

    return 0;
}

