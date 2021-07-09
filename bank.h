#pragma once
class bank {
public:
	bank();
	int getBrick();
	int getWood();
	int getStone();
	int getWheat();
	int getSheep();
	int getKnight();
	int getRoad_construction();
	int getBlessed_year();
	int getExclusive_right();
	int getVictory();
	bool updateResource(int, string, char);
private:
	int brick ;
	int  wood ;
	int stone;
	int wheat ;
	int sheep ;
	int knight ;
	int road_construcction;
	int blessed_year ;
	int exclusive_right;
	int victory ;
};
