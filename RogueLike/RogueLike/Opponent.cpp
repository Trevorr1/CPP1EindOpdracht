#include "Opponent.h"
#include <iostream>
using namespace std;

Opponent::Opponent(int level)
{
	this->level = level;
}


Opponent::~Opponent()
{
}

int Opponent::get_level(){
	return level;
}