#include<iostream>
#include "player.h"
#include "Tile.h"
#include "trade.h"
#include "RecourceCard.h"
using namespace std;

Player::Player() {
	victorypoint = 0;
}
void Player:: setusername (string user) {
	username = user;
}

string Player:: getusername () {
	return username;
}

int  Player::update_point() {
	victorypoint = homes.size() + cities.size() * 2;
}

void  Player::update_resource(string resource) {
	//according to neighbors:(
}

void  Player::update_building(string building) {//string like S 2 | C 5 | R 7
	//split string and update vectors
	stringstream ss(building);
	string word;
	vector<string>b;
	while (ss >> word) {
		b.push_back(word);
	}
	int number = stoi(b[1]);

	if (b[0] == "C")
		cities.push_back(number);

	if (b[0] == "S")
		homes.push_back(number);

	if (b[0] == "R")
		roads.push_back(number);

}
int Player::sum_dice_num() {
	first.roll();
	second.roll();

	return(first.getvalue() + second.getvalue());
}


/*bool Player::tradeWithBank() {
	//get ratio1,2
	int a, b;
	trade t(a, b);
	//get vector of resources
	//vector<ResourceCar>t1, t2;
	//t.trading(t1, t2);
}*/

bool Player::tradeWithPlayers() {
	//get ratio1,2
	int a, b;
	Trade t(a, b);
	//get vector of resources
    vector<RecourceCard>t1, t2;
	t.trading(t1, t2);

}
