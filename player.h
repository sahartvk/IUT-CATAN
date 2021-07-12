#pragma once
#include<iostream>
#include<vector>

class player {
public:
	Player();
	int update();
	void draw();
	void setusername(string);
        string getusername();
	bool tradeWithBank();
	bool tradeWithPlayers();

private:
	vector<resource_card>resources;
	vector<development_card>development;
	vector<road>roads;
	vector<settlement>homes;
	vector<city>cities;
	int victorypoint;
	std::string username;
	Dice first;
	Dice second;

};
