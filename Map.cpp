#include "Map.h"
#include<fstream>


Map::Map()
{

    //initial tiles
    std::ifstream fin;
    fin.open("initialTiles.txt");
    if(fin){

        std::string line;
        getline(fin,line);
        int pos=line.find(" ");

        Tile t(line.substr(0,pos),stoi(line.substr(pos+1)));
        tiles.push_back(t);
    }
    fin.close();

    //initial seaports
    fin.open("initialSeaports.txt");
    if(fin){

        std::string line;
        getline(fin,line);

        if(line=="anything"){

            seaport s(false,line,1,3);
        }
        else{

            seaport s(true,line,1,2);
        }
    }
    fin.close();

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

std::vector<std::string> Map::moveRobberToTile(int n,std::string color){

    for(int i=0;i<tiles.size();i++){

        if(tiles[i].getRobberIsHere()==true){
            tiles[i].deleteRobberFromTile();
            break;
        }
    }

    //get colors to robb from
    return tiles[n].moveRobberToTile(color);
}
