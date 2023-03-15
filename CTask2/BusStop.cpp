#include "BusStop.h"

BusStop::BusStop()
{
}

BusStop::BusStop(string name, int serialNumber)
{
	BusStop::name = name;
	BusStop::serialNumber = serialNumber;
}

string BusStop::getName()
{
	return BusStop::name;
}

int BusStop::getSerialNumber()
{
	return BusStop::serialNumber;
}
