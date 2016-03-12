#include "stdafx.h"
#include <iostream>
#include <string>

//A bank account has a holder name(first name, middle name and last name),
//available amount of money(balance), bank name, IBAN, 3 credit card numbers associated with the account.
//Declare the variables needed to keep the information for a single bank account using the appropriate data types and descriptive names.

int main() {
	std::string holderFirstName = "James";
	std::string holderMiddleName = "Random";
	std::string holderLastName = "Raynor";
	unsigned long balance = 46503231;
	std::string bankName = "Starcraft Bank";
	std::string IBAN = "BG80 BNBG 9661 1020 3456 78";
	std::string card1 = "326 3266 515";
	std::string card2 = "176 2216 515";
	std::string card3 = "399 3653 215";

	std::cout << "First name: " << holderFirstName << std::endl;
	std::cout << "Middle name: " << holderMiddleName << std::endl;
	std::cout << "Last name: " << holderLastName << std::endl;
	std::cout << "Balance: " << balance << std::endl;
	std::cout << "Bank name: " << bankName << std::endl;
	std::cout << "IBAN: " << IBAN << std::endl;
	std::cout << "Card1 number: " << card1 << std::endl;
	std::cout << "Card2 number: " << card2 << std::endl;
	std::cout << "Card3 number: " << card3 << std::endl;

    return 0;
}

