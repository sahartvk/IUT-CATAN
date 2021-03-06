#include "Map.h"
#include<fstream>
#include<string>

using namespace std;


Map::Map()
{
    std::string line;

    //initial tiles
    std::ifstream fin;
    fin.open("initialTiles.txt");

    while(getline(fin,line)){


        int pos=line.find(" ");

        Tile t(line.substr(0,pos),stoi(line.substr(pos+1)));
        tiles.push_back(t);
    }

    fin.close();

    //initial seaports
    ifstream fin2;
    fin2.open("initialSeaports.txt");

    while(getline(fin2,line)){

        if(line=="anything"){

            Seaport s(line,1,3);
            seaports.push_back(s);
        }
        else{

            Seaport s(line,1,2);
            seaports.push_back(s);
        }

    }

    fin2.close();

}

std::vector<std::string> Map::getCards(int num,std::string color){

    std::vector<std::string> answer;

    for(int i=0;i<tiles.size();i++){

        if(tiles[i].getNumber()==num && tiles[i].getRobberIsHere()==false){

            std::string temp=tiles[i].getCards(color);
            answer.push_back(temp);
        }
    }

    return answer;
}

void Map::addBuildingToTile(std::string info){
    //s 1:10,9,8-blue

    std::string type;

    std::string color=info.substr(info.find("-")+1);

    int location=std::stoi(info.substr(info.find(" "),info.find(":")));

    if(info[0]=='s'){
        type="settlement";
    }
    else if(info[0]=='c'){
        type="city";
    }


    Building b(location,type,color);

    info=info.substr(info.find(":")+1);
    info=info.substr(0,info.find("-"));

    int pos2=info.find(",");
    while(pos2>=0){

        pos2=info.find(",");

        int i;
        if(pos2<0)
            i=std::stoi(info);
        else
            i=std::stoi(info.substr(0,pos2));

        if(i!=0)
            tiles[i-1].addBuildingToTile(b);

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
