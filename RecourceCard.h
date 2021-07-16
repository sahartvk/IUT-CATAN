#pragma once
#include "Card.h"
class RecourceCard :public Card {
public:
	RecourceCard(std::string _type);
	string gettype();
};
