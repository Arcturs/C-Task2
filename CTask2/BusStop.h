#pragma once
#include <string>

using namespace std;

class BusStop 
{
private:
	string name;
	int serialNumber;

public:
	BusStop();
	BusStop(string name, int serialNumber);
	string getName();
	int getSerialNumber();

	bool operator <(const BusStop& bs) const
	{
		return serialNumber < bs.serialNumber;
	}
};
