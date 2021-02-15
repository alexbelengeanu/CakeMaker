#include "Cake.h"
Cake::Cake() {
	this->name = "";
}
Cake::Cake(std::string C_name) {
	this->name = C_name;
}
std::string Cake::getName() {
	return name;
}