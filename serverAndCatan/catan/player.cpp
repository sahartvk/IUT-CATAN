#include<iostream>
#include<string>
#include "player.h"

using namespace std;

Player::Player(string _color) {
	color = _color;
	victorypoint = 0;
}

Player::Player(){
    victorypoint=0;
}

void Player::setColor(string _color){
    color=_color;
}

string  Player::getColor(){
    return color;
}

void Player::setTurn(int _turn){
    turn=_turn;
}

int Player::getTurn(){
    return turn;
}

int Player::getSheep_cnt(){
    return sheep_cnt;
}

int Player::getWheat_cnt(){
    return wheat_cnt;
}

int Player::getWood_cnt(){
    return wood_cnt;
}

int Player::getStone_cnt(){
    return stone_cnt;
}

int Player::getBrick_cnt(){
    return brick_cnt;
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
	DevelopmentCard dev(card);
	development.push_back(dev);
}

void Player::update_resource(vector<string> resource) {
	//split string and update resource  
    //example: 3-wood
	for (int i = 0; i < resource.size(); i++) {
		vector<string>u;
		string T;
		stringstream X(resource[i]);
		while (getline(X, T, '-')) {
			u.push_back(T);
		}
		string _count = u[0];
		string resource = u[1];

		int count = stoi(_count);
		if (resource == "wood") 
			wood_cnt += count;


        if (resource == "sheep")
            sheep_cnt += count;

		if (resource == "stone")
			stone_cnt += count;

		if (resource == "brick")
			brick_cnt += count;

		if (resource == "wheat")
			wheat_cnt += count;

		for (int i = 0; i != count; ++i) {
			RecourceCard card(resource);
			resources.push_back(card);
		}
	}
}

void Player:: update_building (string building) {//string like S 2 | C 5 | R 7
	//split string and update vectors
	stringstream ss(building);
	string word;
	vector<string>b;
	while (ss >> word) {
		b.push_back(word);
	}
	int number = stoi(b[1]);

	//number,type,color
	if (b[0] == "C") {
		for (int i = 0; i < buildings.size(); i++) {
			if (buildings[i].getLocation() == number && buildings[i].getType()=="home") {
				buildings.erase(buildings.begin() + i);
				Building city(number, "city", color);
				buildings.push_back(city);

			}
		}
		
	}
	if (b[0] == "S") {
		Building settelment(number,"home",color);
		buildings.push_back(settelment);
	}

	if (b[0] == "R") {
		Building road(number,"road",color);
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


vector<string> Player:: can_Buy_Building() { //how to make seaport??
	vector<string>can_buy;
	//check road
	if (wood_cnt >= 1 && brick_cnt >= 1)
		can_buy.push_back("road");

    if (wood_cnt >= 1 && brick_cnt >= 1 && sheep_cnt >= 1 && wheat_cnt >= 1)
		can_buy.push_back("settlement");

	if (stone_cnt >= 3 && wheat_cnt >= 2)
		can_buy.push_back("city");

	return can_buy;

}
bool Player::can_buy_Dev_card() {
    if (stone_cnt >= 1 && sheep_cnt >= 1 && wheat_cnt >= 1)
		return true;
	return false;
}
int Player::get_victorypoint() {
	return victorypoint;
}

void Player::addseaport(Seaport sp) {
	seaports.push_back(sp);
}

int Player::getNumOfResourceCard()
{
	return resources.size();
}

void Player::buySettlement(){

    int wd=0,b=0,sh=0,wt=0;
    for(int i=0;i<resources.size();i++){

        if(resources[i].gettype()=="wood" && wd<1){
            wd++;
            wood_cnt--;
            resources.erase(resources.begin()+i);
        }
        else if(resources[i].gettype()=="brick" && b<1){
            b++;
            brick_cnt--;
            resources.erase(resources.begin()+i);
        }
        else if(resources[i].gettype()=="sheep" && sh<1){
            sh++;
            sheep_cnt--;
            resources.erase(resources.begin()+i);
        }
        else if(resources[i].gettype()=="wheat" && wt<1){
            wt++;
            wheat_cnt--;
            resources.erase(resources.begin()+i);
        }
    }
}

void Player::buyCity(){

    int st=0,wt=0;
    for(int i=0;i<resources.size();i++){

        if(resources[i].gettype()=="sheep" && st<3){
            st++;
            stone_cnt--;
            resources.erase(resources.begin()+i);
        }
        else if(resources[i].gettype()=="wheat" && wt<2){
            wt++;
            wheat_cnt--;
            resources.erase(resources.begin()+i);
        }
    }
}

void Player::buyRoad(){

    int wd=0,b=0;
    for(int i=0;i<resources.size();i++){

        if(resources[i].gettype()=="wood" && wd<1){
            wd++;
            wood_cnt--;
            resources.erase(resources.begin()+i);
        }
        else if(resources[i].gettype()=="brick" && b<1){
            b++;
            brick_cnt--;
            resources.erase(resources.begin()+i);
        }

    }

}

void Player::buyBridge(){

    buyRoad();
}

void Player::buyDevelopment(){

    int st=0,sh=0,wt=0;
    for(int i=0;i<resources.size();i++){

        if(resources[i].gettype()=="wood" && wt<1){
            wt++;
            wheat_cnt--;
            resources.erase(resources.begin()+i);
        }
        else if(resources[i].gettype()=="sheep" && sh<1){
            sh++;
            sheep_cnt--;
            resources.erase(resources.begin()+i);
        }
        else if(resources[i].gettype()=="wheat" && st<1){
            st++;
            stone_cnt--;
            resources.erase(resources.begin()+i);
        }
    }
}
