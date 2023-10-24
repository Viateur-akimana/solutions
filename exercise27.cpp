#include <iostream>
#include <string>
#include <cctype>
#include <algorithm> 

// Function to check if a string is a palindrome using built-in functions
bool isPalindromeWithFunctions(const std::string& str) {
    std::string reversedStr = str;
    std::reverse(reversedStr.begin(), reversedStr.end());
    return str == reversedStr;
}

// Function to check if a string is a palindrome without using built-in functions
bool isPalindromeWithoutFunctions(const std::string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        // Ignore non-alphanumeric characters from the left
        while (!isalnum(str[left]) && left < right) {
            left++;
        }

        // Ignore non-alphanumeric characters from the right
        while (!isalnum(str[right]) && left < right) {
            right--;
        }

        // Compare characters (case-insensitive)
        if (tolower(str[left]) != tolower(str[right])) {
            return false; // Not a palindrome
        }

        // Move pointers towards the center
        left++;
        right--;
    }

    return true; // Palindrome
}

int main() {
    std::string inputString;

    // Prompt the user to enter a string
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    // Check if the input string is a palindrome using built-in functions
    if (isPalindromeWithFunctions(inputString)) {
        std::cout << "The entered string is a palindrome (using built-in functions)." << std::endl;
    } else {
        std::cout << "The entered string is not a palindrome (using built-in functions)." << std::endl;
    }

    // Check if the input string is a palindrome without using built-in functions
    if (isPalindromeWithoutFunctions(inputString)) {
        std::cout << "The entered string is a palindrome (without using built-in functions)." << std::endl;
    } else {
        std::cout << "The entered string is not a palindrome (without using built-in functions)." << std::endl;
    }

    return 0;
}
