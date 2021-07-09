#pragma once
#include <iostream>
#include <vector>
#include "Tile.h"
#include "Seaport.h"
#include "Robber.h"
using namespace std;

class Map {
private:
	vector<Tile> tiles;
	vector<Seaport> seaport;
	Robber robber;

public:
	Map(vector<Tile> t, vector<Seaport> s,Robber r);
	void drawMap();
};