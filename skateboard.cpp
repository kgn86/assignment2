#include "skateboard.h"
#include <random>

Skateboard::Skateboard(string brand, string model)
{
	setBrand(brand);
	setModel(model);
}

double Skateboard::mileageEstimate(double time)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<double> rng(0.1, 0.5);

	double mileage = rng(gen);

	if (mileage > 25 && mileage < 250)
	{
		std::uniform_real_distribution<double> rng(1, mileage / 3);
		mileage += rng(gen);
	}

	return floor(mileage * time);
}

string Skateboard::toString()
{
	string str = "-> Skateboard\n" + Vehicle::toString();
	return str;
}