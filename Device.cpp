#include "Device.h"
#include <iostream>

using namespace std;

Device::Device(int batteryLife) : _batteryLife(batteryLife)
{
}

void Device::ShowSpec()
{
	cout << "Battery Life: " << _batteryLife << "%" << endl;
}

Player::Player(int batteryLife, int totalTracks) : Device(batteryLife), _totalTracks(totalTracks)
{
}

void Player::ShowSpec()
{
	cout << "Battary life player: " << _batteryLife << "% , Total Tracks player: " << _totalTracks << endl;
}

Computer::Computer(int batteryLife, string brand) : Device(batteryLife), _brand(brand)
{
}

void Computer::ShowSpec()
{
	cout << "Battary life Computer: " << _batteryLife << "%, Computer Brand: " << _brand << endl;
}
