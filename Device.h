#pragma once

#include "IElectronics.h"

class Device : virtual public IElectronics
{
public:
	Device(int batteryLife);
	void ShowSpec() override;

protected:
	int _batteryLife;
};

class Player final : public Device
{
public:
	Player(int batteryLife, int totalTracks);
	void ShowSpec() override;
private:
	int _totalTracks;
};

class Computer final : public Device
{
public:
	Computer(int batteryLife, string brand);
	void ShowSpec() override;
private:
    string _brand;
};