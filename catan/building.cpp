#include<iostream>
#include<vector>
#include"building.h"

using namespace std;

Building::Building(int _number, string _type, string _color) {
    location = _number;
    type = _type;
    color = _color;

    if(type=="settlement")
        point=1;
    else if(type=="city")
        point=2;
    else
        point=0;

}
int Building::getPoint() { return point; }
int Building::getLocation() { return location; }
string Building::getColor() { return color; }
string Building::getType() { return type; }
