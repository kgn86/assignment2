#pragma once
#include "Vehicle.h"

class Skateboard : public Vehicle
{
public:
	Skateboard(string brand, string model);
	virtual double mileageEstimate(double time);
	virtual string toString();
};
