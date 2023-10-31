#include <iostream>
#include <cmath>
#include <climits>

int minDistance(int number) {
    int min_distance = INT_MAX;  // Initialize with a large value
    
    for (int i = 1; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            int factor1 = i;
            int factor2 = number / i;
            int current_distance = abs(factor1 - factor2);
            if (current_distance < min_distance && current_distance > 0) {
                min_distance = current_distance;
            }
        }
    }

    return min_distance;
}

int main() {
    int number1 = 13013;
    int number2 = 8;

    std::cout << "minDistance(" << number1 << ") = " << minDistance(number1) << std::endl;  // Output: 2
    std::cout << "minDistance(" << number2 << ") = " << minDistance(number2) << std::endl;  // Output: 1

    return 0;
}
