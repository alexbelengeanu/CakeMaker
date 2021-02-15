#pragma once
#include <string>
class RecipeCake {
private:
	std::string name;
	int time;
public:
	RecipeCake();
	RecipeCake(std::string RC_name, int RC_time); // parametrized constructor
	std::string getName(); // returns recipe's name
	int getTime(); // returns recipe's cooking time
};
