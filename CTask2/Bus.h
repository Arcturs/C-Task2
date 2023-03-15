#pragma once
#include <vector>
#include "BusStop.h"
#include "Passenger.h"
#include <map>
#include <algorithm>

using namespace std;

class Bus
{
private:
	vector<BusStop> stops;
	map<BusStop, vector<Passenger>> stopPassengersMap;
	int size;
	int occupied;

public:
	Bus();
	int getSize();
	void setSize(int size);
	vector<BusStop> getStops();
	bool isOccupied();
	void addStop(BusStop stop);
	void addPassenger(Passenger passenger);
	void passengersLeaveOnStop(BusStop stop);
	void changeDirection();
};
