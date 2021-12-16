#include "fleetcar.h"
#include "exception"
void FleetCar::addWayPoint(string wp)
{
    try {
        waypoints.push_back(wp);
    }  catch (const runtime_error& error) {
        cout <<"Exception: "<<error.what()<<endl;
    }
}
vector<string> FleetCar::getWayPoints()
{
    return waypoints;
}

//Class destructor
FleetCar::~FleetCar() { }
