#pragma once
#include "BusStop.h"

using namespace std;

class Passenger 
{
private:
	BusStop destination;

public:
	Passenger(BusStop destination);
	BusStop getDestination();
};