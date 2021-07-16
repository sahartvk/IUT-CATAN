#pragma once
#include "Card.h"
class DevelopmentCard :public Card{
public:
	DevelopmentCard(std::string type);
	string gettype();
};
