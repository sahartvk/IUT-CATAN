#pragma once
#include<vector>
#include "RecourceCard.h"
#include "Seaport.h"

class Trade {
public:
	Trade(vector<RecourceCard>&resource , vector<Seaport>&seaports);
	bool trade_bank(string,string);
	bool trade_Clients(vector<RecourceCard>_give, vector<RecourceCard>_recieve);
	bool trade_seaport();//need correction
	
	
private:
	vector<RecourceCard>sources;
	vector<Seaport>ports;
	
	vector<RecourceCard>give;
	vector<RecourceCard>recieve;
	int ratio1;  //give
	int ratio2;   //get
};
