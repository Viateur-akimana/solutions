#include <iostream>
#include <string>

int countSpaces(const std::string& inputString) {
    int spaceCount = 0;

    // Iterate through the string and count spaces
    for (char ch : inputString) {
        if (ch == ' ') {
            spaceCount++;
        }
    }

    return spaceCount;
}

int main() {
    std::string inputString;

    // Prompt the user to enter a string
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    // Call the function to count spaces
    int spaces = countSpaces(inputString);

    // Display the number of spaces in the input string
    std::cout << "Number of spaces in the string: " << spaces << std::endl;

    return 0;
}
