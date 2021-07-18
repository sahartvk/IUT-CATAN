#pragma once

class Building {
private:
	int location;
	std::string type;
	std::string color;
	int point;
public:
	Building(int _location, std::string _type, std::string _color);
	std::string getType();
	std::string getColor();
	int getLocation();
	int getPoint();
};
