#include "Passenger.h"

Passenger::Passenger(BusStop destination)
{
	Passenger::destination = destination;
}

BusStop Passenger::getDestination()
{
	return Passenger::destination;
}
