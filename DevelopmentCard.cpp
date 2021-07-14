#include<iostream>
#include<string>
#include "DevelopmentCard.h"

using namespace std;


DevelopmentCard::DevelopmentCard( std::string _name,std::string _type) :Card(_name) {

	name = _name;
	type = _type;
}