#include <iostream>
#include <string>
#include <algorithm>

// Function to check if a string is a palindrome
bool isPalindrome(const std::string& str) {
    std::string reversedStr = str;
    std::reverse(reversedStr.begin(), reversedStr.end());
    return str == reversedStr;
}

int main() {
    std::string inputString;

    // Prompt the user to enter a string
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    // Check if the entered string is a palindrome
    if (isPalindrome(inputString)) {
        std::cout << "The entered string is a palindrome." << std::endl;
    } else {
        std::cout << "The entered string is not a palindrome." << std::endl;
    }

    return 0;
}
