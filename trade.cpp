#include<iostream>
#include "trade.h"
using namespace std;
Trade::Trade(int _ratio1, int _ratio2) {
	ratio1 = _ratio1;
	ratio2 = _ratio2;
}
void Trade::changeratio(int _ratio1, int _ratio2) {
	ratio1 = _ratio1;
	ratio2 = _ratio2;
}
bool Trade::trading(vector<ResourceCard> give, vector<ResourceCard> recieve) {
   //bank server;
   //add or minase :\
}
