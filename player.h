#pragma once
#include<iostream>
#include<vector>
#include "dice.h"
#include "RecourceCard.h"
#include "DevelopmentCard.h"
#include <sstream>
#include <map>
class Player {
public:
	Player();
	int update_point();
	void update_resource(string);
	void update_building(string);
	int sum_dice_num();
	void setusername(string);
	string getusername();
	bool tradeWithBank();
	bool tradeWithPlayers();

private:
	vector<RecourceCard>resources;
	vector<DevelopmentCard>development;
	vector<int>roads;
	vector<int>homes;
	vector<int>cities;
	int victorypoint;
	std::string username;
	Dice first;
	Dice second;

};
