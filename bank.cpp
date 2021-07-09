#include<iostream>
#include "bank.h"
using namespace std:
bank::bank() {
	brick = 20;
	wood = 20;
	stone = 20;
	wheat = 20;
	sheep = 20;
	knight = 14;
	road_construcction = 2;;
	blessed_year = 2;
	exclusive_right = 2;
	victory = 5;
}
int bank::getBrick() {
	brick--;
}
int bank::getWood() {
	wood--;
}
int bank::getStone() {
	stone--;
}
int bank::getWheat() {
	wheat--;
}
int bank::getSheep() {
	sheep--;
}
int bank::getKnight() {
	knight--;
}
int bank::getRoad_construction() {
	road_construcction--;
	
}
int bank::getBlessed_year() {
	blessed_year --;
	
}
int bank::getExclusive_right() {
	exclusive_right--;
	
}
int bank::getVictory() {
	
	victory --;
}
bool bank::updateResource(int n, string resource, char m) {
	if (m == '+') {   //get resource from bank
		if (resource == "brick")
			brick += n;
		if (resource == "wood")
			wood += n;
		if (resource == "stone")
			stone+= n;
		if (resource == "wheat")
			wheat += n;
		if (resource == "sheep")
			shep+= n;
		if (resource == "knight")
			knight += n;
		if (resource == "road_construction")
			road_construction += n;
		if (resource == "blessed_year")
			blessed_year += n;
		if (resource == "exclusive_right")
			exclusive_right += n;
		if (resource == "victory")
			victory += n;
	 }
	if (m == '-') {   //give resource to bank
		if (resource == "brick")
			if (brick >= n)
				brick -= n;
			else
				cout << "not available" << endl;

		if (resource == "wood")
			if (wood >= n)
				wood -= n;
			else
				cout << "not available" << endl;

		if (resource == "stone")
			if (stone >= n)
				stone -= n;
			else
				cout << "not available" << endl;

		if (resource == "wheat")
			if (wheat >= n)
				wheat -= n;
			else
				cout << "not available" << endl;

		if (resource == "sheep")
			if (sheep >= n)
				sheep -= n;
			else
				cout << "not available" << endl;


		if (resource == "knight")
			if (knight >= n)
				knight -= n;
			else
				cout << "not available" << endl;

		if (resource == "road_construction")
			if (road_construction >= n)
				road_construction -= n;
			else
				cout << "not available" << endl;

		if (resource == "blessed_year")
			if (blessed_year >= n)
				blessed_year -= n;
			else
				cout << "not available" << endl;

		if (resource == "exclusive_right")
			if (exclusive_right >= n)
				exclusive_right -= n;
			else
				cout << "not available" << endl;

		if (resource == "victory")
			if (victory >= n)
				victory -= n;
			else
				cout << "not available" << endl;
	}
}
