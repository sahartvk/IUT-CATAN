#pragma once
#include<iostream>
#include<vector>
#include "dice.h"
#include "DevelopmentCard.h"
#include <sstream>
#include <map>
#include "trade.h"
#include "Building.h"
#include "Tile.h"
#include "RecourceCard.h"
#include "Seaport.h"
using namespace std;
class Player {
public:
	Player(string _color);

	void update_resource(vector<string>);
	void update_building(string);
	void update_victorypoint();
	void update_Developmentcard(string);
	vector<string> can_Buy_Building();
	bool can_buy_Dev_card();
	int get_victorypoint();
	int roll_dice();
	void setusername(string);
	string getusername();
	
	void addseaport(Seaport sp);
	int getNumOfResourceCard();
	
private:
	vector<RecourceCard>resources;
	vector<DevelopmentCard>development;
	vector<Building>buildings;
	vector<Seaport> seaports;
	int victorypoint;
	std::string username;
	string color;
	
	int sheap_cnt = 0;
	int wheat_cnt = 0;
	int wood_cnt = 0;
	int stone_cnt = 0;
	int brick_cnt = 0;

};
