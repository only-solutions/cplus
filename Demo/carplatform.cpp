#include "carplatform.h"

//Class destructor
CarPlatform::~CarPlatform() { }

int CarPlatform::getNumberOfCylinders()
{
    return numberOfCylinders;
}
void CarPlatform::setNumberOfCylinders(int nc)
{
    numberOfCylinders=nc;
}
void CarPlatform::printCarDetails()
{
    cout <<endl;
    cout <<"Car type: ";
    cout <<getCarType()<<endl;
    cout <<"Number of Cylinders: ";
    cout <<getNumberOfCylinders()<<endl;
    cout <<"Moonroof option: ";
    cout <<getSunroofOption()<<endl;
}

