#include<iostream>
#include<string>
#include "DevelopmentCard.h"

using namespace std;


DevelopmentCard::DevelopmentCard( string _type):Card(_type)  {

}
string DevelopmentCard::gettype() {
	return type;
}
