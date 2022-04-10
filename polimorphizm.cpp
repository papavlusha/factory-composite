#include <iostream>
#include "car.h"
#include "carriage.h"
#include "ship.h"
#include <vector>
#include "composite.h"

using namespace std;

int main() {
	vector <transport*> all_transport;
	short info;
	int n;
	cout << "Enter amount of transport:";
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		cout << "1 - ship\n";
		cout << "2 - car\n";
		cout << "3 - carriage\n";
		cout << "choose option: ";
		cin >> info;
		switch (info)
		{

		case 1:
			all_transport.push_back(transport::createTransport(ship_ID));
			break;
		case 2:
			all_transport.push_back(transport::createTransport(car_ID));
			break;
		case 3:
			all_transport.push_back(transport::createTransport(carriage_ID));
			break;
		default :
			i = i - 1;
			cout << "one more time if you want to add ship enter 1 , if car enter 2 , if carriage enter 3\n";
			system("pause");
			break;
		}
		system("Cls");
	}

	composite* all_again = new composite;

	for (int i = 0; i < n; i++) {
		all_transport[i]->writeToStream(cout);
		all_again->AddTransport(all_transport[i]);
	}

	cout << "\nAverage speed =" << all_again->getAverageSpeed();
	cout << "\nAll Volume =" << all_again->getVolume();

	return 0;
}

