#include <random>
#include "jet.h"

Jet::Jet(string model, string brand, string fuel_type, int engine_count)
{
	setBrand(brand);
	setModel(model);
	SetNumberOfEngines(engine_count);
	setFuelType(fuel_type);
}


void Jet::SetNumberOfEngines(int engines)
{
	// todo: does this need to be null checked?
	this->numberOfEngines = engines;
}


double Jet::mileageEstimate(double time)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> rng(40, 100);

	int mileage = rng(gen);

	if (this->numberOfEngines >= 2 && fuelType == "Rocket")
		mileage *= this->numberOfEngines * 1.055;

	return mileage;
}

string Jet::toString()
{
	string str = "-> Jet\n";

	str += Vehicle::toString() + "\n\tFuel type: " + this->fuelType +
		"\n\tEngine count: " + to_string(this->numberOfEngines);

	return str;
}