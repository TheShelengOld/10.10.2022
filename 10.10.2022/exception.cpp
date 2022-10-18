#include "exception.h"

const char* xcptn::Exception::what()
{
    return str;
}

const char* xcptn::DivideByZero::what()
{
    return "Can't divide by zero";
}

xcptn::InvalidInput::InvalidInput()
{
	cin.clear();
	cin.ignore(32767, '\n');
}

const char* xcptn::InvalidInput::what()
{
    return "Invalid input";
}

