#pragma once
#include<string>
#include"LocationType.h"

class Location {
public:
	Location(int _x, int _y, LocationType _type);
	//Location(const Location& location);
	Location();
	operator std::string();
private:
	int x;
	int y;
	LocationType type;
};