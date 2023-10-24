#include <iostream>

int main() {
    int product = 1;

    // Loop through numbers from 1 to 20
    for (int i = 1; i <= 20; i++) {
        // Check if the number is odd
        if (i % 2 != 0) {
            product *= i; // Multiply the current odd number to the product
        }
    }

    // Display the product of all odd numbers between 1 and 20
    std::cout << "Product of all odd numbers between 1 and 20: " << product << std::endl;

    return 0;
}
