#include<iostream>
#include<string>
#include"DevelopmentCard.h"

using namespace std;


DevelopmentCard::DevelopmentCard(Development _type, std::string _name,
	std::string _description) :Card(_name, _description) {

	type = _type;
}