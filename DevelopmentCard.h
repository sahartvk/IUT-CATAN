#pragma once
#include"Card.h"
#include"Development.h"
#include"Card.h"


class DevelopmentCard:public Card {
public:
	DevelopmentCard(Development _type, std::string _name, std::string _description);
private:
	Development type;
};