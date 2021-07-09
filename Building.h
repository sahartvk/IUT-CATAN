#pragma once
#include"BuildingType.h"
#include"Location.h"
#include"Tile.h"


class Building {
private:
	BuildingType type;
	Location location;
	std::vector<Tile> resources;
	int point;
public:
	Building(BuildingType _type, const Location& _location, const std::vector<Tile>& _resources);
	int getPoint();
	void draw();
};