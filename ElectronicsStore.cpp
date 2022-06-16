#include "Device.h"
#include "Appliances.h"
#include "PowerBank.h"
#include <iostream>
#include <string>


using namespace std;

int main()
{

	setlocale(LC_ALL, "");

	IElectronics* store[5];

	store[0] = new Player(100, 200);
	store[1] = new Computer(100, string("hp"));
	store[2] = new CoffeMachine(15, string("bean to cup"));
	store[3] = new AirFryer(8, 4.5);
	store[4] = new PowerBank(100, 0.18);

	bool open = true;
	while (open)
	{
		cout << "Choose type electronics: 1-Player, 2-Computer, 3-Coffe machine, 4-Air Fryer, 5-Power bank, or 0 to Exit!" << endl;
		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1:
			store[0]->ShowSpec();
			break;
		case 2:
			store[1]->ShowSpec();
			break;
		case 3:
			store[2]->ShowSpec();
			break;
		case 4:
			store[3]->ShowSpec();
			break;
		case 5:
			store[4]->ShowSpec();
			break;
		case 0:
			open = false;
			break;
		default:
			cout << "Choice electronics from 1 to 5 or 0 to exit!" << endl;
			break;
		}
	}

	delete store[0];
	delete store[1];
	delete store[2];
	delete store[3];
	delete store[4];

	return 0;
}
