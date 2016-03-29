#include <iostream>
#include "GSM.h"

#pragma once
class GSMCallHistoryTest
{
private:
	GSM *phone;
	int pricePerMinute;

public:
	GSMCallHistoryTest(GSM *phone, int pricePerMinute);
	~GSMCallHistoryTest();

	void displayCalls() const;
	void displayTotalPriceOfCalls() const;
	void displayPriceWithoutLongestCall();
	void displayClearedCallHisory();
};

