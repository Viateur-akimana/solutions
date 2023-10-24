#include <iostream>
#include <string>

std::string toUppercase(const std::string& str) {
    std::string uppercaseStr = str;

    // Iterate through the string and convert characters to uppercase
    for (char& ch : uppercaseStr) {
        // Convert lowercase letters to uppercase (assuming input is in ASCII)
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 'a' + 'A';
        }
    }

    return uppercaseStr;
}

int main() {
    std::string inputString;

    // Prompt the user to enter a string
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    // Call the function to convert the input string to uppercase
    std::string uppercaseString = toUppercase(inputString);

    // Display the uppercase string
    std::cout << "Uppercase string: " << uppercaseString << std::endl;

    return 0;
}

