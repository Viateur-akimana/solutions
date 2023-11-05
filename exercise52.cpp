#include <iostream>

int isDigitSum(int n, int m) {
    // Check if either argument is negative, return -1
    if (n < 0 || m < 0) {
        return -1;
    }

    // Calculate the sum of digits of n
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    // Check if the sum is less than m, return 1; otherwise, return 0
    if (sum < m) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    std::cout << isDigitSum(32121, 10) << std::endl; // Output: 1
    std::cout << isDigitSum(32121, 9) << std::endl;  // Output: 0
    std::cout << isDigitSum(13, 6) << std::endl;     // Output: 1
    std::cout << isDigitSum(3, 3) << std::endl;      // Output: 0
    std::cout << isDigitSum(-543, 3) << std::endl;   // Output: -1

    return 0;
}
