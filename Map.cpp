#include "Map.h"


Map::Map()
{


}

std::vector<std::string> Map::getCards(int num,std::string color){

    std::vector<std::string> answer;

    for(int i=0;i<tiles.size();i++){

        if(tiles[i].getNumber()==num){

            std::string temp=tile[i].getCards(color);
            answer.push_back(temp);
        }
    }

    return answer;
}

void Map::addBuildingToTile(std::string info){

    std::string type;
    std::string color=info.substr(info.find("-")+1);

    if(info[0]==s){
        type="settlement";
    }
    else if(info[0]==c){
        type="city";
    }

    Building b(type,color);

    info=info.substr(info.find(":")+1,info.find("-"));

    int pos2=info.find(",");
    while(pos2>=0){

        pos2=info.find(",");

        int i;
        if(pos2<0)
            i=stoi(info);
        else
            i=stoi(info.substr(0,pos2));

        tiles[i].addBuildingToTile(b);

        info=info.substr(pos2+1);
    }
}

std::vector<std::string> Map::moveRobberToTile(int n){

    for(int i=0;i<tiles.size();i++){

        if(tiles[i].getRobberIsHere()==true){
            tiles[i].deleteRobberFromTile();
            break;
        }
    }

    tiles[n].moveRobberToTile();

    //
}
