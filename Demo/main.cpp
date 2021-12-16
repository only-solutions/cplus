#include <iostream>
#include "addressbook.h"
#include "carplatform.h"
#include "carmodelb.h"
#include "carmodelc.h"

using namespace std;

int main()
{
    AddressBook *ab,ab2;
    ab = new AddressBook();
    ab->add("Fred",120);

    ab2.add("Fred",200);
    ab2.add("Jim",202);
    ab2.add("Sam",200);
    ab2.processMaps();
    ab2.printByAddress();

    //ab->print();

    CarModelB cmb;
    CarModelC cmc;
    cmb.printCarDetails();

    cmc.addWayPoint("A");
    cmc.addWayPoint("B");
    cmc.printCarDetails();
    vector<string> waypointvec;
    waypointvec=cmc.getWayPoints();
    cout <<"Waypoints for Fleet Car: "<<waypointvec.size()<<endl;
}
