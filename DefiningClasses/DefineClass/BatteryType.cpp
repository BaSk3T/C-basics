#include "stdafx.h"
#include "BatteryType.h"

std::ostream &operator<<(std::ostream &os, const BatteryType &obj)
{
	os << enumStrings[obj];

	return os;
}