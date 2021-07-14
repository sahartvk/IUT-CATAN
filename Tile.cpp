#include "Tile.h"


Tile::Tile(std::string _type,int num){

    type=_type;
    number=num;
    robberIsHere=false;
}

int Tile::getNumber(){
    return number;
}

std::string Tile::getCards(std::string color){

    int count=0;

    for(int i=0;i<buildings.size();i++){

        if(buildings[i].getColor==color){

            count+=buildings[i].getPoint();
        }
    }

    std::string cardInfo=std::stoi(count);
    cardInfo+="-";
    cardInfor+=type;

    return cardInfo;
}

std::vector<std::string> Tile::moveRobberToTile(){

    robberIsHere=true;
    //rest of the code
    //get colors to robb from
}

void Tile::addBuildingToTile(Building b){

    //othercodes
    //not complete if there was a city erase its settlement
    buildings.push_back(b);
}

bool Tile::getRobberIsHere(){
    return robberIsHere;
}

void Tile::deleteRobberFromTile(){
   robberIsHere=false;
}
