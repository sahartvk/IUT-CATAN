#include<iostream>
#include "bank.h"
using namespace std;


bank::bank() {
	brick = 20;
	wood = 20;
	stone = 20;
	wheat = 20;
	sheep = 20;

	knight = 14;
    road_construction = 2;
	blessed_year = 2;
	exclusive_right = 2;
	victory = 5;
}
int bank::getBrick() {
	return brick;
}
int bank::getWood() {
	return wood;
}
int bank::getStone() {
	return stone;
}
int bank::getWheat() {
	return wheat;
}
int bank::getSheep() {
	return sheep;
}
int bank::getKnight() {
	return knight;
}
int bank::getRoad_construction() {
    return road_construction;
	
}
int bank::getBlessed_year() {
	return blessed_year;
	
}
int bank::getExclusive_right() {
	return exclusive_right;
	
}
int bank::getVictory() {
	
	return victory;
}
bool bank::updateResource(int n, string resource, char m) {
	if (m == '+') {   //get resource from bank
		if (resource == "brick"){
			brick += n;
			return true;
		}
		if (resource == "wood"){
			wood += n;
			return true;
		}
		if (resource == "stone"){
			stone+= n;
			return true;
		}
		if (resource == "wheat"){
			wheat += n;
			return true;
		}
		if (resource == "sheep"){
            sheep+= n;
			return true;
		}
		if (resource == "knight"){
			knight += n;
			return true;
		}
		if (resource == "road_construction"){
            road_construction += n;
			return true;
		}
		if (resource == "blessed_year"){
			blessed_year += n;
			return true;
		}
		if (resource == "exclusive_right"){
			exclusive_right += n;
			return true;
		}
		if (resource == "victory"){
			victory += n;
			return true;
		}
	 }
	else if (m == '-') {   //give resource to bank
		if (resource == "brick"){
			if (brick >= n){
				brick -= n;
				return true;
			}
		return false;
		}
			
		if (resource == "wood"){
			if (wood >= n){
				wood -= n;
				return true;
			}
			return false;
		}
			
		if (resource == "stone"){
			if (stone >= n){
				stone -= n;
				return true;
			}
		        return false;
		}

		if (resource == "wheat"){
			if (wheat >= n){
				wheat -= n;
				return true;
			}
			return false;
		}

		if (resource == "sheep"){
			if (sheep >= n){
				sheep -= n;
				return true;
			}
			return false;
		}

		if (resource == "knight"){
			if (knight >= n){
				knight -= n;
			        return true;
			}
			return false;
		}


		if (resource == "road_construction"){
			if (road_construction >= n){
				road_construction -= n;
			         return true;
			}
			return false;
		}

		
		if (resource == "blessed_year"){
			if (blessed_year >= n){
				blessed_year -= n;
			        return true;
			}
			return false;
		}


		if (resource == "exclusive_right"){
			if (exclusive_right >= n){
				exclusive_right -= n;
				return true;
			}
			return false;
		}

			
		
		if (resource == "victory"){
			if (victory >= n){
				victory -= n;
			        return true;
			}
			return false;
		}

	}
}
