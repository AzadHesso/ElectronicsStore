#pragma once

#include "IElectronics.h"

class Appliances : virtual public IElectronics
{
public:
	Appliances(float weight);
	void ShowSpec() override;

protected:
	float _weight;
};
   
class CoffeMachine : public Appliances
{
public:
	CoffeMachine(float weight, string makingType);
	void ShowSpec() override;

private:
	string _makingType;
};

class AirFryer : public Appliances
{
public:
	AirFryer(float weight, float capacity);
	void ShowSpec() override;

private:
	float _capacity;
};
