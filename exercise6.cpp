#include <iostream>

int main() {
    int sum = 0;

    // Loop through numbers from 2 to 98 (even numbers less than 100)
    for (int i = 2; i < 100; i += 2) {
        sum += i; // Add the current even number to the sum
    }

    // Display the sum of all even numbers less than 100
    std::cout << "Sum of all even numbers less than 100: " << sum << std::endl;

    return 0;
}
