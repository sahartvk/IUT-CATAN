#pragma once
#include<vector>
#include"TileType.h"
#include"Location.h"

class Tile
{
public:
	Tile(TileType _type, int _number, const Location& _location);
	int getNumber();
	Location getLocation();
	std::vector<Tile> GetAdjacent();
private:
	TileType type;
	int number;
	Location location;
	std::vector<Tile> adjacent;
};