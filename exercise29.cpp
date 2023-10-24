#include <iostream>
#include <string>
#include <algorithm>
void removeSpaces(std::string& str) {
    // Iterate through the string and remove spaces
    str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
}

int main() {
    std::string inputString;

    // Prompt the user to enter a string
    std::cout << "Enter a string with spaces: ";
    std::getline(std::cin, inputString);

    // Call the function to remove spaces from the input string
    removeSpaces(inputString);

    // Display the resulting string without spaces
    std::cout << "String without spaces: " << inputString << std::endl;

    return 0;
}
