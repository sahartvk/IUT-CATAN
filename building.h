#pragma once
class Building {
private:
	int location;
	string type;
	string color;
	int point;
public:
	Building(int _location, string _type, string _color);
	string getType();
	string getColor();
	int getLocation();
	int getPoint();
};