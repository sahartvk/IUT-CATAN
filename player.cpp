#include<iostream>
#include "player.h"
#include "Tile.h"
#include "trade.h"
using namespace std;

Player::Player() {
	victorypoint = 0;
}
void Player::getusername() {
	string user;
	cout << "Enter your username" << endl;
	cin >> user;
	username = user;
}
int Player:: update() {
	first.roll();
	second.roll();
	int n=first.getvalue() + second.getvalue();
	// get resource from neighbor
	victorypoint = homes.size() + cities.size() * 2;
	return victorypoint;
}
void Player::draw() {
	//..........
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
