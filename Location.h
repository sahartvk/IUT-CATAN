#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
enum locationType {
	TILE, EDGE, VERTICE
};
class Location {
private:
	int x;
	int y;
	locationType type;
public:
	Location();
	Location(int _x, int _y, locationType t);
	string toString();
	
};