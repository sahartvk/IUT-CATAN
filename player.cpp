#include<iostream>
#include "player.h"

using namespace std;

Player::Player(string _color) {
	color = _color;
	victorypoint = 0;
}
void Player::setusername (string user) {
	username = user;
}

string Player::getusername () {
	return username;
}

void Player::update_victorypoint() {
	victorypoint++;
}
void Player::update_Developmentcard(string card) {
	//push_back DEV card in vector
	DevelopmentCard dev("development_card",card);
	development.push_back(dev);
}

void Player::update_resource(string resource) {
	//split string and update resource  
    //example: 3-wood

	vector<string>u;
	string T;
	stringstream X(resource);
	while (getline(X, T, '-')) {
		u.push_back(T);
	}
	string _count = u[0];
	string resource = u[1];

	int count = stoi(_count);
	if (resource == "wood")
		wood_cnt += count;

	if (resource == "sheap")
		sheap_cnt += count;

	if (resource == "stone")
		stone_cnt += count;

	if (resource == "brick")
		brick_cnt += count;

	if (resource == "wheat")
		wheat_cnt += count;

}

void Player:: update_building (string building) {//string like S 2 | C 5 | R 7
	//split string and update vectors
	stringstream ss(building);
	string word;
	vector<string>b;
	while (ss >> word) {
		b.push_back(word);
	}
	

	if (b[0] == "C") {
		Building city("city");
		buildings.push_back(city);
	}
	if (b[0] == "S") {
		Building settelment("home");
		buildings.push_back(settelment);
	}

	if (b[0] == "R") {
		Building road("road");
		buildings.push_back(road);
	}

}
int Player :: roll_dice () {
	Dice first;
	Dice second;
	first.roll();
	second.roll();

	return(first.getvalue() + second.getvalue());
}

bool Player:: tradeWithBank (string give, string receive) {

	Trade t(4, 1);
	t.trading_bank(give, receive);
}

bool Player::tradeWithPlayers() {  //not complte
	
	int a, b;
	Trade t(a, b);
	//get vector of resources
    vector<RecourceCard>t1, t2;
	t.trading(t1, t2);

}

vector<string> Player:: can_Buy_Building() {
	vector<string>can_buy;
	//check road
	if (wood_cnt >= 1 && brick_cnt >= 1)
		can_buy.push_back("road");
        //check settlement
	if (wood_cnt >= 1 && brick_cnt >= 1 && sheap_cnt >= 1 && wheat_cnt >= 1)
		can_buy.push_back("settlement");
        //check city
	if (stone_cnt >= 3 && wheat_cnt >= 2)
		can_buy.push_back("city");

	return can_buy;

}
bool Player::can_buy_Dev_card() {
	if (stone_cnt >= 1 && sheap_cnt >= 1 && wheat_cnt >= 1)
		return true;
	return false;
}
int Player::get_victorypoint() {
	return victorypoint;
}
