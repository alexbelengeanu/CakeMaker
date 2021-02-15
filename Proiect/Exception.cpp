#include "Exception.h"
Exception::Exception() { 
	error = "0";
	code = 0;
}
Exception::Exception(std::string error, int code)
{
	this->error = error;
	this->code = code;
}