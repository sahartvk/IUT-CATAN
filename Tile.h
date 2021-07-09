#pragma once
#include <iostream>
#include <vector>
#include "Location.h"
#include "ResourceCard.h"

using namespace std;
enum tileType {
	HILL, PASTURE, MOUNTAIN, FIELD, FOREST, DESERT, SEA
};
class Tile {
private:
	tileType type;
	int number;
	Location location;
	vector<Location> adjacent;

public:
	Tile(tileType t, int n, Location l);
	void draw();
	int getNumber();
	ResourceCard getResource();
	Location getLocation();
	vector<Location> getAdjacent();

};