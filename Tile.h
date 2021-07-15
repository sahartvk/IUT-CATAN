#ifndef TILE_H
#define TILE_H

#include<vector>
#include<string>
#include"Building.h"


class Tile
{
private:
    std::string type;
    int number;
    std::vector<Building> buildings;
    bool robberIsHere;

public:
    Tile(std::string _type,int num);
    int getNumber();
    std::string getCards(std::string color);
    std::vector<std::string> moveRobberToTile(std::string color);
    void addBuildingToTile(Building b);
    bool getRobberIsHere();
    void deleteRobberFromTile;
};

#endif // TILE_H
