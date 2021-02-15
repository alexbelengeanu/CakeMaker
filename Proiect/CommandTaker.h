#pragma once
#include "RecipeCake.h"
class CommandTaker {
public:
	CommandTaker();
	void takeCommand(RecipeCake* recipe); // prepare command for one cake
	void takeCommand(RecipeCake* recipe, unsigned int nrOfCakes); // prepare command for multiple cakes
	void refillCarousel(RecipeCake* recipe); // check if the carousel needs a refill
	void getCakesFromCarousel(); // prints the current cakes and quantities from the carousel
};

