#pragma once
#include "RecourceCard.h"
#include<vector>

class Trade {
public:
	Trade(int , int);
	void changeratio(int, int);
	bool trading(vector<RecourceCard>, vector<RecourceCard>);
private:
	int ratio1;
	int ratio2;
};
