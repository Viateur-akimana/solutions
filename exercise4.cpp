#include <iostream>

int main() {
    int num1, num2;

    // Prompt the user to enter the first number
    std::cout << "Input 1st number: ";
    std::cin >> num1;

    // Prompt the user to enter the second number
    std::cout << "Input 2nd number: ";
    std::cin >> num2;

    // Swapping logic using a temporary variable
    int temp = num1;
    num1 = num2;
    num2 = temp;

    // Display the swapped numbers
    std::cout << "After swapping the 1st number is: " << num1 << std::endl;
    std::cout << "After swapping the 2nd number is: " << num2 << std::endl;

    return 0;
}
