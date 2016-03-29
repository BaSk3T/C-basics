#include <string>
#include "BatteryType.h"

#pragma once
class Battery
{
private:
	std::string model;
	BatteryType batteryType;
	int hoursIdle;
	int hoursTalk;

	void init(std::string model, BatteryType batteryType);

public:
	Battery(std::string model, BatteryType batteryType);
	Battery(std::string model, BatteryType batteryType, int hoursIdle, int hoursTalk);
	~Battery();

	std::string getModel() const;
	void setModel(const std::string& value);

	BatteryType getBatteryType() const;
	void setBatteryType(BatteryType value);

	int getHoursIdle() const;
	void setHoursIdle(int value);

	int getHoursTalk() const;
	void setHoursTalk(int value);

	friend std::ostream &operator<<(std::ostream &os, const Battery &obj);
};

