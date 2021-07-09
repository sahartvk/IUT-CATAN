#pragma once
#include"Card.h"
#include"Development.h"
#include"Card.h"


class RecourceCard :public Card {
public:
	RecourceCard(Development _type,std::string _name, std::string _description);
private:
	Development type;
};