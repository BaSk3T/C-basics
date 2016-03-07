#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

//A bank account has a holder name(first name, middle name and last name),
//available amount of money(balance), bank name, IBAN, 3 credit card numbers associated with the account.
//Declare the variables needed to keep the information for a single bank account using the appropriate data types and descriptive names.

int main()
{
	string holderFirstName = "James";
	string holderMiddleName = "Random";
	string holderLastName = "Raynor";
	unsigned long balance = 46503231;
	string bankName = "Starcraft Bank";
	string IBAN = "BG80 BNBG 9661 1020 3456 78";
	string card1 = "326 3266 515";
	string card2 = "176 2216 515";
	string card3 = "399 3653 215";

	cout << "First name: " << holderFirstName << std::endl;
	cout << "Middle name: " << holderMiddleName << std::endl;
	cout << "Last name: " << holderLastName << std::endl;
	cout << "Balance: " << balance << std::endl;
	cout << "Bank name: " << bankName << std::endl;
	cout << "IBAN: " << IBAN << std::endl;
	cout << "Card1 number: " << card1 << std::endl;
	cout << "Card2 number: " << card2 << std::endl;
	cout << "Card3 number: " << card3 << std::endl;

    return 0;
}

