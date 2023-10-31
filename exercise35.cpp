#include <iostream>
#include <string>

int countDigit(int number, int digit) {
    // Check if the number or digit is negative
    if (number < 0 || digit < 0) {
        return -1;
    }

    std::string numStr = std::to_string(number);  // Convert number to string
    char digitChar = std::to_string(digit)[0];   // Convert digit to char

    int count = 0;
    for (char c : numStr) {
        if (c == digitChar) {
            count++;
        }
    }

    return count;
}

int main() {
    int number1 = 32121;
    int number2 = 33331;
    int number3 = 3;

    int digit1 = 1;
    int digit2 = 3;

    std::cout << "countDigit(" << number1 << ", " << digit1 << ") = " << countDigit(number1, digit1) << std::endl;  // Output: 2
    std::cout << "countDigit(" << number2 << ", " << digit2 << ") = " << countDigit(number2, digit2) << std::endl;  // Output: 4
    std::cout << "countDigit(" << number2 << ", 6) = " << countDigit(number2, 6) << std::endl;  // Output: 0
    std::cout << "countDigit(" << number3 << ", " << number3 << ") = " << countDigit(number3, number3) << std::endl;  // Output: 1

    // Example with negative number
    std::cout << "countDigit(-543, 3) = " << countDigit(-543, 3) << std::endl;  // Output: -1

    return 0;
}
