#include<iostream>
#include<string>
#include"Location.h"


Location::Location(int _x, int _y, LocationType _type) {
	x = _x;
	y = _y;
	type = _type;
}

Location::Location(const Location& location) {
	x = location.x;
	y = location.y;
	type = location.type;
}

Location::Location(){}


Location::operator std::string()
{
	return;//??????
}