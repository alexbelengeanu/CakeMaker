#include <iostream>
#include <Windows.h>
#include "CommandTaker.h"
#include "CarouselOfCakes.h"
#include "CakeMaker.h"
CommandTaker::CommandTaker() {}
void CommandTaker::takeCommand(RecipeCake* recipe) {
	CarouselOfCakes* carousel = new CarouselOfCakes();
	carousel->getCake(recipe->getName());
	std::cout << "Command received! " << recipe->getName() << " is ready to be served!\n";
	refillCarousel(recipe);
}
void CommandTaker::takeCommand(RecipeCake* recipe, unsigned int nrOfCakes) {
	CarouselOfCakes* carousel = new CarouselOfCakes();
	CakeMaker* cakeMaker = new CakeMaker();
	unsigned int copy = carousel->getCurrentCapacity(recipe->getName());
	if (carousel->getCurrentCapacity(recipe->getName()) < nrOfCakes) {
		for (unsigned int i = 0; i < copy;i++) {
			carousel->getCake(recipe->getName());
			std::cout << "Command received! " << recipe->getName() << " is ready to be served!\n";
		}
		for (unsigned int i = copy;i < nrOfCakes;i++) {
			cakeMaker->takeCommand(recipe);
		}
		std::cout << "Your order is ready now!!\n";
		Sleep(1000);
		refillCarousel(recipe);
	}
	else {
		for (unsigned int i = 0;i < nrOfCakes;i++) {
			carousel->getCake(recipe->getName());
			std::cout << "Command received! " << recipe->getName() << " is ready to be served!\n";
		}
		refillCarousel(recipe);
	}
}
void CommandTaker::refillCarousel(RecipeCake* recipe) {
	CarouselOfCakes* carousel = new CarouselOfCakes();
	CakeMaker* cakeMaker = new CakeMaker();
	if (carousel->getCurrentCapacity(recipe->getName()) < 3) {
		std::cout << "Refill needed! Starting soon...\n";
		Sleep(1000);
		while (carousel->getCurrentCapacity(recipe->getName()) < 10) {
			cakeMaker->takeCommand(recipe);
			carousel->addCake(recipe->getName());
		}
		std::cout << "Carousel refilled with cakes!\n";
	}
}
void CommandTaker::getCakesFromCarousel() {
	CarouselOfCakes* carousel = new CarouselOfCakes();
	carousel->showStorage();
}