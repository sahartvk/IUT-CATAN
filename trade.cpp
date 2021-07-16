#include<iostream>
#include "trade.h"
#include "RecourceCard.h"
using namespace std;
Trade::Trade(vector<RecourceCard>& resource, vector<Seaport>& seaports) {
	sources = resource;
	ports = seaports;
}
bool Trade::trade_bank(string give,string recieve) {
	ratio1 = 4;
	ratio2 = 1;
	int count = 0;
	for (int i = 0; i < sources.size(); i++) {
		if (sources[i].gettype() == give)
			count++;
	}
	if (count >= 4) {
		for (int i = 0; count != 0; i++, count--) {
			if (sources[i].gettype() == give)
				sources.erase(sources.begin() + i);
		}
		RecourceCard card(recieve);
		sources.push_back(card);
		return true;
	}
	else
		return false;


}
bool Trade::trade_Clients(vector<RecourceCard>_give , vector<RecourceCard>_recieve) {
	int cnt = 0;
	for (int i = 0; i < sources.size(); i++) {
		for (int j = 0; j < _give.size(); j++) {
			if (sources[i].gettype() == _give[j].gettype())
				cnt++;
		}
	}
	if (cnt >= _give.size())
	{
		while (cnt > 0) {
			for (int i = 0; i < sources.size(); i++) {
				for (int j = 0; j < _give.size(); j++) {
					if (sources[i].gettype() == _give[j].gettype()) {
						sources.erase(sources.begin() + i);
						cnt--;
					}
				}
			}
		}
		return true;
	}
	else
		return false;
}
bool Trade::trade_seaport() {
	//not complete
}
