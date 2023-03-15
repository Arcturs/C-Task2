#include <iostream>
#include "Bus.h"

using namespace std;

void initBus(Bus& bus) {
    int size;
    cout << "Size of the bus: ";
    cin >> size;
    if (size <= 0) {
        cout << "Invalid size\n";
        return;
    }
    if (bus.getSize() != 0) {
        cout << "Cannot set size as it was already set\n";
        return;
    }
    bus.setSize(size);
}

void startRoute(bool& isRootStarted) {
    if (isRootStarted) {
        cout << "Root is already started\n";
        return;
    }
    isRootStarted = true;
}

int main()
{
    Bus bus{};
    vector<BusStop> stops = bus.getStops();
    bool isRouteStarted = false;

    while (true) {
        cout << "Choose command:\n";
        cout << "1) Exit;\n";
        if (bus.getSize() == 0) {
            cout << "2) Init bus;\n";
        }
        else {
            cout << "3) Start route;\n";
        }
        if (isRouteStarted) {
            cout << "4) Add passenger;\n";
            cout << "5) Add bus stop;\n";
        }
        int command;
        cout << "Your command: ";
        cin >> command;

        //Add to check if route started, then iterate bus stops and announce them
        //If stops ended, then change the route

        switch (command) {
        case(1):
            return 0;
        case(2):
            initBus(bus);
            break;
        case(3):
            startRoute(isRouteStarted);
            break;
        }

    }
}