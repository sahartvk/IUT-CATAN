#include "Location.h"
Location::Location() {};
Location::Location(int _x, int _y, locationType t)
{
	x = _x;
	y = _y;
	type = t;
}
string Location::toString()
{
	return to_string(x) + " : " + to_string(y);
}