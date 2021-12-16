#ifndef CARPLATFORM_H
#define CARPLATFORM_H

#include<iostream>
#include<string>
using namespace std;

class CarPlatform
{
public:
    CarPlatform()
    {
        setNumberOfCylinders(4);
    }
    virtual string getSunroofOption() = 0;
    virtual string getCarType() = 0;
    virtual ~CarPlatform();

    int getNumberOfCylinders();
    void setNumberOfCylinders(int nc);
    void printCarDetails();

protected:
    int numberOfCylinders=0;
};



#endif // CARPLATFORM_H
