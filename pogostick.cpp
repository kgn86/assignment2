#include "pogostick.h"
#include <random>

Pogostick::Pogostick(string brand, string model, int skill)
{
	setBrand(brand);
	setModel(model);
	setSkill(skill);
}

double Pogostick::mileageEstimate(double time)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> rng(1, 3);

	double mileage = 0.7 * time * getSkill();
	
	if (rng(gen) == 2) // bad weather
		mileage /= 2;

	return floor(mileage);
}

string Pogostick::toString()
{
	string str = "-> Pogostick" + Vehicle::toString();
	return str;
}

void Pogostick::setSkill(int skill)
{
	this->rider_skill = skill;
}

int Pogostick::getSkill()
{
	return this->rider_skill;
}
