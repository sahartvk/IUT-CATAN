#include "Map.h"
Map::Map(vector<Tile> t, vector<Seaport> s, Robber r)
{
	tiles = t;
	seaport = s;
	robber = r;
}
void Map::drawMap() {};