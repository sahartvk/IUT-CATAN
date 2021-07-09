#pragma once
#include <iostream>
#include <vector>
#include "Location.h"

using namespace std;
class Robber {
private:
	Location location;

public:
	Robber();
	Robber(Location);
	void draw() {};
	void move(Location) {};

};