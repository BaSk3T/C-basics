#include "stdafx.h"
#include <iostream>
#include <string>

//Write a program that generates and prints all possible cards from a standard deck of 52 cards(without the jokers).
//The cards should be printed using the classical notation(like 5 of spades, A of hearts, 9 of clubs; and K of diamonds).
//The card faces should start from 2 to A.
//Print each card face in its four possible suits : clubs, diamonds, hearts and spades.Use 2 nested for - loops
//and a switch - case statement.

int main()
{
	std::string card;

	for (int i = 2; i <= 14; i++) {
		switch (i) {
		case 2:
			card = "2";
			break;
		case 3:
			card = "3";
			break;
		case 4:
			card = "4";
			break;
		case 5:
			card = "5";
			break;
		case 6:
			card = "6";
			break;
		case 7:
			card = "7";
			break;
		case 8:
			card = "8";
			break;
		case 9:
			card = "9";
			break;
		case 10:
			card = "10";
			break;
		case 11:
			card = "J";
			break;
		case 12:
			card = "Q";
			break;
		case 13:
			card = "K";
			break;
		case 14:
			card = "A";
			break;
		default:
			break;
		}

		for (int k = 0; k < 4; k++) {
			if (k == 0) {
				std::cout << card << " of spades, ";
			}
			if (k == 1) {
				std::cout << card << " of clubs, ";
			}
			if (k == 2) {
				std::cout << card << " of hearts, ";
			}
			if (k == 3) {
				std::cout << card << " of diamonds" << std::endl;
			}
		}
	}

    return 0;
}

