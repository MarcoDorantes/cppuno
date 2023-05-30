#include "consolelib1.h"
#include "..\consolelib\basic.h"
#include <string>
#include <sstream>

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

std::string util::console::triangle(const int rows, const std::string& star)
{
    std::stringstream output;
    int row = 0;
    int space = rows;
    while (row < rows) {
        ++row;
        --space;
        for (int k = space; k > 0; --k) output << ' ';
        for (int k = 0; k < row; ++k) output << star;
        for (int k = 0; k < row - 1; ++k) output << star;
        output << std::endl;
    }
    return output.str();
}

int util::integer::rand(int min, int max)
{
	return ::rand(min, max);
}