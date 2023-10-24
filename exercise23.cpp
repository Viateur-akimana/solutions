#include <iostream>
#include <cctype>

bool isDigitOrAlpha(char ch) {
    // Check if the character is a digit or an alphabetic letter
    return std::isdigit(ch) || std::isalpha(ch);
}

int main() {
    char inputChar;

    // Prompt the user to enter a character
    std::cout << "Enter a character: ";
    std::cin >> inputChar;

    // Call the function to check if the character is a digit or an alphabetic letter
    if (isDigitOrAlpha(inputChar)) {
        std::cout << inputChar << " is a digit or an alphabetic letter." << std::endl;
    } else {
        std::cout << inputChar << " is neither a digit nor an alphabetic letter." << std::endl;
    }

    return 0;
}
