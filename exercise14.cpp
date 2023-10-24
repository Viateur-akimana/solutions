#include <iostream>

void checkNumber(int number) {
    if (number > 0) {
        std::cout << "The number is positive." << std::endl;
    } else if (number < 0) {
        std::cout << "The number is negative." << std::endl;
    } else {
        std::cout << "The number is zero." << std::endl;
    }
}

int main() {
    int number;

    // Prompt the user to enter a number
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Call the function to check the number
    checkNumber(number);

    return 0;
}
