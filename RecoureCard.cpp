#include<iostream>
#include<string>
#include"RecourceCard.h"

using namespace std;

RecourceCard::RecourceCard(Development _type, std::string _name,
	std::string _description) :Card(_name, _description) {

	type = _type;

}