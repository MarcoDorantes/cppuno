// app3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "consolelib2.h"

int app3()
{
    // Example usage of the Basic Library functions
    util::console screen;
    screen.print("Hello, world!\n");

    screen.typewrite("This text will be typed out slowly.\n", 100);

    util::integer number;
    int randomNum = number.rand(1, 100);
    std::string numString = std::to_string(randomNum);
    screen.print("Generated random number: " + numString + "\n");

    std::cout << screen.triangle(15, std::string("*"));
    if (std::cout.fail()) throw std::exception("cout output-problem");
    std::wcout.clear();

    std::wcout << screen.triangle(15, std::wstring(L"\u2606"));
    if (std::wcout.fail()) throw std::exception("wcout output-problem");
    std::wcout.clear();
    return 0;
}

int main()
{
    int result = 1;
    try
    {
        result = app3();
    }
    catch (std::exception& e)
    {
        printf_s("%s\n", e.what());
        return result;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
