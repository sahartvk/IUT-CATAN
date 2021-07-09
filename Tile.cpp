#include<iostream>
#include<string>
#include<vector>
#include "Tile.h"


using namespace std;



Tile::Tile(TileType _type, int _number, const Location& _location) {
	type = _type;
	number = _number;
	location = _location;
}


int Tile::getNumber() {
	return number;
}


Location Tile::getLocation() {
	return location;
}


std::vector<Tile> Tile::GetAdjacent() {
	return adjacent;
}