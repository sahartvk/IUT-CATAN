#include<iostream>
#include<string>
#include<vector>
#include"Building.h"

using namespace std;

Building::Building(BuildingType _type, string _color) { type = _type; color = _color; }
int Building::getPoint() { return point; }
string Building::getColor() { return color; }