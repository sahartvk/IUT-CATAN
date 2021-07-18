#include "Seaport.h"
Seaport::Seaport(string resource_, int ratio1_, int ratio2_)
{
	resource = resource_;
	ratio1 = ratio1_;
	ratio2 = ratio2_;
}
int Seaport::getRatio1() { return ratio1; }
int Seaport::getRatio2() { return ratio2; }
string Seaport::getResource() { return resource; }