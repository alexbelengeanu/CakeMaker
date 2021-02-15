#include <iostream>
#include "CarouselOfCakes.h"
unsigned int CarouselOfCakes::sava = 10;
unsigned int CarouselOfCakes::cheese = 10;
unsigned int CarouselOfCakes::tiram = 10;
unsigned int CarouselOfCakes::chec = 10;
unsigned int CarouselOfCakes::tarta = 10;
CarouselOfCakes::CarouselOfCakes() {}
void CarouselOfCakes::addCake(std::string name) {
	if (name == "Savarina") {
		sava++;
	}
	else if (name == "Cheesecake") {
		cheese++;
	}
	else if (name == "Tiramisu") {
		tiram++;
	}
	else if (name == "Chec") {
		chec++;
	}
	else if (name == "Tarta") {
		tarta++;
	}
}
void CarouselOfCakes::getCake(std::string name) {
	if (name == "Savarina") {
		sava--;
	}
	else if (name == "Cheesecake") {
		cheese--;
	}
	else if (name == "Tiramisu") {
		tiram--;
	}
	else if (name == "Chec") {
		chec--;
	}
	else if (name == "Tarta") {
		tarta--;
	}
}
unsigned int CarouselOfCakes::getCurrentCapacity(std::string name) {
	if (name == "Savarina") {
		return sava;
	}
	else if (name == "Cheesecake") {
		return cheese;
	}
	else if (name == "Tiramisu") {
		return tiram;
	}
	else if (name == "Chec") {
		return chec;
	}
	else if (name == "Tarta") {
		return tarta;
	}
	else
		return 0;
}
void CarouselOfCakes::showStorage() {
	std::cout << '\t' << "Savarina: " << sava << std::endl;
	std::cout << '\t' << "Cheesecake: " << cheese << std::endl;
	std::cout << '\t' << "Tiramisu: " << tiram << std::endl;
	std::cout << '\t' << "Chec: " << chec << std::endl;
	std::cout << '\t' << "Tarta: " << tarta << std::endl;
}
