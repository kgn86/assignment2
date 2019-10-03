#pragma once
#include "PoweredVehicle.h"
#include <random>

class Jet : PoweredVehicle
{
public:
	Jet(string fuel_type, int engine_count = 1);
	
	virtual double mileageEstimate(double time);
	virtual void SetNumberOfEngines(int engines);
private:
	int numberOfEngines;
	string fuelType;
};
