#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

//You are given an array of strings.Write a method that sorts the array by the length of its elements(the number of
//characters composing them).

int main()
{
	int numberOfElements;

	std::cout << "Enter number of elements: ";
	std::cin >> numberOfElements;

	std::vector<std::string> words;

	for (int i = 0; i < numberOfElements; i++) {
		std::string word;

		std::cout << "Enter word: ";
		std::cin >> word;
		
		words.push_back(word);
	}

	int maxLengthOfWord = 0;

	for (int i = 0; i < numberOfElements; i++) {
		int currentWordSize = words[i].size();

		if (maxLengthOfWord < currentWordSize) {
			maxLengthOfWord = currentWordSize;
		}
	}

	std::vector<std::vector<std::string>> matrixOfStrings(maxLengthOfWord + 1);

	for (int i = 0; i < numberOfElements; i++) {
		int sizeOfWord = words[i].size();

		matrixOfStrings[sizeOfWord].push_back(words[i]);
	}

	std::vector<std::string> result;

	//0 index will always be 0 so we skip it
	for (int i = 1; i <= maxLengthOfWord; i++) {
		if (matrixOfStrings[i].size() == 0) {
			continue;
		}
		
		int numberOfWordsAtIndex = matrixOfStrings[i].size();

		for (int k = 0; k < numberOfWordsAtIndex; k++) {
			result.push_back(matrixOfStrings[i][k]);
		}
	}

	int lengthOfResult = result.size();

	for (int i = 0; i < lengthOfResult; i++) {
		std::string word = result[i];

		std::cout << word;

		if (i < lengthOfResult - 1) {
			std::cout << " ";
		}
		else {
			std::cout << std::endl;
		}
	}

    return 0;
}

