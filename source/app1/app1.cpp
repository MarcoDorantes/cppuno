#include "..\consolelib\basic.h"

int main() {
    // Example usage of the Basic Library functions
    print("Hello, world!\n");
    typewrite("This text will be typed out slowly.\n", 100);
    int randomNum = rand(1, 100);
    std::string numString = std::to_string(randomNum);
    print("Generated random number: " + numString + "\n");

    return 0;
}