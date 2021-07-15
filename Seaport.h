#pragma once
#include <iostream>
#include "Resource.h"

using namespace std;
class Seaport {
private:
	int ratio1;
	int ratio2; 
	string resource;
	
public:
	Seaport(string resource_, int ratio1_, int ratio2_);
	int getRatio1();
	int getRatio2();
	string getResource();
};