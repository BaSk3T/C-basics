#include "stdafx.h"
#include "GSMCallHistoryTest.h"


GSMCallHistoryTest::GSMCallHistoryTest(GSM *phone, int pricePerMinute)
{
	phone->addCall(Call("08981526943", 121));
	phone->addCall(Call("08875561937", 49));
	phone->addCall(Call("08722134213", 91));

	this->phone = phone;
	this->pricePerMinute = pricePerMinute;
}


GSMCallHistoryTest::~GSMCallHistoryTest()
{
}

void GSMCallHistoryTest::displayCalls() const
{
	std::vector<Call> calls = this->phone->getCallHistory();
	short length = calls.size();

	for (short i = 0; i < length; i++) {
		std::cout << "Call " << i + 1 << ": " << calls[i];
	}
}

void GSMCallHistoryTest::displayTotalPriceOfCalls() const
{
	std::cout << "Total price of calls: " << this->phone->calculatePriceOfCalls(this->pricePerMinute) << std::endl;
}

void GSMCallHistoryTest::displayPriceWithoutLongestCall()
{
	std::vector<Call> calls = this->phone->getCallHistory();
	short length = calls.size();

	int durationOfLongestCall = 0;
	int indexOfLongestCall = -1;

	for (short i = 0; i < length; i++) {
		int duration = calls[i].getDuration();

		if (durationOfLongestCall < duration) {
			durationOfLongestCall = duration;
			indexOfLongestCall = i;
		}
	}

	this->phone->deleteCall(indexOfLongestCall);

	this->displayTotalPriceOfCalls();
}

void GSMCallHistoryTest::displayClearedCallHisory()
{
	this->phone->clearHistory();
	this->displayCalls();
}