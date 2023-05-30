#include "consolelib1.h"
#include "..\consolelib\basic.h"

void util::console::print(const char* text)
{
	::print(text);
}

void util::console::print(const std::string& text)
{
	::print(text);
}

void util::console::typewrite(const char* text, int typespeed)
{
	::typewrite(text, typespeed);
}

void util::console::typewrite(const std::string& text, int typespeed)
{
	::typewrite(text, typespeed);
}

int util::integer::rand(int min, int max)
{
	return ::rand(min, max);
}