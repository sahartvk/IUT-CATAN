#include<iostream>
#include<string>
#include<vector>
#include"Building.h"

using namespace std;



Building::Building(BuildingType _type,const Location& _location,  const std::vector<Tile>& _resources) {
	type = _type;
	location = _location;
	resources = _resources;
}


int Building::getPoint() {
	return point;
}


void Building::draw() {

}