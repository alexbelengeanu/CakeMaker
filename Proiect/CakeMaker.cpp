#include <windows.h>
#include <iostream>
#include "CakeMaker.h"
CakeMaker::CakeMaker() {}

void CakeMaker::takeCommand(RecipeCake* recipe) {
	std::cout << "Command received! " << recipe->getName() << " will be ready in " << recipe->getTime() << " seconds.\n";
	Sleep((recipe->getTime()) * 1000);
}