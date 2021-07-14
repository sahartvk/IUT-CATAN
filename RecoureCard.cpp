#include<iostream>
#include<string>
#include"RecourceCard.h"

using namespace std;

RecourceCard::RecourceCard(string _type, std::string _name) :Card(_name) {

	type = _type;

}