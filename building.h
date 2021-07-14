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
	int number;
	BuildingType type;
	string color;
	int point;
public:
	Building(int _number, BuildingType _type, string _color);
	int getPoint();
	string getColor();
};