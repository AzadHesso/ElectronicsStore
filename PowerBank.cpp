#include "PowerBank.h"

PowerBank::PowerBank(int batteryLife, float weight) : Device(batteryLife), Appliances(weight)
{
}

void PowerBank::ShowSpec()
{
	cout << "Power bank battery Life: " << _batteryLife << "%, Power bank weight: " << _weight << " kg." << endl;
}
