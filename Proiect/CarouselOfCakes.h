#pragma once
#include <string>
class CarouselOfCakes {
private:
	static unsigned int sava;
	static unsigned int cheese;
	static unsigned int tiram;
	static unsigned int chec;
	static unsigned int tarta;
	unsigned int maxCapacity = 10;
	unsigned int lowCapacity = 3;
public:
	CarouselOfCakes();
	void addCake(std::string name); // adds a cake in the carousel after the CakeMaker prepared it
	void getCake(std::string name); // substracts a cake from the carousel after the user has requested it
	unsigned int getCurrentCapacity(std::string name); // returns the number of cakes from the carousel based on a name entered by the user
	void showStorage(); // prints the current cakes and quantities from the carousel
};

