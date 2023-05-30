#pragma once

#include <string>

namespace util
{
	class console
	{
	public:
		void print(const char* text);
		void print(const std::string& text);
		void typewrite(const char* text, int typespeed = 69);
		void typewrite(const std::string& text, int typespeed = 69);
		std::string triangle(const int rows, const std::string& star);
	};

	class integer
	{
	public:
		int rand(int min, int max);
	};
}