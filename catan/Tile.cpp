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

        if(buildings[i].getColor()==color){

            count+=buildings[i].getPoint();
        }
    }

    std::string cardInfo=std::to_string(count);
    cardInfo+="-";
    cardInfo+=type;

    return cardInfo;
}

std::vector<std::string> Tile::moveRobberToTile(std::string color){

    robberIsHere=true;

    //get colors to robb from
    std::vector<std::string> colors;

    for(int i=0;i<buildings.size();i++){

        if(buildings[i].getColor()!=color)
            colors.push_back(buildings[i].getColor());
    }

    return colors;
}

void Tile::addBuildingToTile(Building b){

    //othercodes
    //if there was a city erase its settlement
    if(b.getType()=="city"){

        for(int i=0;i<buildings.size();i++){

            if(b.getLocation()==buildings[i].getLocation()){

                buildings.erase(buildings.begin()+i);
                break;
            }
        }
    }

    buildings.push_back(b);
}

bool Tile::getRobberIsHere(){
    return robberIsHere;
}

void Tile::deleteRobberFromTile(){
   robberIsHere=false;
}
