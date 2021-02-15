#include "RecipeCake.h"
RecipeCake::RecipeCake() {
	name = "";
	time = 0;
}
RecipeCake::RecipeCake(std::string RC_name, int RC_time) {
	this->name = RC_name;
	this->time = RC_time;
}
std::string RecipeCake::getName() {
	return name;
}
int RecipeCake::getTime() {
	return time;
}