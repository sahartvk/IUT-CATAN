#pragma once
#include"Card.h"
#include"Development.h"
#include"Card.h"


class RecourceCard : public Card {
public:
	RecourceCard(std::string _type,std::string _name);
private:
	std::string type;
};