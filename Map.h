#ifndef MAP_H
#define MAP_H

#include"Tile.h"
#include"Seaport.h"
#include"Robber"


class Map
{
private:
    std::vector<Tile> tiles;
    std::vector<SeaPort> seaports;
    Robber robber;
public:
    Map();
    std::vector<std::string> getCards(int num,std::string color);
    void addBuildingToTile(std::string info);
    std::vector<std::string> moveRobberToTile(int n,std::string color);
};

#endif // MAP_H
