#include<iostream>
#include<string>
#include<vector>
#include"Building.h"

using namespace std;

Building::Building(int _number, BuildingType _type, string _color) { number = _number; type = _type; color = _color; }
int Building::getPoint() { return point; }
string Building::getColor() { return color; }