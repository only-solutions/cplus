#ifndef CARMODELB_H
#define CARMODELB_H

#include<iostream>
#include<string>
#include "carplatform.h"
using namespace std;

class CarModelB: public CarPlatform
{
public:
    CarModelB();

    string getSunroofOption();
    string getCarType();
};

#endif // CARMODELB_H
