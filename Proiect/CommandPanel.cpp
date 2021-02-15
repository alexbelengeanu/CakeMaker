#include <iostream>
#include "CommandPanel.h"
#define TRUE 1u
#define FALSE 0u
CommandPanel::CommandPanel() {}
void CommandPanel::generateRecipes() {
	meniu.push_back(new RecipeCake("Savarina", 2));
	meniu.push_back(new RecipeCake("Cheesecake", 3));
	meniu.push_back(new RecipeCake("Tiramisu", 1));
	meniu.push_back(new RecipeCake("Chec", 2));
	meniu.push_back(new RecipeCake("Tarta", 1));
}
bool CommandPanel::checkName(std::string name) {
	std::list<RecipeCake*> ::iterator it;
	bool valid = FALSE;
	for (it = meniu.begin(); it != meniu.end(); ++it) {
		if ((*it)->getName() == name)
			valid = TRUE;
	}
	return valid;
}
void CommandPanel::showProducts() {
	std::list<RecipeCake*> ::iterator it;
	for (it = meniu.begin(); it != meniu.end(); ++it)
		std::cout << '\t' << (*it)->getName() << std::endl;
}
void CommandPanel::selectProduct(std::string name) {
	RecipeCake* recipe = new RecipeCake();
	for (auto it = meniu.begin(); it != meniu.end(); ++it) {
		if ((*it)->getName() == name) {
			recipe = (*it);
			break;
		}
	}
	commandTaker->takeCommand(recipe);
}
void CommandPanel::selectProduct(std::string name, unsigned int nrOfProducts) {
	RecipeCake* recipe = new RecipeCake();
	for (auto it = meniu.begin(); it != meniu.end(); ++it)
		if ((*it)->getName() == name) {
			recipe = (*it);
			break;
		}
	commandTaker->takeCommand(recipe, nrOfProducts);
}
void CommandPanel::showProductsInCarousel() {
	commandTaker->getCakesFromCarousel();
}