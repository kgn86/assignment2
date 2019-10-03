#include <cstdlib>
#include "jet.h"

Jet::Jet(string fuel_type, int engine_count)
{
	this->numberOfEngines = engine_count;
	this->fuelType = fuel_type;
}


void Jet::SetNumberOfEngines(int engines)
{
	// todo: does this need to be null checked?
	this->numberOfEngines = engines;
}


void Jet::SetFuelType(string fuel_type)
{
	this->fuelType = fuel_type;
}


double Jet::mileageEstimate(double time)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<double> rng(40.f, 100.f);

	double mileage = rng(gen);

	if (this->numberOfEngines >= 2 && fuelType == "Rocket")
		mileage *= this->numberOfEngines * 1.055;

	return mileage;
}