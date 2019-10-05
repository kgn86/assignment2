#pragma once
#include "PoweredVehicle.h"

class Jet : public PoweredVehicle
{
public:
	Jet(string brand, string model, string fuel_type, int engine_count = 1);
	
	virtual double mileageEstimate(double time);
	virtual void SetNumberOfEngines(int engines);
	virtual int getNumberOfEngines();
	virtual string toString();
private:
	int numberOfEngines;
	string brand;
	string model;
};
