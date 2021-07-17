#include<iostream>
#include<ctime>
#include<cstdlib>
#include "dice.h"
using namespace std;

Dice::Dice() {
	value = 0;
}
void Dice::roll() {
	srand(time(NULL));
	int num;
	num = rand() % 6 + 1;
	value = num;
}
int Dice::getvalue() {
	return value;
}
