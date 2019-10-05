#pragma once
#include "Vehicle.h"

class Pogostick : public Vehicle
{
public:
	Pogostick(string brand, string model, int skill);
	virtual double mileageEstimate(double time);
	virtual string toString();
	virtual void setSkill(int skill);
private:
	virtual int getSkill();

	int rider_skill;
};
