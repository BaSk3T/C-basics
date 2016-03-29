#include <string>
#pragma once
class Display
{
private:
	double size;
	int numberOfColors;

public:
	Display(double size, int numberOfColors);
	~Display();

	double getSize() const;
	void setSize(double value);

	int getNumberOfColors() const;
	void setNumberOfColors(int value);

	friend std::ostream &operator<<(std::ostream &os, const Display &obj);
};

