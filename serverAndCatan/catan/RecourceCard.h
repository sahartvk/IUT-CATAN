#pragma once
#include "Card.h"
#include<string>

class RecourceCard :public Card {
public:
	RecourceCard(std::string _type);
    std::string gettype();
};
