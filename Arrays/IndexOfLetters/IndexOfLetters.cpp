#include "stdafx.h"
#include <iostream>
#include <string>
#include <cctype>

//Write a program that creates an array containing all letters from the alphabet(A - Z).
//Read a word from the console and print the index of each of its letters in the array.

int main()
{
	std::string word;

	std::cout << "Enter word: ";	
	std::cin >> word;

	char alphabet[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
		's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

	for (int i = 0; i < word.size(); i++) {
		char letter = std::tolower(word[i]);
		short indexOfLetter = letter - 'a';

		std::cout << "Index of " << letter << " in array is: " << indexOfLetter << std::endl;
	}

    return 0;
}

