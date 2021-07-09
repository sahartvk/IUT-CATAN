#pragma once
#include <iostream>
#include <vector>
#include "Resource.h"

using namespace std;
class Seaport {
private:
	int ratio1;
	int ratio2;
	Resource resource1;
	Resource resource2;
	bool special;

public:
	Seaport();
	void setSpecial(bool b);
	bool getSpecial(void);
	bool trade();
};