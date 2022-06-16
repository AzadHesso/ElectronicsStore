#include "Appliances.h"
#include <iostream>

using namespace std;


Appliances::Appliances(float weight) : _weight(weight)
{
}

void Appliances::ShowSpec()
{
	cout << "Weight: " << _weight << " kg." << endl;
}

CoffeMachine::CoffeMachine(float weight, string makingType) : Appliances(weight), _makingType(makingType)
{
}

void CoffeMachine::ShowSpec()
{
	cout << "Coffee machine weight: " << _weight << " kg., Coffee making type: " << _makingType << endl;
}

AirFryer::AirFryer(float weight, float capacity) : Appliances(weight), _capacity(capacity)
{
}

void AirFryer::ShowSpec()
{
	cout << "Air fryer weight: " << _weight << " kg., Air fryer capacity: " << _capacity << " l." << endl;
}
