#include "Tile.h"
Tile::Tile(tileType t, int n, Location l)
{
	type = t;
	number = n;
	location = l;
}
void Tile::draw() {};
int Tile::getNumber() { return number; }
ResourceCard getResource() {};
Location Tile::getLocation() { return location; }
vector<Location> Tile::getAdjacent() { return adjacent; }