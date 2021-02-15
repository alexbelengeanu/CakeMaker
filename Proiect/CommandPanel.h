#pragma once
#include <string>
#include <list>
#include "CommandTaker.h"
class CommandPanel {
private:
	std::list<RecipeCake*> meniu;
	CommandTaker* commandTaker = new CommandTaker();
public:
	CommandPanel();
	void generateRecipes(); // generates a list of recipes
	bool checkName(std::string name); // checks if the name entered by the user is available in our menu
	void showProducts(); // prints the list of available recipes
	void selectProduct(std::string name); // select one cake
	void selectProduct(std::string name, unsigned int nrOfProducts); // select multiple cakes
	void showProductsInCarousel(); // prints the current cakes and quantities from the carousel
};

