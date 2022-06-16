#pragma once

#include "Device.h"
#include "Appliances.h"

class PowerBank  final : public Device, Appliances
{
public:
	PowerBank(int batteryLife, float weight);
	void ShowSpec() override;

};