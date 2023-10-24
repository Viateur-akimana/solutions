#include <iostream>
#include <string>

std::string reverseString(const std::string& input) {
    // Create a new string to store the reversed input string
    std::string reversedString;

    // Iterate through the input string in reverse and append characters to reversedString
    for (int i = input.length() - 1; i >= 0; --i) {
        reversedString += input[i];
    }

    return reversedString;
}

int main() {
    std::string inputString;

    // Prompt the user to enter a string
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    // Call the function to reverse the input string
    std::string reversedString = reverseString(inputString);

    // Display the reversed string
    std::cout << "Reversed string: " << reversedString << std::endl;

    return 0;
}
