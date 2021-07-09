#pragma once
#include "Resources.h"
#include<vector>

class Trade {
public:
	Trade(int , int);
	void changeratio(int, int);
	bool trading(vector<ResourceCard>, vector<ResourceCard>);
private:
	int ratio1;
	int ratio2;
};
