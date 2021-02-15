#pragma once
#include "RecipeCake.h"
class CakeMaker {
public:
	CakeMaker();
	void takeCommand(RecipeCake* recipe); // prepares a cake based on the recipe
};

