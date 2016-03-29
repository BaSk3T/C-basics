#include "GSM.h"
#include <iostream>

#pragma once
class GSMTest
{
private:
	short sizeOfArray = 2;
	GSM *gsms[2] = {new GSM("Sony U", "Sony"), new GSM("Nexus LG 5", "LG", 600, "Me",
		new Battery("111-222", BatteryType::LiIon, 200, 12), new Display(5, 1000000))};

public:
	GSMTest();
	~GSMTest();

	void printGSMs();
	void printIPhone();
};

