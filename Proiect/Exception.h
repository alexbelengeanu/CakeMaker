#pragma once
#include <string>
class Exception {
public:
	std::string error;
	int code;
	Exception(); 
	Exception(std::string error, int code); // generates an object with an error message and an error code
};

