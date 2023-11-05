#include <iostream>

int isEvens(int n) {
    // Check if the number is non-negative
    if (n < 0) {
        return 0;
    }

    // Iterate through each digit of the number
    while (n > 0) {
        int digit = n % 10;
        // If the digit is not even, return 0
        if (digit % 2 != 0) {
            return 0;
        }
        n /= 10;
    }
    
    // All digits are even, return 1
    return 1;
}

int main() {
    std::cout << isEvens(2426) << std::endl; // Output: 1 (2426 is an Evens number)
    std::cout << isEvens(3224) << std::endl; // Output: 0 (3224 is not an Evens number)
    std::cout << isEvens(4680) << std::endl; // Output: 1 (4680 is an Evens number)
    std::cout << isEvens(1357) << std::endl; // Output: 0 (1357 is not an Evens number)

    return 0;
}
