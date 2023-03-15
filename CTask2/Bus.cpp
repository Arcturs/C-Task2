#include <iostream>
#include <algorithm>
#include "Bus.h"

Bus::Bus()
{
	Bus::size = 0;
	Bus::occupied = 0;
}

int Bus::getSize()
{
	return size;
}

void Bus::setSize(int size)
{
	Bus::size = size;
}

vector<BusStop> Bus::getStops()
{
	return Bus::stops;
}

bool Bus::isOccupied()
{
	return occupied == size;
}

void Bus::addStop(BusStop stop)
{
	stops.push_back(stop);
	stopPassengersMap.insert(pair<BusStop, vector<Passenger> >(stop, vector<Passenger>()));
}

void Bus::addPassenger(Passenger passenger)
{
	stopPassengersMap[passenger.getDestination()].push_back(passenger);
	occupied++;
}

void Bus::passengersLeaveOnStop(BusStop stop)
{
	stopPassengersMap[stop].clear();
	occupied--;
}

void Bus::changeDirection()
{
	reverse(stops.begin(), stops.end());
}
