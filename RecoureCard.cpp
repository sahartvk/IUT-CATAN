#include<iostream>
#include<string>
#include"RecourceCard.h"

using namespace std;

RecourceCard::RecourceCard(string _type): Card(_type) {

}
string RecourceCard::gettype() {
	return type;
}
