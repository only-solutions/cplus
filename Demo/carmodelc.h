#ifndef CARMODELC_H
#define CARMODELC_H

#include<iostream>
#include<string>
#include "carplatform.h"
#include "fleetcar.h"
using namespace std;

class CarModelC: public CarPlatform, public FleetCar
{
public:
    CarModelC();

    string getSunroofOption();
    string getCarType();
};

#endif // CARMODELC_H
