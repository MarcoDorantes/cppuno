#pragma once

#ifdef CONSOLELIB2_EXPORTS
#define CONSOLELIB2_API __declspec(dllexport)
#else
#define CONSOLELIB2_API __declspec(dllimport)
#endif

#include <string>

namespace util
{
	class CONSOLELIB2_API console
	{
	public:
		void print(const char* text);
		void print(const std::string& text);
		void typewrite(const char* text, int typespeed = 69);
		void typewrite(const std::string& text, int typespeed = 69);
		std::string triangle(const int rows, const std::string& star);
		std::wstring triangle(const int rows, const std::wstring& star);
	};

	class CONSOLELIB2_API integer
	{
	public:
		int rand(int min, int max);
	};
}