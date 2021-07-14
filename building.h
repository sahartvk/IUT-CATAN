#pragma once
#include"Location.h"
#include"Tile.h"

enum class BuildingType {
	ROAD,
	SETTLEMENT,
	CITY,
	BRIDGE,
};
class Building {
private:
	BuildingType type;
	string color;
	int point;
public:
	Building(BuildingType _type, string _color);
	int getPoint();
	string getColor();
};