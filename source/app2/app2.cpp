#include "..\consolelib1\consolelib1.h"
#include <iostream>

int main() {
    // Example usage of the Basic Library functions
    util::console screen;
    screen.print("Hello, world!\n");

    screen.typewrite("This text will be typed out slowly.\n", 100);

    util::integer number;
    int randomNum = number.rand(1, 100);
    std::string numString = std::to_string(randomNum);
    screen.print("Generated random number: " + numString + "\n");

    std::cout << screen.triangle(15, std::string("\u2606"));

    return 0;
}