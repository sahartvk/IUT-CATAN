#pragma once
#include "Card.h"
#include<string>

class DevelopmentCard :public Card{
public:
	DevelopmentCard(std::string type);
    std::string gettype();
};
