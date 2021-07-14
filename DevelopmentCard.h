#pragma once
#include"Card.h"

class DevelopmentCard:public Card {
public:
	DevelopmentCard(std::string _name, string type);
private:
	string name;
	string type;
};