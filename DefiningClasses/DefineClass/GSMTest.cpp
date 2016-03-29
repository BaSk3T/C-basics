#include "stdafx.h"
#include "GSMTest.h"


GSMTest::GSMTest()
{
}


GSMTest::~GSMTest()
{
}

void GSMTest::printGSMs()
{
	for (short i = 0; i < this->sizeOfArray; i++) {
		std::cout << *this->gsms[i] << std::endl;
	}
}

void GSMTest::printIPhone()
{
	std::cout << *GSM::iPhone4s << std::endl;
}
