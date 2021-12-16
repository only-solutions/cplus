#ifndef FLEETCAR_H
#define FLEETCAR_H

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class FleetCar
{
public:
    FleetCar()
    {
        waypoints.clear();
    }
    void addWayPoint(string wp);
    vector<string> getWayPoints();
    virtual ~FleetCar();
private:
    vector<string> waypoints;
};

#endif // FLEETCAR_H
