#include <iostream>

int isNormal(int n) {
    if (n <= 1) {
        return 0; // 1 is not a normal number
    }

    // Check for odd factors other than 1
    for (int i = 3; i <= n; i += 2) {
        if (n % i == 0) {
            return 0; // n has an odd factor other than 1
        }
    }

    return 1; // n is a normal number
}

int main() {
    std::cout << isNormal(1) << std::endl; // Output: 1
    std::cout << isNormal(2) << std::endl; // Output: 1
    std::cout << isNormal(3) << std::endl; // Output: 1
    std::cout << isNormal(4) << std::endl; // Output: 1
    std::cout << isNormal(5) << std::endl; // Output: 1
    std::cout << isNormal(6) << std::endl; // Output: 0
    std::cout << isNormal(7) << std::endl; // Output: 1
    std::cout << isNormal(8) << std::endl; // Output: 1
    std::cout << isNormal(9) << std::endl; // Output: 0
    std::cout << isNormal(10) << std::endl; // Output: 0

    return 0;
}
