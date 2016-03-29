#include <string>
#pragma once

enum BatteryType
{
	LiIon,
	NiMH,
	NiCd,
	LiPo
};

static const char *enumStrings[] = { "LiIon", "NiMH", "NiCd", "LiPo" };

std::ostream &operator<<(std::ostream &os, const BatteryType &obj);