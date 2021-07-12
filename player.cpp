#include<iostream>
#include "player.h"
#include "Tile.h"
#include "trade.h"
using namespace std;

Player::Player() {
	victorypoint = 0;
}
void Player::setusername(string user) {
	username = user;
}

string Player::getusername(){
	return username;
}
int Player:: update() {
	first.roll();
	second.roll();
	int n=first.getvalue() + second.getvalue();
	// get resource from neighbor
	victorypoint = homes.size() + cities.size() * 2;
	return victorypoint;
}

/*bool Player::tradeWithBank() {
	//get ratio1,2
	int a, b;
	trade t(a, b);
	//get vector of resources
	vector<ResourceCar>t1, t2;
	t.trading(t1, t2);

}*/
bool Player::tradeWithPlayers() {
	//get ratio1,2
	int a, b;
	trade t(a, b);
	//get vector of resources
	vector<ResourceCar>t1, t2;
	t.trading(t1, t2);

}
